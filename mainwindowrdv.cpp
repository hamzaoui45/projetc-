#include "mainwindowrdv.h"
#include "ui_mainwindowrdv.h"
#include "rdv.h"
#include <QMessageBox>
#include <QPdfWriter>
#include <QPainter>
#include <QFileDialog>
#include <QTableView>
#include <QHeaderView>
#include <QAbstractItemModel>
#include <QDebug>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QtCharts/QChart>
#include <QtCharts/QPieSeries>
#include <QVBoxLayout>
#include <QLayoutItem>
#include <QSqlError>
#include <QSqlQuery>
#include <QTimer>
#include <QSet>
#include <QMap>
#include <QSerialPort>
#include <QSerialPortInfo>

MainWindowrdv::MainWindowrdv(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowrdv)
{
    ui->setupUi(this);

    tunisianHolidays = {
        QDate(QDate::currentDate().year(), 1, 1),   // New Year
        QDate(QDate::currentDate().year(), 3, 20),  // Independence Day
        QDate(QDate::currentDate().year(), 4, 9),   // Martyrs' Day
        QDate(QDate::currentDate().year(), 7, 25),  // Republic Day
        QDate(QDate::currentDate().year(), 10, 15), // Evacuation Day
    };
    arduino = new Arduino(this);

    // Connect signals from Arduino class
    connect(arduino, &Arduino::passwordReceived, this, &MainWindowrdv::validatePassword);
    connect(arduino, &Arduino::vaccineIdReceived, this, &MainWindowrdv::handleVaccineID);

    // Try connecting to Arduino
    if (arduino->connectArduino("COM5", 9600)) {
        qDebug() << "Connected to Arduino!";
    } else {
        qDebug() << "Failed to connect!";
    }
    updateCalendarColors();

    Rdv rdv;
    ui->tableView_3->setModel(rdv.afficher());

    QStandardItemModel* model = rdv.afficherListeAttenteAvecStatut();
    ui->tableView->setModel(model);

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [=]() {
        Rdv rdvRefresh;
        ui->tableView->setModel(rdvRefresh.afficherListeAttenteAvecStatut());
    });
    timer->start(3);

    connect(ui->pb_ajouter, &QPushButton::clicked, this, &MainWindowrdv::on_pb_ajouter_clicked);
    connect(ui->pb_supprimer, &QPushButton::clicked, this, &MainWindowrdv::on_pb_supprimer_clicked);
    connect(ui->pb_generate_pdf, &QPushButton::clicked, this, &MainWindowrdv::on_pb_generate_pdf_clicked);
    connect(ui->pb_recherche, &QPushButton::clicked, this, &MainWindowrdv::on_pb_recherche_clicked);
    connect(ui->pb_trier, &QPushButton::clicked, this, &MainWindowrdv::on_pb_trier_clicked);
    connect(ui->pb_modifier, &QPushButton::clicked, this, &MainWindowrdv::on_pb_modifier_clicked);
    connect(ui->pb_load, &QPushButton::clicked, this, &MainWindowrdv::on_pb_load_clicked);
    connect(ui->pb_statistiques, &QPushButton::clicked, this, &MainWindowrdv::updateVaccinationChart);
    connect(ui->liste_attente, &QPushButton::clicked, this, &MainWindowrdv::on_liste_attente_clicked);
    connect(ui->tableView, &QTableView::clicked, this, &MainWindowrdv::onRowClicked);


    updateVaccinationChart();

}

MainWindowrdv::~MainWindowrdv()
{
    delete ui;
}

void MainWindowrdv::onRowClicked(const QModelIndex &index)
{
    if (!index.isValid()) return;

    int statutColumn = 6;
    int clickedRow = index.row();

    QStandardItemModel* model = qobject_cast<QStandardItemModel*>(ui->tableView->model());
    if (!model) return;

    QStandardItem* statutItem = model->item(clickedRow, statutColumn);
    if (!statutItem) return;

    QString currentStatut = statutItem->text();
    QString newStatut;

    if (currentStatut == "Attente") {
        newStatut = "Annulé";
    } else if (currentStatut == "Annulé") {
        newStatut = "Confirmé";
    } else {
        newStatut = "Attente";
    }

    if (newStatut == "Annulé") {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirmer Suppression",
                                      "Êtes-vous sûr de vouloir annuler cette réservation ?",
                                      QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            QSqlQuery deleteQuery;
            deleteQuery.prepare("DELETE FROM RDV WHERE ID_RDV = :id");
            deleteQuery.bindValue(":id", model->item(clickedRow, 0)->text());
            if (!deleteQuery.exec()) {
                qDebug() << "Failed to delete from database: " << deleteQuery.lastError().text();
                return;
            }

            statutItem->setText(newStatut);

            QTimer::singleShot(3000, this, [this, model, clickedRow]() {
                if (clickedRow >= 0 && clickedRow < model->rowCount()) {
                    model->removeRow(clickedRow);
                    qDebug() << "Row removed from model.";
                    QMessageBox::information(this, "Suppression", "La réservation a été annulée et supprimée.");
                } else {
                    qDebug() << "Invalid row after timer, skipping removal.";
                }
            });
        } else {
            statutItem->setText("Confirmé");
        }
    } else {
        statutItem->setText(newStatut);
    }
}

void MainWindowrdv::on_liste_attente_clicked()
{
    Rdv rdv;
    ui->tableView->setModel(rdv.afficherListeAttenteAvecStatut());
}

void MainWindowrdv::on_pb_ajouter_clicked()
{
    QString heure = ui->timeEdit->time().toString("HH:mm");
    QString nom_vac = ui->lineEdit_nom_vac->text();
    QString nom = ui->lineEdit_nom->text();
    QString prenom = ui->lineEdit_prenom->text();
    QDate date = ui->calendarWidget->selectedDate();

    Rdv rdv(heure, nom_vac, nom, prenom, date);

    if (rdv.ajouter()) {
        QMessageBox::information(this, "Succès", "Rendez-vous ajouté !");
        ui->tableView_3->setModel(rdv.afficher());
        updateCalendarColors();
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de l'ajout !");
    }
}

void MainWindowrdv::on_pb_supprimer_clicked()
{
    int id_rdv = ui->lineEditsup->text().toInt();
    if (id_rdv == 0) {
        QMessageBox::warning(this, "Erreur", "ID invalide.");
        return;
    }

    QMessageBox::StandardButton reply = QMessageBox::question(this, "Suppression", "Confirmer la suppression ?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        Rdv r;
        if (r.supprimer(id_rdv)) {
            ui->statusbar->showMessage("Supprimé avec succès", 3000);
            ui->tableView_3->setModel(r.afficher());
        } else {
            ui->statusbar->showMessage("Échec de suppression", 3000);
        }
    }
}

void MainWindowrdv::on_pb_generate_pdf_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Enregistrer PDF"), "", tr("PDF Files (*.pdf)"));
    if (fileName.isEmpty()) return;

    QPdfWriter writer(fileName);
    writer.setPageSize(QPageSize::A4);
    writer.setResolution(300);
    writer.setPageMargins(QMarginsF(0, 0, 0, 0)); // Plein écran sans marge par défaut

    QPainter painter;
    if (!painter.begin(&writer)) return;

    QAbstractItemModel *model = ui->tableView_3->model();
    if (!model) {
        QMessageBox::warning(this, "Erreur", "Aucune donnée à exporter.");
        return;
    }


    QColor backgroundColor("#A4D4D4");
    QColor headerColor("#126C6C");
    QColor rowColor1("#D3F5F5");
    QColor rowColor2("#C0EBEB");
    QColor textColor(Qt::black);
    QColor titleColor("#0B4C4C");

    QRect fullPage = writer.pageLayout().paintRectPixels(writer.resolution());
    painter.fillRect(fullPage, backgroundColor);

    int margin = 40;
    int yOffset = 40;
    int rowHeight = 45;

    QFont titleFont("Helvetica", 20, QFont::Bold);
    painter.setFont(titleFont);
    painter.setPen(titleColor);
    painter.drawText(QRect(0, yOffset, writer.width(), 50), Qt::AlignCenter, "Liste des Rendez-vous");

    yOffset += 60;

    // Colonnes
    int colCount = model->columnCount();
    int tableWidth = writer.width() - 2 * margin;
    QVector<int> colWidths(colCount, tableWidth / colCount);

    // En-têtes
    painter.setFont(QFont("Helvetica", 11, QFont::Bold));
    for (int col = 0; col < colCount; ++col) {
        QRect rect(margin + col * colWidths[col], yOffset, colWidths[col], rowHeight);
        painter.fillRect(rect, headerColor);
        painter.setPen(Qt::white);
        painter.drawText(rect.adjusted(6, 0, -6, 0), Qt::AlignVCenter | Qt::AlignLeft,
                         model->headerData(col, Qt::Horizontal).toString());
    }

    yOffset += rowHeight;

    // Données
    painter.setFont(QFont("Helvetica", 10));
    for (int row = 0; row < model->rowCount(); ++row) {
        QColor rowBg = (row % 2 == 0) ? rowColor1 : rowColor2;

        for (int col = 0; col < colCount; ++col) {
            QRect rect(margin + col * colWidths[col], yOffset, colWidths[col], rowHeight);
            painter.fillRect(rect, rowBg);
            painter.setPen(textColor);

            QString cellText = model->data(model->index(row, col)).toString();

            // Si colonne de date
            if (model->headerData(col, Qt::Horizontal).toString().contains("DATE")) {
                QDateTime dt = QDateTime::fromString(cellText, Qt::ISODate);
                if (dt.isValid()) {
                    cellText = dt.toString("dd/MM/yyyy");
                }
            }

            painter.drawText(rect.adjusted(6, 0, -6, 0), Qt::AlignVCenter | Qt::AlignLeft, cellText);
        }

        yOffset += rowHeight + 2;


        if (yOffset + rowHeight > fullPage.height() - 60) {
            writer.newPage();
            painter.fillRect(fullPage, backgroundColor);
            yOffset = 40;
        }
    }

    painter.end();
    QMessageBox::information(this, "Succès", "PDF généré avec succès !");
}

void MainWindowrdv::on_pb_recherche_clicked()
{
    QString column = ui->comboBoxrech->currentText();
    QString value = ui->lineEdit_rech->text().trimmed();

    if (value.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Champ de recherche vide.");
        return;
    }

    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM RDV WHERE " + column + " LIKE :value");
    query.bindValue(":value", "%" + value + "%");

    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Recherche échouée.");
        return;
    }

    model->setQuery(query);
    ui->tableView_3->setModel(model);
}

void MainWindowrdv::on_pb_trier_clicked()
{
    QString column = ui->comboBoxtri->currentText();
    QString order = ui->comboBoxtri_2->currentText();

    if (column.isEmpty() || order.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Sélectionner une colonne et un ordre.");
        return;
    }

    Rdv rdv;
    ui->tableView_3->setModel(rdv.trier(column, order));
}
void MainWindowrdv::on_pb_modifier_clicked()
{
    int id_rdv = ui->lineEdit_id->text().toInt();
    QString heure = ui->timeEdit_2->time().toString("HH:mm");
    QString nom_vac = ui->lineEdit_nom_vac_2->text();
    QString nom = ui->lineEdit_nom_2->text();
    QString prenom = ui->lineEdit_prenom_2->text();
    QDate date = ui->calendarWidget->selectedDate();

    Rdv rdv(heure, nom_vac, nom, prenom, date);

    if (rdv.modifier(id_rdv)) {
        QMessageBox::information(this, "Succès", "Rendez-vous modifié !");
        ui->tableView_3->setModel(rdv.afficher());


        ui->calendarWidget->showSelectedDate();
        updateCalendarColors();
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de la modification.");
    }
}


void MainWindowrdv::on_pb_load_clicked()
{
    int id_rdv = ui->lineEdit_id->text().toInt();
    Rdv rdv;

    if (rdv.loadById(id_rdv)) {
        ui->timeEdit_2->setTime(QTime::fromString(rdv.getHeure(), "HH:mm"));
        ui->lineEdit_nom_vac_2->setText(rdv.getNomVac());
        ui->lineEdit_nom_2->setText(rdv.getNom());
        ui->lineEdit_prenom_2->setText(rdv.getPrenom());
        ui->calendarWidget->setSelectedDate(rdv.getDateRdv()); // Fixed
        QMessageBox::information(this, "Succès", "Données chargées !");
    } else {
        QMessageBox::warning(this, "Erreur", "Aucun RDV trouvé !");
    }
}

void MainWindowrdv::updateVaccinationChart()
{
    QSqlQuery query;
    query.prepare("SELECT nom_vac, COUNT(*) as count FROM RDV GROUP BY nom_vac ORDER BY count ASC");

    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Impossible de générer les statistiques.");
        return;
    }

    QPieSeries *series = new QPieSeries();
    int total = 0;

    while (query.next()) {
        total += query.value(1).toInt();
    }

    query.first();
    while (query.isValid()) {
        QString nomVac = query.value(0).toString();
        int count = query.value(1).toInt();

        if (!nomVac.isEmpty() && count > 0) {
            QPieSlice *slice = series->append(nomVac, count);
            double percentage = (double)count / total * 100;
            slice->setLabel(QString("%1: %2%").arg(nomVac).arg(percentage, 0, 'f', 1));
        }
        query.next();
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Répartition des Rendez-vous par Vaccin");
    chart->legend()->setVisible(true);
    series->setLabelsVisible(true);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QLayout *layout = ui->chartwidget->layout();
    if (!layout) {
        layout = new QVBoxLayout(ui->chartwidget);
        ui->chartwidget->setLayout(layout);
    }

    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        delete item->widget();
        delete item;
    }

    layout->addWidget(chartView);
}
void MainWindowrdv::updateCalendarColors() {
    QTextCharFormat defaultFormat;
    ui->calendarWidget->setDateTextFormat(QDate(), defaultFormat); // Clear all formatting

    rdvCountPerDate.clear();
    QSqlQuery query("SELECT DATE_RDV, COUNT(*) FROM RDV GROUP BY DATE_RDV");
    while (query.next()) {
        QDate date = query.value(0).toDate();
        int count = query.value(1).toInt();
        rdvCountPerDate[date] = count;
    }

    QDate today = QDate::currentDate();
    QDate first = ui->calendarWidget->minimumDate();
    QDate last = ui->calendarWidget->maximumDate();

    for (QDate date = first; date <= last; date = date.addDays(1)) {
        QTextCharFormat format;

        if (tunisianHolidays.contains(date)) {
            format.setBackground(QColor("#800080"));  // Purple for holidays
            format.setForeground(Qt::white);
        }
        else if (date.dayOfWeek() == 7) {  // Sunday
            format.setBackground(QColor("#D3D3D3"));
            format.setForeground(Qt::black);
        }
        else if (date < today) {
            format.setBackground(QColor("#FFCCCC"));
            format.setForeground(Qt::black);
        }
        else if (rdvCountPerDate.contains(date)) {
            int count = rdvCountPerDate[date];
            if (count >= 15) {
                format.setBackground(QColor("#FF6961"));  // Soft red
            }
            else if (count >= 10) {
                format.setBackground(QColor("#FFFACD"));  // Soft yellow
            }
            else {
                format.setBackground(QColor("#FFA500"));  // Orange (optional)
            }
        }
        else {
            format.setBackground(QColor("#90EE90"));  // Light green for available
        }

        ui->calendarWidget->setDateTextFormat(date, format);
    }
}

void MainWindowrdv::on_calendarWidget_clicked(const QDate &date)
{
    if (date.dayOfWeek() == Qt::Sunday || tunisianHolidays.contains(date)) {
        QMessageBox::warning(this, "Jour non ouvrable", "Vous ne pouvez pas prendre un rendez-vous ce jour.");
        return;
    }

    selectedDate = date;
    // Put the rest of your logic here for selecting a date, if any
}

void MainWindowrdv::validatePassword(const QString &password)
{
    QSqlQuery query;
    query.prepare("SELECT nom || ' ' || prenom AS full_name FROM employés WHERE mdp = :password");
    query.bindValue(":password", password);  // Bind the input password to the query

    if (query.exec()) {
        if (query.next()) {
            QString fullName = query.value(0).toString();  // Get the full name from the query result

            // Debug: Show the full name being sent to Arduino
            qDebug() << "Password correct. Sending to Arduino: SUCCESS:" << fullName;
            arduino->sendResponse("SUCCESS:" + fullName);  // Send SUCCESS with full name
        } else {
            // Debug: No password found
            qDebug() << "Password NOT found in database. Sending DENY to Arduino.";
            arduino->sendResponse("DENY");  // Send DENY if password not found
        }
    } else {
        qDebug() << "Error checking password:" << query.lastError().text();
        arduino->sendResponse("DENY");  // Send DENY in case of query error
    }
}

void MainWindowrdv::handleVaccineID(const QString &vaccineID)
{
    QSqlQuery query;
    query.prepare("SELECT temp FROM vaccins WHERE id_vac = :id");
    query.bindValue(":id", vaccineID);  // Bind the input password to the query

    if (query.exec()) {
        if (query.next()) {
            QString temp = query.value(0).toString();  // Get the full name from the query result

            // Debug: Show the full name being sent to Arduino
            //qDebug() << "Password correct. Sending to Arduino: SUCCESS:" << fullName;
            arduino->sendResponse("ON:" + temp);  // Send SUCCESS with full name
        } else {
            // Debug: No password found
            //qDebug() << "Password NOT found in database. Sending DENY to Arduino.";
            arduino->sendResponse("OFF");  // Send DENY if password not found
        }
    } else {
        //qDebug() << "Error checking password:" << query.lastError().text();
        arduino->sendResponse("OFF");  // Send DENY in case of query error
    }
}
