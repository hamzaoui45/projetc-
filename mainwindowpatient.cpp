#include "mainwindowpatient.h"
#include "ui_mainwindowpatient.h"
#include "patient.h"
#include <QPrinter>
#include <QPainter>
#include <QFileDialog>
#include <QMessageBox>
#include <QRegularExpression>
#include <QDebug>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QSqlRecord>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QChart>
#include <QProcess>
#include <QJsonDocument>
#include <QJsonObject>




MainWindowPatient::MainWindowPatient(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowPatient)
{
    ui->setupUi(this);
    afficherStatistiques();

    connect(ui->bouton_valider_ajout, &QPushButton::clicked, this, &MainWindowPatient::boutonValider_clicked);
    connect(ui->afficher_button_modif, &QPushButton::clicked, this, &MainWindowPatient::afficher_buttonmodif_clicked);
    connect(ui->valider_button_modif, &QPushButton::clicked, this, &MainWindowPatient::valider_buttonmodif_clicked);
    connect(ui->valider_supression, &QPushButton::clicked, this, &MainWindowPatient::valider_supression_clicked);
    connect(ui->tri_button, &QPushButton::clicked, this, &MainWindowPatient::on_tri_button_clicked);
    connect(ui->val_button, &QPushButton::clicked, this, &MainWindowPatient::analyserReponses);
    connect(ui->diagnostiquer, &QPushButton::clicked, this, &MainWindowPatient::on_diagnostiquer_clicked);

    afficherPatients();
}

MainWindowPatient::~MainWindowPatient()
{
    delete ui;
}


void MainWindowPatient::boutonValider_clicked() {
    QString nom = ui->nom_line->text().trimmed();
    QString prenom = ui->prenom_line->text().trimmed();
    QDate dateNaissance = ui->date_line->date();
    QString adresse = ui->adresse_line->text().trimmed();
    QString email = ui->email_line->text().trimmed();
    QString telStr = ui->tel_line->text().trimmed();

    int type = -1;
    if (ui->type_ch1->isChecked()) {
        type = 0;
    } else if (ui->type_ch2->isChecked()) {
        type = 1;
    }

    static QRegularExpression regex("^[A-Za-zÀ-ÖØ-öø-ÿ ]+$");
    if (nom.isEmpty() || nom.length() < 3) {
        QMessageBox::warning(this, "Erreur", "Le nom doit contenir au moins 3 caractères.");
        return;
    }
    if (!regex.match(nom).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "Le nom ne doit contenir que des lettres et des espaces.");
        return;
    }

    if (prenom.isEmpty() || prenom.length() < 3) {
        QMessageBox::warning(this, "Erreur", "Le prénom doit contenir au moins 3 caractères.");
        return;
    }
    if (!regex.match(prenom).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "Le prénom ne doit contenir que des lettres et des espaces.");
        return;
    }

    if (!dateNaissance.isValid()) {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer une date de naissance valide.");
        return;
    }
    if (dateNaissance > QDate::currentDate()) {
        QMessageBox::warning(this, "Erreur", "La date de naissance ne peut pas être dans le futur.");
        return;
    }

    if (adresse.isEmpty() || email.isEmpty() || telStr.isEmpty() || type == -1) {
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
        QMessageBox::warning(this, "Erreur", "Le numéro de téléphone doit être composé de 8 chiffres.");
        return;
    }

    Patient patient(nom, prenom, dateNaissance, adresse, email, tel, type);
    if (patient.ajouter()) {
        QMessageBox::information(this, "Succès", "Patient ajouté avec succès !");
        afficherPatients();
        reinitialiserChamps();
        afficherStatistiques();
    } else {
        QMessageBox::critical(this, "Échec", "Erreur lors de l'ajout du patient.");
    }
}







void MainWindowPatient::afficherPatients() {
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




void MainWindowPatient::reinitialiserChamps() {

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





void MainWindowPatient::afficher_buttonmodif_clicked() {
    QString patientId = ui->id_modif_line->text();
    idInitial = ui->id_modif_line->text().toInt();
    ui->id_modif_line->setReadOnly(true);  // Rendre le champ ID en lecture seule


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





void MainWindowPatient::valider_buttonmodif_clicked()
{
    int idPatient = ui->id_modif_line->text().toInt();
    if (idPatient <= 0) {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer un ID valide.");
        return;
    }

    if (idPatient != idInitial) {
        QMessageBox::critical(this, "Erreur", "Vous n'avez pas le droit de modifier l'ID du patient.");
        ui->id_modif_line->setText(QString::number(idInitial)); // Remettre l'ID original
        return;
    }


    Patient patient;
    patient.setIdPatient(idPatient);
    QString nom = ui->nom_modif_line->text().trimmed();
    QRegularExpression regex("^[A-Za-zÀ-ÖØ-öø-ÿ ]+$");

    if (!nom.isEmpty()) {
        if (nom.length() < 3) {
            QMessageBox::warning(this, "Erreur", "Le nom doit contenir au moins 3 caractères.");
            return;
        }
        if (!regex.match(nom).hasMatch()) {
            QMessageBox::warning(this, "Erreur", "Le nom ne doit contenir que des lettres et des espaces.");
            return;
        }
        patient.setNom(nom);
    }

    QString prenom = ui->prenom_modif_line->text().trimmed();
    if (!prenom.isEmpty()) {
        if (prenom.length() < 3) {
            QMessageBox::warning(this, "Erreur", "Le prénom doit contenir au moins 3 caractères.");
            return;
        }
        if (!regex.match(prenom).hasMatch()) {
            QMessageBox::warning(this, "Erreur", "Le prénom ne doit contenir que des lettres et des espaces.");
            return;
        }
        patient.setPrenom(prenom);
    }
    QDate dateNaissance = ui->date_modif->date();
    if (!dateNaissance.isValid()) {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer une date de naissance valide.");
        return;
    }
    if (dateNaissance > QDate::currentDate()) {
        QMessageBox::warning(this, "Erreur", "La date de naissance ne peut pas être dans le futur.");
        return;
    }
    patient.setDateNaissance(dateNaissance);

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






void MainWindowPatient::valider_supression_clicked()
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





void MainWindowPatient::on_tri_button_clicked() {
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




void MainWindowPatient::on_rechercher_Button_clicked() {
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



void MainWindowPatient::on_retour_Button_clicked() {
    afficherPatients();
}




void MainWindowPatient::on_export_Button_clicked() {
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
    int yOffset = margin + 100;
    int lineHeight = 500;
    int pageHeight = printer.pageRect(QPrinter::Point).height();
    int pageWidth = printer.pageRect(QPrinter::Point).width();
    int xOffset = margin;

    QFont titleFont("Arial", 20, QFont::Bold);
    painter.setFont(titleFont);
    painter.drawText(QRect(1000, 500,3500 , 500), Qt::AlignCenter, "Liste des Patients");
    yOffset += 1000;  // Moins d'espace après le titre

    // Police pour le contenu
    QFont contentFont("Arial", 12);
    painter.setFont(contentFont);

    // Colonnes ajustées pour une meilleure répartition de l'espace
    int colWidths[] = {500, 900, 1100, 2400, 1100, 1200, 500, 1600};
    int numCols = sizeof(colWidths) / sizeof(colWidths[0]);

    QStringList headers = {"ID", "Nom", "Prénom", "Email", "Adresse", "Téléphone", "Type", "Date Naissance"};

    // Affichage des en-têtes avec la nouvelle taille
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
            painter.drawRect(xOffset, yOffset, colWidths[col], lineHeight);
            painter.drawText(QRect(xOffset + 5, yOffset, colWidths[col] - 10, lineHeight), Qt::AlignCenter, model->data(model->index(row, col)).toString());
            xOffset += colWidths[col];
        }
        yOffset += lineHeight;
    }

    painter.end();
    QMessageBox::information(this, "Succès", "PDF généré avec succès.");
}

void MainWindowPatient::afficherStatistiques() {
    QSqlQuery query;

    // === Statistiques tranche d'âge (type = 0 uniquement) ===
    int age_0_18 = 0, age_19_35 = 0, age_36_60 = 0, age_60plus = 0;
    QDate today = QDate::currentDate();
    query.exec("SELECT DATE_NAISSANCE FROM patients WHERE type = 0");
    while (query.next()) {
        QDate birth = query.value(0).toDate();
        int age = birth.daysTo(today) / 365;
        if (age <= 18) age_0_18++;
        else if (age <= 35) age_19_35++;
        else if (age <= 60) age_36_60++;
        else age_60plus++;
    }

    int totalAge = age_0_18 + age_19_35 + age_36_60 + age_60plus;
    QPieSeries *seriesAge = new QPieSeries();
    if (totalAge > 0) {
        seriesAge->append(QString("0-18 (%1%)").arg(age_0_18 * 100 / totalAge), age_0_18);
        seriesAge->append(QString("19-35 (%1%)").arg(age_19_35 * 100 / totalAge), age_19_35);
        seriesAge->append(QString("36-60 (%1%)").arg(age_36_60 * 100 / totalAge), age_36_60);
        seriesAge->append(QString("60+ (%1%)").arg(age_60plus * 100 / totalAge), age_60plus);
    }

    QChartView *chartViewAge = nullptr;
    if (totalAge > 0) {
        QChart *chartAge = new QChart();
        chartAge->addSeries(seriesAge);
        chartAge->setTitle("Répartition par tranche d'âge (type humain)");
        chartAge->legend()->setAlignment(Qt::AlignBottom);

        chartViewAge = new QChartView(chartAge);
        chartViewAge->setRenderHint(QPainter::Antialiasing);
    }

    // === Statistiques selon type ===
    int type0 = 0, type1 = 0;
    query.exec("SELECT type FROM patients");
    while (query.next()) {
        int t = query.value(0).toInt();
        if (t == 0) type0++;
        else if (t == 1) type1++;
    }

    int totalType = type0 + type1;
    QPieSeries *seriesType = new QPieSeries();
    if (totalType > 0) {
        seriesType->append(QString("Humain (%1%)").arg(type0 * 100 / totalType), type0);
        seriesType->append(QString("Autre (%1%)").arg(type1 * 100 / totalType), type1);
    }

    QChartView *chartViewType = nullptr;
    if (totalType > 0) {
        QChart *chartType = new QChart();
        chartType->addSeries(seriesType);
        chartType->setTitle("Répartition selon le type");
        chartType->legend()->setAlignment(Qt::AlignBottom);

        chartViewType = new QChartView(chartType);
        chartViewType->setRenderHint(QPainter::Antialiasing);
    }

    // === Affichage dans le layout nommé "stati" ===
    QLayout *layout = ui->stati->layout();
    if (!layout) {
        layout = new QVBoxLayout(ui->stati);
        ui->stati->setLayout(layout);
    }

    // Nettoyer l'ancien contenu
    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (item->widget()) delete item->widget();
        delete item;
    }

    // Ajouter les graphiques s'ils existent
    if (chartViewAge) layout->addWidget(chartViewAge);
    if (chartViewType) layout->addWidget(chartViewType);
}

void MainWindowPatient::on_val_button_clicked()
{
    QString pythonPath = "C:/Users/VIVOBOOK/AppData/Local/Programs/Python/Python312/python.exe";
    QString scriptPath = "C:/Users/VIVOBOOK/Downloads/projetc--patient/projetc--patient/emotion_recognition.py"; // Chemin complet du script Python

    // Récupérer la réponse à analyser (par exemple, rep1)
    QString response = ui->rep1->toPlainText();

    // Lancer le script Python avec la réponse comme argument
    QProcess process;
    process.start(pythonPath, QStringList() << scriptPath << response);

    if (!process.waitForStarted()) {
        QMessageBox::critical(this, "Erreur", "Impossible de démarrer le script Python.");
        return;
    }

    process.waitForFinished();
    QString result = process.readAllStandardOutput().trimmed();  // Récupère la sortie du script Python

    // Afficher le résultat dans le label "aff_resul"
    ui->aff_resul->setText("Emotion detectee : " + result);
}





void MainWindowPatient::analyserReponses() {
    QString pythonPath = "C:/Users/VIVOBOOK/AppData/Local/Programs/Python/Python312/python.exe";
    QString scriptPath = "C:/Users/VIVOBOOK/Downloads/projetc--patient/projetc--patient/emotion_recognition.py";


    QString rep1 = ui->rep1->toPlainText();
    QString rep2 = ui->rep2->toPlainText();
    QString rep3 = ui->rep3->toPlainText();
    QString rep4 = ui->rep4->toPlainText();
    QString rep5 = ui->rep5->toPlainText();

    QStringList arguments;
    arguments << scriptPath << rep1 << rep2 << rep3 << rep4 << rep5;

    QProcess *process = new QProcess(this);

    // Connexion quand le script se termine complètement
    connect(process, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            this, [=](int exitCode, QProcess::ExitStatus exitStatus) {
                qDebug() << "Exit Code: " << exitCode;
                qDebug() << "Exit Status: " << exitStatus;

                if (exitStatus == QProcess::NormalExit && exitCode == 0) {
                    QString output = process->readAllStandardOutput();
                    QStringList lines = output.split('\n', Qt::SkipEmptyParts);

                    QString resultText = "Émotions détectées :\n";
                    for (int i = 0; i < lines.size() - 1; ++i) {
                        resultText += lines[i].trimmed() + "\n";
                    }

                    resultText += "\nÉmotion globale : " + lines.last().trimmed();

                    ui->aff_resul->setText(resultText);
                } else {
                    qDebug() << "Erreur dans le script Python : " << process->errorString();
                    QMessageBox::critical(this, "Erreur", "Le script Python a échoué.");
                }

                process->deleteLater();
            });

    // Gestion des erreurs
    connect(process, &QProcess::errorOccurred, [=](QProcess::ProcessError error) {
        qDebug() << "Erreur du processus : " << error;
        QMessageBox::critical(this, "Erreur", "Erreur de lancement du script Python.");
        process->deleteLater();
    });
    connect(process, &QProcess::readyReadStandardError, [=]() {
        QString errorOutput = process->readAllStandardError();
        qDebug() << "Erreur dans le script Python : " << errorOutput;
    });


    process->start(pythonPath, arguments);
}

void MainWindowPatient::on_annul_button_clicked()
{
    ui->rep1->clear();
    ui->rep2->clear();
    ui->rep3->clear();
    ui->rep4->clear();
    ui->rep5->clear();
    ui->aff_resul->clear();
    ui->rep1->setFocus();
}


void MainWindowPatient::on_diagnostiquer_clicked()
{
    QString pythonPath = "C:/Users/VIVOBOOK/AppData/Local/Programs/Python/Python312/python.exe";
    QString scriptPath = "C:/Users/VIVOBOOK/Downloads/projetc--patient/projetc--patient/diagnostic_model.py";

    QString q1 = ui->q1->toPlainText();
    QString q2 = ui->q2->toPlainText();
    QString q3 = ui->q3->toPlainText();

    QProcess process;
    QStringList arguments;
    arguments << scriptPath << q1 << q2 << q3;

    process.start(pythonPath, arguments);

    if (!process.waitForStarted()) {
        QMessageBox::critical(this, "Erreur", "Impossible de démarrer le script Python.");
        return;
    }

    process.waitForFinished();
    QString result = process.readAllStandardOutput().trimmed();
    ui->aff_diagno->setText("Diagnostic IA : " + result);

}
