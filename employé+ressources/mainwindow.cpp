#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "gressource.h"
#include "employee.h"
#include <QSqlQueryModel>
#include <QFileDialog>  // Pour ouvrir la boîte de dialogue de sélection de fichier
#include <QFile>        // Pour lire le fichier
#include <QPixmap>      // Pour manipuler les images
#include <QImage>
#include <QFileDialog>// export
#include <QVBoxLayout>
#include <QDebug>
//#include <opencv2/opencv.hpp>
#include <QThread> // Added to fix QThread not declared

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    employee e;
    ui->tableView_2->setModel(e.afficher());
    afficherStatistiques();

    // Connect to Arduino
    int ret = arduino.connect_arduino();
    if (ret == 0) {
        qDebug() << "Arduino connected successfully.";
        connect(arduino.getserial(), &QSerialPort::readyRead, this, &MainWindow::updateA);
        // Send initial quantity with retry
        for (int attempt = 1; attempt <= 3; ++attempt) {
            afficherquantity();
            QThread::msleep(500); // Increased delay for Arduino reset
            QByteArray data = arduino.read_from_arduino();
            if (data.contains("Received new quantity")) {
                qDebug() << "Arduino confirmed receipt of initial quantity";
                break;
            }
            qDebug() << "Attempt" << attempt << "to send initial quantity failed. Retrying...";
        }
    } else {
        qDebug() << "Failed to connect to Arduino.";
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}




//ajout
void MainWindow::on_valider_2_clicked()
{
    int ID_EMP = ui->id_4->text().toInt();
    QString NOM = ui->nom_2->text();
    QString PRENOM = ui->prenom_2->text();
    QString POSTE = ui->poste_2->currentText();
    float SALAIRE = ui->salaire_2->value();
    QString MDP = ui->mdp_2->text();
    QString EMAIL = ui->mail_2->text();
    QDate DATE_EMB = ui->date_2->date();

    // Vérification du mot de passe
    QRegularExpression majuscule("[A-Z]");  // Au moins une majuscule
    QRegularExpression special("[^a-zA-Z0-9]"); // Au moins un caractère spécial
    QRegularExpression mail(R"((^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$))");


    if (!MDP.contains(majuscule) || !MDP.contains(special)) {
        QMessageBox::warning(this, "Mot de passe invalide",
                             "Le mot de passe doit contenir au moins une lettre majuscule et un caractère spécial.");
        return;
    }

    //date
    // Récupération de la date actuelle
    QDate dateAujourdhui = QDate::currentDate();

    // Vérification que la date d'embauche n'est pas dans le futur
    if (DATE_EMB > dateAujourdhui) {
        QMessageBox::warning(this, "Date invalide",
                             "La date d'embauche ne peut pas être supérieure à la date d'aujourd'hui.");
        return;
    }


    // Vérification de l'email
    if (!EMAIL.contains("@")) {
        QMessageBox::warning(this, "Email invalide",
                             "L'adresse email doit contenir le symbole '@'.");
        return;
    }

    if (!EMAIL.contains(mail)) {
        QMessageBox::warning(this, "Email invalide",
                             "L'adresse email doit avoir un nom de domaine.");
        return;
    }
    //nom +prenom
    QRegularExpression lettre("^[A-Za-zÀ-ÖØ-öø-ÿ]+$"); // Lettres avec accents autorisées

    if (!NOM.contains(lettre)) {
        QMessageBox::warning(this, "Nom invalide", "Le nom ne doit contenir que des lettres.");
        return;
    }

    if (!PRENOM.contains(lettre)) {
        QMessageBox::warning(this, "Prénom invalide", "Le prénom ne doit contenir que des lettres.");
        return;
    }

    employee e(ID_EMP, NOM, PRENOM, POSTE, SALAIRE, MDP, EMAIL, DATE_EMB, imageData);
    bool test = e.ajouter();
    afficherStatistiques();

    if (test)
    {
        ui->tableView_2->setModel(e.afficher());
        QMessageBox::information(nullptr, QObject::tr("Ajout réussi"),
                                 QObject::tr("L'employé a été ajouté avec succès."), QMessageBox::Ok);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Échec de l'ajout"),
                              QObject::tr("L'ajout de l'employé a échoué."), QMessageBox::Ok);
    }
}





//supprimer
void MainWindow::on_sup_2_clicked()
{
    int ID_EMP = ui->id_3->text().toInt();

    employee e;
    if (!e.recuperer(ID_EMP)) {
        QMessageBox::warning(this, "ID introuvable",
                             "L'ID saisi n'existe pas dans la base de données.");
        return;
    }
    bool test = e.supprimer(ID_EMP);

    if (test)
    {
        ui->tableView_2->setModel(e.afficher());
        QMessageBox::information(nullptr, QObject::tr("Suppression réussie"),
                                 QObject::tr("L'employé a été supprimé avec succès."), QMessageBox::Ok);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Échec de la suppression"),
                              QObject::tr("Impossible de supprimer l'employé."), QMessageBox::Ok);
    }
}



//modifier
void MainWindow::on_modifier_2_clicked()
{
    int ID_EMP = ui->idm_2->text().toInt();
    QString NOM = ui->nomm_2->text();
    QString PRENOM = ui->prenomm_2->text();
    QString POSTE = ui->postem_2->currentText();
    float SALAIRE = ui->salairem_2->value();
    QString MDP = ui->mdpm_2->text();
    QString EMAIL = ui->mailm_2->text();
    QDate DATE_EMB = ui->datem_2->date();


    // Vérification du mot de passe
    QRegularExpression majuscule("[A-Z]");  // Au moins une majuscule
    QRegularExpression special("[^a-zA-Z0-9]"); // Au moins un caractère spécial

    if (!MDP.contains(majuscule) || !MDP.contains(special)) {
        QMessageBox::warning(this, "Mot de passe invalide",
                             "Le mot de passe doit contenir au moins une lettre majuscule et un caractère spécial.");
        return;
    }

    // Récupération de la date actuelle
    QDate dateAujourdhui = QDate::currentDate();

    // Vérification que la date d'embauche n'est pas dans le futur
    if (DATE_EMB > dateAujourdhui) {
        QMessageBox::warning(this, "Date invalide",
                             "La date d'embauche ne peut pas être supérieure à la date d'aujourd'hui.");
        return;
    }


    // Vérification de l'email
    if (!EMAIL.contains("@")) {
        QMessageBox::warning(this, "Email invalide",
                             "L'adresse email doit contenir le symbole '@'.");
        return;
    }
    //nom +prenom yekbel ken lettre
    QRegularExpression regex("^[A-Za-zÀ-ÖØ-öø-ÿ]+$"); // Lettres avec accents autorisées

    if (!NOM.contains(regex)) {
        QMessageBox::warning(this, "Nom invalide", "Le nom ne doit contenir que des lettres.");
        return;
    }

    if (!PRENOM.contains(regex)) {
        QMessageBox::warning(this, "Prénom invalide", "Le prénom ne doit contenir que des lettres.");
        return;
    }

    employee e(ID_EMP, NOM, PRENOM, POSTE, SALAIRE, MDP, EMAIL, DATE_EMB,imageData);
    bool test = e.modifier();
    afficherStatistiques();

    if (test)
    {
        ui->tableView_2->setModel(e.afficher());
        QMessageBox::information(nullptr, QObject::tr("modification avec  succés"),
                                 QObject::tr("L'employé a été modifié avec succès."), QMessageBox::Ok);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Échec de la modification"),
                              QObject::tr("La modification a échoué."), QMessageBox::Ok);
    }
}








//tri
void MainWindow::on_tri_2_activated(int index)
{
    employee e;

    switch (index)
    {
    case 0: // Tri par ID
        ui->tableView_2->setModel(e.trier(1));
        break;
    case 1: // Tri par salaire
        ui->tableView_2->setModel(e.trier(2));
        break;
    case 2: // Tri par nom
        ui->tableView_2->setModel(e.trier(3));
        break;
    case 3: // Tri par  date d'embauche
        ui->tableView_2->setModel(e.trier(4));
        break;
    default:
        ui->tableView_2->setModel(e.afficher()); // Afficher sans tri
        break;
    }
}



void MainWindow::on_validrech_2_clicked()
{
    int ID_EMP = ui->rech_2->text().toInt();
    employee e;
    ui->tableView_2->setModel(e.recherche(ID_EMP));
}



//image
void MainWindow::on_deposer_2_clicked()
{
    // Ouvrir une boîte de dialogue pour sélectionner une image
    QString filePath = QFileDialog::getOpenFileName(this, "Sélectionner une image", QDir::homePath(), "Images (*.png *.jpg *.jpeg *.bmp)");

    if (!filePath.isEmpty()) {
        QFile file(filePath);
        if (file.open(QIODevice::ReadOnly)) {
            imageData = file.readAll();  // Lire le fichier et stocker les données binaires
            // Convertir les données binaires en QImage
            QImage image = QImage::fromData(imageData);

            // Redimensionner l'image
            image = image.scaled(ui->laboula_2->size(), Qt::KeepAspectRatio);

            // Afficher l'image
            ui->laboula_2->setPixmap(QPixmap::fromImage(image));
        }
    }
}


void MainWindow::on_deposerm_2_clicked()
{
    // Ouvrir une boîte de dialogue pour sélectionner une image
    QString filePath = QFileDialog::getOpenFileName(this, "Sélectionner une image", QDir::homePath(), "Images (*.png *.jpg *.jpeg *.bmp)");

    if (!filePath.isEmpty()) {
        QFile file(filePath);
        if (file.open(QIODevice::ReadOnly)) {
            imageData = file.readAll();  // Lire le fichier et stocker les données binaires
            // Convertir les données binaires en QImage
            QImage image = QImage::fromData(imageData);

            // Redimensionner l'image pour qu'elle s'adapte à la taille du QLabel
            image = image.scaled(ui->laboula1_2->size(), Qt::KeepAspectRatio);

            // Afficher l'image dans le QLabel
            ui->laboula1_2->setPixmap(QPixmap::fromImage(image));
        }
    }
}


void MainWindow::on_exp_2_clicked()
{
    // Ouvrir une boîte de dialogue pour sélectionner l'emplacement du fichier PDF
    QString filePath = QFileDialog::getSaveFileName(this, "Exporter en PDF", "", "Fichiers PDF (*.pdf)");

    if (!filePath.isEmpty()) {
        if (!filePath.endsWith(".pdf", Qt::CaseInsensitive)) {
            filePath += ".pdf"; // S'assurer que le fichier a l'extension .pdf
        }

        employee e;
        if (e.exportToPDF(filePath)) {
            QMessageBox::information(this, "Exportation réussie", "Le fichier PDF a été généré avec succès.");
        } else {
            QMessageBox::critical(this, "Erreur d'exportation", "L'exportation en PDF a échoué.");
        }
    }
}

void MainWindow::afficherStatistiques() {
    employee e;

    // Récupérer la vue graphique
    QGraphicsView *statView = e.statistiquesPoste();
    QGraphicsView *statVie = e.statistiquesembauche();

    if (ui->stat_2) {
        QGraphicsScene *scene = statView->scene();
        ui->stat_2->setScene(scene);

    }
    if (ui->stat1_2) {
        QGraphicsScene *scene = statVie->scene();
        ui->stat1_2->setScene(scene);
    }
}




//mtaa modifier
void MainWindow::on_set_2_clicked()
{
    int ID_EMP = ui->idm_2->text().toInt();
    employee e;

    if (e.recuperer(ID_EMP)) {  // Si l'ID est trouvé dans la base de données
        ui->nomm_2->setText(e.getNOM());
        ui->prenomm_2->setText(e.getPRENOM());
        ui->postem_2->setCurrentText(e.getPOSTE());
        ui->salairem_2->setValue(e.getSALAIRE());
        ui->mdpm_2->setText(e.getMDP());
        ui->mailm_2->setText(e.getEMAIL());
        ui->datem_2->setDate(e.getDATE_EMB());

    }
    else {
        QMessageBox::warning(this, "Erreur", "Aucun employé trouvé avec cet ID.");
    }
}


void MainWindow::on_pushButton_16_clicked()
{
    this->close();  // Fermer MainWindow
    class log l;
    l.exec();
}

void MainWindow::on_tr_2_activated(int index)
{
    employee e;

    switch (index)
    {
    case 0: // Tri par ID
        ui->tableView_2->setModel(e.trierD(1));
        break;
    case 1: // Tri par salaire
        ui->tableView_2->setModel(e.trierD(2));
        break;
    case 2: // Tri par nom
        ui->tableView_2->setModel(e.trierD(3));
        break;
    case 3: // Tri par  date d'embauche
        ui->tableView_2->setModel(e.trierD(4));
        break;
    default:
        ui->tableView_2->setModel(e.afficher()); // Afficher sans tri
        break;
    }
}


void MainWindow::afficherquantity()
{
    qDebug() << "Entering afficherquantity";
    try {
        QSqlQuery query;
        query.prepare("SELECT QUANTITE FROM VACCINS WHERE ID_VAC = :id_vac");
        query.bindValue(":id_vac", 1);
        if (query.exec() && query.next()) {
            int quantity = query.value(0).toInt();
            QByteArray data = QString::number(quantity).toUtf8() + "\n";
            arduino.write_to_arduino(data);
            qDebug() << "Quantité envoyée à l'Arduino:" << quantity;
        } else {
            //qDebug() << "Erreur lors de la récupération de la quantité. Error:" << query.lastError().text();
        }
    } catch (const std::exception& e) {
        qDebug() << "Exception in afficherquantity:" << e.what();
    } catch (...) {
        qDebug() << "Unknown exception in afficherquantity";
    }
}

void MainWindow::updateA()
{
    qDebug() << "Entering updateA";
    QByteArray qdata = arduino.read_from_arduino();
    QString message = QString(qdata).trimmed();
    qDebug() << "Received from Arduino:" << message;

    if (message.contains("UPDATE_QUANTITY")) {
        //qDebug() << "Processing UPDATE_QUANTITY message";
        // Check cooldown
        qint64 currentTime = QDateTime::currentMSecsSinceEpoch();
        if (lastUpdateProcessed != 0 && currentTime - lastUpdateProcessed < updateCooldown) {
            qDebug() << "Ignoring update due to cooldown";//pour limiter la fréquence des mises à jour
            return;
        }

        QSqlQuery query;
        try {

            query.prepare("UPDATE VACCINS SET QUANTITE = GREATEST(QUANTITE - 1, 0) WHERE ID_VAC = :id_vac");
            query.bindValue(":id_vac", 1);
            if (query.exec()) {
                //qDebug() << "Update query executed successfully";
                lastUpdateProcessed = currentTime;
                // Verify updated quantity
                QSqlQuery verifyQuery;
                verifyQuery.prepare("SELECT QUANTITE FROM VACCINS WHERE ID_VAC = :id_vac");
                verifyQuery.bindValue(":id_vac", 1);
                if (verifyQuery.exec() && verifyQuery.next()) {
                    qDebug() << "Updated QUANTITE is:" << verifyQuery.value(0).toInt();
                }
                // Send updated quantity
                afficherquantity();
            } else {
                qDebug() << "Failed to update vaccine quantity. Error:" ;
            }
        } catch (const std::exception& e) {
            qDebug() << "Exception in updateA:" << e.what();
        } catch (...) {
            qDebug() << "Unknown exception in updateA";
        }
    } else if (!message.isEmpty()) {
        qDebug() << "Unexpected message:" << message;
    } else {
        qDebug() << "Empty message received";
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    this->close();
    gressource *gr = new gressource();
    gr->show();

}

