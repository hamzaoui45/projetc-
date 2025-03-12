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
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //afficher();
    Rdv rdv;
    ui->tableView_3->setModel(rdv.afficher());

    // Connect the 'clicked' signal of the 'ajouter' button to the on_ajouter_clicked slot
    connect(ui->ajouter, &QPushButton::clicked, this, &MainWindow::on_pb_ajouter_clicked);
    connect(ui->pb_supprimer, &QPushButton::clicked, this, &MainWindow::on_pb_supprimer_clicked);
    connect(ui->pb_generate_pdf, &QPushButton::clicked, this, &MainWindow::on_pb_generate_pdf_clicked);
    connect(ui->pb_recherche, &QPushButton::clicked, this, &MainWindow::on_pb_recherche_clicked);
    connect(ui->pb_trier, &QPushButton::clicked, this, &MainWindow::on_pb_trier_clicked);
    connect(ui->pb_modifier, &QPushButton::clicked, this, &MainWindow::on_pb_modifier_clicked);
    connect(ui->pb_load, &QPushButton::clicked, this, &MainWindow::on_pb_load_clicked);


}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pb_ajouter_clicked()
{
    qDebug() << " Button Clicked: on_pb_ajouter_clicked() triggered!";

    QString heure = ui->timeEdit->time().toString("HH:mm");
    QString nom_vac = ui->lineEdit_nom_vac->text();
    QString nom = ui->lineEdit_nom->text();
    QString prenom = ui->lineEdit_prenom->text();

    if (heure.isEmpty() || nom_vac.isEmpty() || nom.isEmpty() || prenom.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields before submitting.");
        return;
    }

    Rdv rdv(heure, nom_vac, nom, prenom);

    if (rdv.ajouter()) {
        QMessageBox::information(nullptr, "OK", "Rendez-vous ajouté avec succès.");
        qDebug() << " Appointment added successfully!";

        // Refresh Table
        QSqlQueryModel *model = rdv.afficher();
        if (model) {
            ui->tableView_3->setModel(model);
            qDebug() << " Table refreshed!";
        } else {
            qDebug() << " Error refreshing table.";
        }
    } else {
        QMessageBox::critical(nullptr, "Not OK", "Échec de l'ajout du rendez-vous.");
        qDebug() << " ERROR: Failed to add appointment!";
    }
}
void MainWindow::on_pb_supprimer_clicked()
{
    int id_rdv = ui->lineEditsup->text().toInt();

    if (id_rdv == 0) {
        QMessageBox::warning(this, "Input Error", "Please enter a valid appointment ID.");
        return;
    }

    // Confirmation message box
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirm Deletion",
                                  "Are you sure you want to delete this appointment?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        Rdv r;
        if (r.supprimer(id_rdv)) {
            qDebug() << "Deletion successful!";
            ui->statusbar->showMessage("Appointment deleted successfully", 3000);

            QSqlQueryModel *model = r.afficher();
            if (model) {
                ui->tableView_3->setModel(model);
                qDebug() << "Table refreshed!";
            } else {
                qDebug() << "Error refreshing table.";
            }
        } else {
            qDebug() << "Error deleting appointment!";
            ui->statusbar->showMessage("Failed to delete appointment", 3000);
        }
    } else {
        qDebug() << "Deletion canceled!";
    }
}

void MainWindow::on_pb_generate_pdf_clicked()
{
    // Open file dialog to select where to save the PDF
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save PDF"), "", tr("PDF Files (*.pdf)"));
    if (fileName.isEmpty()) {
        return;
    }

    // Create a QPdfWriter object
    QPdfWriter writer(fileName);
    writer.setPageSize(QPageSize::A4);  // Set page size to A4
    writer.setResolution(300);  // Set resolution for quality

    // Create QPainter object to draw on the PDF
    QPainter painter;
    if (!painter.begin(&writer)) {
        qWarning() << "Failed to open file for writing";
        return;
    }

    // Get the model from the table view
    QAbstractItemModel *model = ui->tableView_3->model();

    // Set up initial drawing variables
    int yOffset = 50;
    int margin = 30;
    int rowHeight = 30;
    int columnCount = model->columnCount();

    // Set font for the header
    QFont font("Arial", 10, QFont::Bold);
    painter.setFont(font);

    // Calculate the column widths based on header data (dynamic sizing)
    QVector<int> columnWidths(columnCount);
    for (int col = 0; col < columnCount; ++col) {
        columnWidths[col] = painter.fontMetrics().horizontalAdvance(model->headerData(col, Qt::Horizontal).toString()) + 20; // Padding
    }

    // Draw the table header
    for (int col = 0; col < columnCount; ++col) {
        QRect rect(margin + col * columnWidths[col], yOffset, columnWidths[col], rowHeight);
        painter.drawText(rect, Qt::AlignCenter, model->headerData(col, Qt::Horizontal).toString());
        painter.drawRect(rect);  // Draw border around each header cell
    }

    // Draw the table rows
    yOffset += rowHeight;
    for (int row = 0; row < model->rowCount(); ++row) {
        for (int col = 0; col < columnCount; ++col) {
            QRect rect(margin + col * columnWidths[col], yOffset, columnWidths[col], rowHeight);
            painter.drawText(rect, Qt::AlignCenter, model->data(model->index(row, col)).toString());
            painter.drawRect(rect);  // Draw border around each cell
        }
        yOffset += rowHeight;  // Move to the next row
    }

    // End the painter
    painter.end();

    qDebug() << "PDF saved to" << fileName;
}
void MainWindow::on_pb_recherche_clicked()
{
    QString column = ui->comboBoxrech->currentText(); // Get selected column
    QString value = ui->lineEdit_rech->text().trimmed(); // Get search value

    if (value.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a search value.");
        return;
    }

    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;

    query.prepare("SELECT * FROM RDV WHERE " + column + " LIKE :value");
    query.bindValue(":value", "%" + value + "%");

    if (!query.exec()) {
        QMessageBox::critical(this, "Search Error", "Failed to execute search.");
        return;
    }

    model->setQuery(query);
    ui->tableView_3->setModel(model); // Update the table view
}
void MainWindow::on_pb_trier_clicked()
{
    QString column = ui->comboBoxtri->currentText();  // "id_rdv"
    QString order = ui->comboBoxtri_2->currentText(); // "ASC" or "DESC"

    if (column.isEmpty() || order.isEmpty()) {
        QMessageBox::warning(this, "Sorting Error", "Please select both sorting column and order.");
        return;
    }

    Rdv rdv;
    ui->tableView_3->setModel(rdv.trier(column, order));
}
void MainWindow::on_pb_modifier_clicked()
{
    int id_rdv = ui->lineEdit_id->text().toInt(); // Get ID from input
    QString heure = ui->timeEdit_2->time().toString("HH:mm");
    QString nom_vac = ui->lineEdit_nom_vac_2->text();
    QString nom = ui->lineEdit_nom_2->text();
    QString prenom = ui->lineEdit_prenom_2->text();

    Rdv rdv(heure, nom_vac, nom, prenom);

    if (rdv.modifier(id_rdv)) {
        QMessageBox::information(this, "Success", "Rendez-vous modifié avec succès.");
        ui->tableView_3->setModel(rdv.afficher()); // Refresh table
    } else {
        QMessageBox::critical(this, "Error", "Échec de la modification.");
    }
}
void MainWindow::on_pb_load_clicked()
{
    int id_rdv = ui->lineEdit_id->text().toInt(); // Get ID from input
    Rdv rdv;

    if (rdv.loadById(id_rdv)) {
        ui->timeEdit_2->setTime(QTime::fromString(rdv.getHeure(), "HH:mm"));
        ui->lineEdit_nom_vac_2->setText(rdv.getNomVac());
        ui->lineEdit_nom_2->setText(rdv.getNom());
        ui->lineEdit_prenom_2->setText(rdv.getPrenom());
        QMessageBox::information(this, "Success", "Données chargées avec succès.");
    } else {
        QMessageBox::warning(this, "Error", "Aucun rendez-vous trouvé avec cet ID.");
    }
}

