#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "patient.h"
#include <QPrinter>
#include <QPainter>
#include <QFileDialog>
#include <QMessageBox>
#include <QRegularExpression>
#include <QDebug>
#include <QSqlQueryModel>
#include <QSqlError>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->bouton_valider_ajout, &QPushButton::clicked, this, &MainWindow::boutonValider_clicked);
    connect(ui->afficher_button_modif, &QPushButton::clicked, this, &MainWindow::afficher_buttonmodif_clicked);
    connect(ui->valider_button_modif, &QPushButton::clicked, this, &MainWindow::valider_buttonmodif_clicked);
    connect(ui->valider_supression, &QPushButton::clicked, this, &MainWindow::valider_supression_clicked);
    connect(ui->tri_button, &QPushButton::clicked, this, &MainWindow::on_tri_button_clicked);

    afficherPatients();
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::boutonValider_clicked() {

    QString nom = ui->nom_line->text();
    QString prenom = ui->prenom_line->text();
    QDate dateNaissance = ui->date_line->date();
    QString adresse = ui->adresse_line->text();
    QString email = ui->email_line->text();
    QString telStr = ui->tel_line->text();
    int type = -1;
    if (ui->type_ch1->isChecked()) {
        type = 0;
    } else if (ui->type_ch2->isChecked()) {
        type = 1;
    }

    if (nom.isEmpty() || nom.length() < 3) {
        QMessageBox::warning(this, "Erreur", "Le nom doit contenir au moins 3 caracteres.");
        return;
    }

    if (prenom.isEmpty() || prenom.length() < 3) {
        QMessageBox::warning(this, "Erreur", "Le prenom doit contenir au moins 3 caracteres.");
        return;
    }


    if ( adresse.isEmpty() || email.isEmpty() || telStr.isEmpty() || type == -1) {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs obligatoires !");
        return;
    }

    static QRegularExpression emailRegex("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
    if (!emailRegex.match(email).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "L'email saisi n'est pas valide.");
        return;
    }

    bool telOk;
    int tel = telStr.toInt(&telOk);
    if (!telOk || tel < 10000000 || tel > 99999999) {
        QMessageBox::warning(this, "Erreur", "Le numero de telephone doit être de 8 chiffres.");
        return;
    }


    Patient patient(nom, prenom, dateNaissance, adresse, email, tel, type);
    if (patient.ajouter()) {
        QMessageBox::information(this, "Succes", "Patient ajoute avec succes !");
        afficherPatients();
        reinitialiserChamps();
    } else {
        QMessageBox::critical(this, "Échec", "Erreur lors de l'ajout du patient.");
    }
}





void MainWindow::afficherPatients() {
    Patient p;
    QSqlQueryModel* model = p.afficher();

    if (model) {

        if (model->rowCount() > 0) {
            ui->table_affichage_patients->setModel(model);
            QStringList headers = {"ID", "Nom", "Prénom", "Email", "Adresse", "Téléphone", "Type", "Date Naissance"};

            for (int i = 0; i < headers.size(); ++i) {
                model->setHeaderData(i, Qt::Horizontal, headers.at(i));
            }

            ui->table_affichage_patients->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        } else {
            qDebug() << "Aucune donnée à afficher.";
            QMessageBox::information(this, "Aucun patient", "Aucun patient trouvé.");
        }
    } else {
        qDebug() << "Erreur : le modèle est nul ou invalide.";
        QMessageBox::critical(this, "Erreur", "Erreur lors du chargement des patients.");
    }
}




void MainWindow::reinitialiserChamps() {

    ui->nom_line->clear();
    ui->prenom_line->clear();
    ui->adresse_line->clear();
    ui->email_line->clear();
    ui->tel_line->clear();


    ui->date_line->setDate(QDate::currentDate());


    ui->type_ch1->setAutoExclusive(false);
    ui->type_ch2->setAutoExclusive(false);
    ui->type_ch1->setChecked(false);
    ui->type_ch2->setChecked(false);
    ui->type_ch1->setAutoExclusive(true);
    ui->type_ch2->setAutoExclusive(true);
}





void MainWindow::afficher_buttonmodif_clicked() {
    QString patientId = ui->id_modif_line->text();

    if (patientId.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer un ID de patient.");
        return;
    }


    QSqlQuery query;
    query.prepare("SELECT id_patient, nom, prenom, email, adresse, tel, type, date_naissance "
                  "FROM patients WHERE id_patient = :id_patient");
    query.bindValue(":id_patient", patientId);


    if (!query.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête : " << query.lastError().text();
        QMessageBox::critical(this, "Erreur", "Erreur lors de la récupération des données.");
        return;
    }
    if (query.next()) {
        ui->nom_modif_line->setText(query.value("nom").toString());
        ui->prenom_modif_line->setText(query.value("prenom").toString());
        ui->email_modif_line->setText(query.value("email").toString());
        ui->adresse_modif_line->setText(query.value("adresse").toString());
        ui->tel_modif_line->setText(query.value("tel").toString());
        ui->date_modif->setDate(query.value("date_naissance").toDate());

        int type = query.value("type").toInt();
        if (type == 0) {
            ui->type_ch1_modif->setChecked(true);
        } else if (type == 1) {
            ui->type_ch2_modif->setChecked(true);
        }
    } else {
        QMessageBox::warning(this, "Erreur", "Aucun patient trouvé avec cet ID.");
    }
}





void MainWindow::valider_buttonmodif_clicked()
{
    int idPatient = ui->id_modif_line->text().toInt();
    if (idPatient <= 0) {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer un ID valide.");
        return;
    }
    Patient patient;
    patient.setIdPatient(idPatient);
    QString nom = ui->nom_modif_line->text();
    if (!nom.isEmpty()) {
        if (nom.length() < 3) {
            QMessageBox::warning(this, "Erreur", "Le nom doit contenir au moins 3 caractères.");
            return;
        }
        patient.setNom(nom);
    }
    QString prenom = ui->prenom_modif_line->text();
    if (!prenom.isEmpty()) {
        if (prenom.length() < 3) {
            QMessageBox::warning(this, "Erreur", "Le prénom doit contenir au moins 3 caractères.");
            return;
        }
        patient.setPrenom(prenom);
    }
    QDate dateNaissance = ui->date_modif->date();
    if (dateNaissance.isValid()) {
        if (dateNaissance > QDate::currentDate()) {
            QMessageBox::warning(this, "Erreur", "La date de naissance ne peut pas être dans le futur.");
            return;
        }
        patient.setDateNaissance(dateNaissance);
    }
    QString adresse = ui->adresse_modif_line->text();
    if (!adresse.isEmpty()) {
        patient.setAdresse(adresse);
    }
    QString email = ui->email_modif_line->text();
    if (!email.isEmpty()) {
        static QRegularExpression emailRegex("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
        if (!emailRegex.match(email).hasMatch()) {
            QMessageBox::warning(this, "Erreur", "L'email saisi n'est pas valide.");
            return;
        }
        patient.setEmail(email);
    }
    QString telStr = ui->tel_modif_line->text();
    if (!telStr.isEmpty()) {
        bool telOk;
        int tel = telStr.toInt(&telOk);
        if (!telOk || tel < 10000000 || tel > 99999999) {
            QMessageBox::warning(this, "Erreur", "Le numéro de téléphone doit être un entier de 8 chiffres.");
            return;
        }
        patient.setTel(tel);
    }
    int type = -1;
    if (ui->type_ch1_modif->isChecked()) type = 0;
    else if (ui->type_ch2_modif->isChecked()) type = 1;
    if (type != -1) patient.setType(type);

    if (patient.modifier()) {
        QMessageBox::information(this, "Succès", "Les informations du patient ont été mises à jour.");
    } else {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la mise à jour des informations.");
    }
    ui->id_modif_line->clear();
    ui->nom_modif_line->clear();
    ui->prenom_modif_line->clear();
    ui->date_modif->clear();
    ui->adresse_modif_line->clear();
    ui->email_modif_line->clear();
    ui->tel_modif_line->clear();
    ui->type_ch1->setAutoExclusive(false);
    ui->type_ch2->setAutoExclusive(false);
    ui->type_ch1->setChecked(false);
    ui->type_ch2->setChecked(false);
    ui->type_ch1->setAutoExclusive(true);
    ui->type_ch2->setAutoExclusive(true);

    afficherPatients();
}






void MainWindow::valider_supression_clicked()
{
    int idPatient = ui->id_supression->text().toInt();
    if (idPatient <= 0) {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer un ID valide.");
        return;
    }
    Patient patient;
    if (patient.supprimer(idPatient)) {
        QMessageBox::information(this, "Succès", "Patient supprimé avec succès.");
    } else {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la suppression du patient.");
    }
    afficherPatients();
    ui->id_supression->clear();
}





void MainWindow::on_tri_button_clicked() {
    QString critere = ui->Tri_comboBox->currentText();
    QString queryStr;

    if (critere == "ID") {
        queryStr = "SELECT id_patient, nom, prenom, email, adresse, "
                   "TO_CHAR(tel) AS tel, type, "
                   "TO_CHAR(date_naissance, 'DD/MM/YYYY') AS date_naissance "
                   "FROM patients ORDER BY id_patient ASC";
    }
    else if (critere == "Alphabetique") {
        queryStr = "SELECT id_patient, nom, prenom, email, adresse, "
                   "TO_CHAR(tel) AS tel, type, "
                   "TO_CHAR(date_naissance, 'DD/MM/YYYY') AS date_naissance "
                   "FROM patients ORDER BY LOWER(nom) ASC";
    }
    else {
        QMessageBox::warning(this, "Erreur", "Critère de tri inconnu !");
        return;
    }
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(queryStr);
    if (model->rowCount() == 0) {
        QMessageBox::information(this, "Info", "Aucun patient trouvé.");
    }
    ui->table_affichage_patients->setModel(model);
}




void MainWindow::on_rechercher_Button_clicked() {
    QString critere = ui->recherche_comboBox->currentText();
    QString valeur = ui->recherche_line->text();
    QString queryStr;
    if (valeur.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer une valeur pour la recherche.");
        return;
    }
    if (critere == "ID") {
        queryStr = "SELECT id_patient, nom, prenom, email, adresse, "
                   "TO_CHAR(tel) AS tel, type, "
                   "TO_CHAR(date_naissance, 'DD/MM/YYYY') AS date_naissance "
                   "FROM patients WHERE id_patient = :valeur";
    }
    else if (critere == "NOM") {
        queryStr = "SELECT id_patient, nom, prenom, email, adresse, "
                   "TO_CHAR(tel) AS tel, type, "
                   "TO_CHAR(date_naissance, 'DD/MM/YYYY') AS date_naissance "
                   "FROM patients WHERE LOWER(nom) LIKE LOWER(:valeur)";
        valeur = "%" + valeur + "%";
    }
    else if (critere == "Date de naissance") {
        queryStr = "SELECT id_patient, nom, prenom, email, adresse, "
                   "TO_CHAR(tel) AS tel, type, "
                   "TO_CHAR(date_naissance, 'DD/MM/YYYY') AS date_naissance "
                   "FROM patients WHERE TO_CHAR(date_naissance, 'DD/MM/YYYY') = :valeur";
    }
    else {
        QMessageBox::warning(this, "Erreur", "Critère de recherche inconnu !");
        return;
    }
    QSqlQuery query;
    query.prepare(queryStr);
    query.bindValue(":valeur", valeur);
    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la recherche : " + query.lastError().text());
        return;
    }
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(std::move(query));
    if (model->rowCount() == 0) {
        QMessageBox::information(this, "Info", "Aucun patient trouvé.");
    }
    ui->table_affichage_patients->setModel(model);
}



void MainWindow::on_retour_Button_clicked() {
    afficherPatients();
}




void MainWindow::on_export_Button_clicked() {
    QPrinter printer(QPrinter::HighResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);

    QString fileName = QFileDialog::getSaveFileName(this, "Exporter en PDF", "", "PDF Files (*.pdf)");
    if (fileName.isEmpty()) return;

    printer.setOutputFileName(fileName);

    QPainter painter;
    if (!painter.begin(&printer)) {
        QMessageBox::critical(this, "Erreur", "Impossible de créer le fichier PDF.");
        return;
    }

    int margin = 100;
    int yOffset = margin + 50;
    int lineHeight = 40;
    int pageHeight = printer.pageRect(QPrinter::Point).height();
    int pageWidth = printer.pageRect(QPrinter::Point).width();
    int xOffset = margin;


    QFont titleFont("Arial", 14, QFont::Bold);
    painter.setFont(titleFont);
    painter.drawText(QRect(margin, yOffset, pageWidth - 2 * margin, 50), Qt::AlignCenter, "Liste des Patients");
    yOffset += 800;
    QFont contentFont("Arial", 10);
    painter.setFont(contentFont);

    int colWidths[] = {50, 100, 100, 200, 150, 100, 80, 120};
    int numCols = sizeof(colWidths) / sizeof(colWidths[0]);

    QStringList headers = {"ID", "Nom", "Prénom", "Email", "Adresse", "Téléphone", "Type", "Date Naissance"};

    xOffset = margin;
    for (int i = 0; i < numCols; i++) {
        painter.drawRect(xOffset, yOffset, colWidths[i], lineHeight);
        painter.drawText(QRect(xOffset + 5, yOffset, colWidths[i] - 10, lineHeight), Qt::AlignCenter, headers[i]);
        xOffset += colWidths[i];
    }
    yOffset += lineHeight;
    QSqlQueryModel *model = qobject_cast<QSqlQueryModel*>(ui->table_affichage_patients->model());
    if (!model) {
        QMessageBox::critical(this, "Erreur", "Modèle de données invalide.");
        return;
    }
    for (int row = 0; row < model->rowCount(); ++row) {
        xOffset = margin;
        for (int col = 0; col < numCols; col++) {
            painter.drawRect(xOffset, yOffset, colWidths[col], lineHeight); // Dessiner les bordures des cellules
            painter.drawText(QRect(xOffset + 5, yOffset, colWidths[col] - 10, lineHeight), Qt::AlignCenter, model->data(model->index(row, col)).toString());
            xOffset += colWidths[col];
        }
        yOffset += lineHeight;
        if (yOffset > pageHeight - margin - lineHeight) {
            printer.newPage();
            yOffset = margin + 50;
            xOffset = margin;
            for (int i = 0; i < numCols; i++) {
                painter.drawRect(xOffset, yOffset, colWidths[i], lineHeight);
                painter.drawText(QRect(xOffset + 5, yOffset, colWidths[i] - 10, lineHeight), Qt::AlignCenter, headers[i]);
                xOffset += colWidths[i];
            }
            yOffset += lineHeight;
        }
    }

    painter.end();
    QMessageBox::information(this, "Succès", "PDF généré avec succès.");
}
