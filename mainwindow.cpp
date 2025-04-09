#include "mainwindow.h"
#include "ui_mainwindow.h"
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
#include <QTimer>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Rdv rdv;
    ui->tableView_3->setModel(rdv.afficher());

    connect(ui->ajouter, &QPushButton::clicked, this, &MainWindow::on_pb_ajouter_clicked);
    connect(ui->pb_supprimer, &QPushButton::clicked, this, &MainWindow::on_pb_supprimer_clicked);
    connect(ui->pb_generate_pdf, &QPushButton::clicked, this, &MainWindow::on_pb_generate_pdf_clicked);
    connect(ui->pb_recherche, &QPushButton::clicked, this, &MainWindow::on_pb_recherche_clicked);
    connect(ui->pb_trier, &QPushButton::clicked, this, &MainWindow::on_pb_trier_clicked);
    connect(ui->pb_modifier, &QPushButton::clicked, this, &MainWindow::on_pb_modifier_clicked);
    connect(ui->pb_load, &QPushButton::clicked, this, &MainWindow::on_pb_load_clicked);
    connect(ui->pb_statistiques, &QPushButton::clicked, this, &MainWindow::updateVaccinationChart);
    connect(ui->liste_attente, &QPushButton::clicked, this, &MainWindow::on_liste_attente_clicked);
    connect(ui->tableView, &QTableView::clicked, this, &MainWindow::onRowClicked);




    updateVaccinationChart();
}
void MainWindow::onRowClicked(const QModelIndex &index)
{
    if (!index.isValid()) return;

    int statutColumn = 6; // Column for STATUT
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

    // Show confirmation dialog if changing to "Annulé"
    if (newStatut == "Annulé") {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirmer Suppression",
                                      "Êtes-vous sûr de vouloir annuler cette réservation ?",
                                      QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            // Update the statut in the model
            statutItem->setText(newStatut);

            // Set up a timer to delete the row after 3 seconds
            QTimer::singleShot(3000, this, [this, model, clickedRow, statutItem]() {
                // Proceed with deletion after 3 seconds
                // Remove row from the model
                model->removeRow(clickedRow);

                // Also delete from the database
                QSqlQuery deleteQuery;
                deleteQuery.prepare("DELETE FROM RDV WHERE ID_RDV = :id");
                deleteQuery.bindValue(":id", model->item(clickedRow, 0)->text()); // Assuming ID_RDV is the first column
                if (!deleteQuery.exec()) {
                    qDebug() << "Failed to delete from database: " << deleteQuery.lastError().text();
                }

                // Optionally, show a message to confirm the deletion
                QMessageBox::information(this, "Suppression", "La réservation a été annulée et supprimée.");
            });
        } else {
            // If the user presses No, revert the status back to its original value
            statutItem->setText(currentStatut);
        }
    } else {
        // Update the statut without confirmation for "Attente" and "Confirmé"
        statutItem->setText(newStatut);
    }
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_liste_attente_clicked()
{
    Rdv rdv;
    ui->tableView->setModel(rdv.afficherListeAttenteAvecStatut());
}

void MainWindow::on_pb_ajouter_clicked()
{
    QString heure = ui->timeEdit->time().toString("HH:mm");
    QString nom_vac = ui->lineEdit_nom_vac->text();
    QString nom = ui->lineEdit_nom->text();
    QString prenom = ui->lineEdit_prenom->text();
    QDate date = ui->calendarWidget->selectedDate(); // Fixed: use QDate

    /*if (heure.isEmpty() || nom_vac.isEmpty() || nom.isEmpty() || prenom.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs.");
        return;
    }*/

    Rdv rdv(heure, nom_vac, nom, prenom, date);

    if (rdv.ajouter()) {
        QMessageBox::information(this, "Succès", "Rendez-vous ajouté !");
        ui->tableView_3->setModel(rdv.afficher());
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de l'ajout !");
    }
}

void MainWindow::on_pb_supprimer_clicked()
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

void MainWindow::on_pb_generate_pdf_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Enregistrer PDF"), "", tr("PDF Files (*.pdf)"));
    if (fileName.isEmpty()) return;

    QPdfWriter writer(fileName);
    writer.setPageSize(QPageSize::A4);
    writer.setResolution(300);
    writer.setPageMargins(QMarginsF(10, 10, 10, 10));

    QPainter painter;
    if (!painter.begin(&writer)) return;

    QAbstractItemModel *model = ui->tableView_3->model();
    if (!model) {
        QMessageBox::warning(this, "Erreur", "Aucune donnée à exporter.");
        return;
    }

    int yOffset = 100;
    int margin = 50;
    int rowHeight = 40;
    int columnCount = model->columnCount();
    int pageWidth = writer.width() - 2 * margin;
    QVector<int> columnWidths(columnCount, pageWidth / columnCount);

    painter.setFont(QFont("Arial", 16, QFont::Bold));
    painter.drawText(margin, yOffset - 50, "Liste des Rendez-vous");

    painter.setFont(QFont("Arial", 10, QFont::Bold));
    for (int col = 0; col < columnCount; ++col) {
        QRect rect(margin + col * columnWidths[col], yOffset, columnWidths[col], rowHeight);
        painter.drawRect(rect);
        painter.drawText(rect, Qt::AlignCenter, model->headerData(col, Qt::Horizontal).toString());
    }

    painter.setFont(QFont("Arial", 10));
    yOffset += rowHeight;
    for (int row = 0; row < model->rowCount(); ++row) {
        for (int col = 0; col < columnCount; ++col) {
            QRect rect(margin + col * columnWidths[col], yOffset, columnWidths[col], rowHeight);
            painter.drawRect(rect);
            painter.drawText(rect, Qt::AlignCenter, model->data(model->index(row, col)).toString());
        }
        yOffset += rowHeight;
        if (yOffset + rowHeight > writer.height() - 100) {
            writer.newPage();
            yOffset = 100;
        }
    }

    painter.setFont(QFont("Arial", 8));
    painter.drawText(margin, writer.height() - 50, "Généré le : " + QDateTime::currentDateTime().toString("dd/MM/yyyy HH:mm:ss"));
    painter.end();

    QMessageBox::information(this, "Succès", "PDF exporté !");
}

void MainWindow::on_pb_recherche_clicked()
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

void MainWindow::on_pb_trier_clicked()
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

void MainWindow::on_pb_modifier_clicked()
{
    int id_rdv = ui->lineEdit_id->text().toInt();
    QString heure = ui->timeEdit_2->time().toString("HH:mm");
    QString nom_vac = ui->lineEdit_nom_vac_2->text();
    QString nom = ui->lineEdit_nom_2->text();
    QString prenom = ui->lineEdit_prenom_2->text();
    QDate date = ui->calendarWidget->selectedDate(); // Fixed

    Rdv rdv(heure, nom_vac, nom, prenom, date);

    if (rdv.modifier(id_rdv)) {
        QMessageBox::information(this, "Succès", "Rendez-vous modifié !");
        ui->tableView_3->setModel(rdv.afficher());
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de la modification.");
    }
}

void MainWindow::on_pb_load_clicked()
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

void MainWindow::updateVaccinationChart()
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
