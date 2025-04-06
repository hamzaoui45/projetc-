
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "employee.h"
#include <QSqlQueryModel>
#include <QFileDialog>  // Pour ouvrir la boîte de dialogue de sélection de fichier
#include <QFile>        // Pour lire le fichier
#include <QPixmap>      // Pour manipuler les images
#include <QImage>
#include <QFileDialog>// export
#include <QVBoxLayout>
#include <QDebug>
#include "log.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    employee e;
    ui->tableView->setModel(e.afficher());
    afficherStatistiques();
}

MainWindow::~MainWindow()
{
    delete ui;
}



//ajouter
/*void MainWindow::on_valider_clicked()
{
    int ID_EMP = ui->id->text().toInt();
    QString NOM = ui->nom->text();
    QString PRENOM = ui->prenom->text();
    QString POSTE = ui->poste->currentText();
    float SALAIRE = ui->salaire->value();
    QString MDP = ui->mdp->text();
    QString EMAIL = ui->mail->text();
    QDate DATE_EMB = ui->date->date();

    employee e(ID_EMP, NOM, PRENOM, POSTE, SALAIRE, MDP, EMAIL, DATE_EMB,imageData);
    bool test = e.ajouter();

    if (test)
    {
        ui->tableView->setModel(e.afficher());
        QMessageBox::information(nullptr, QObject::tr("Ajout réussi"),
                                 QObject::tr("L'employé a été ajouté avec succès."), QMessageBox::Ok);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Échec de l'ajout"),
                              QObject::tr("L'ajout de l'employé a échoué."), QMessageBox::Ok);
    }
}*/


//ajout
void MainWindow::on_valider_clicked()
{
    int ID_EMP = ui->id->text().toInt();
    QString NOM = ui->nom->text();
    QString PRENOM = ui->prenom->text();
    QString POSTE = ui->poste->currentText();
    float SALAIRE = ui->salaire->value();
    QString MDP = ui->mdp->text();
    QString EMAIL = ui->mail->text();
    QDate DATE_EMB = ui->date->date();

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
        ui->tableView->setModel(e.afficher());
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
void MainWindow::on_sup_clicked()
{
    int ID_EMP = ui->id_2->text().toInt();

    employee e;
    if (!e.recuperer(ID_EMP)) {
        QMessageBox::warning(this, "ID introuvable",
                             "L'ID saisi n'existe pas dans la base de données.");
        return;
    }
    bool test = e.supprimer(ID_EMP);

    if (test)
    {
        ui->tableView->setModel(e.afficher());
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
void MainWindow::on_modifier_clicked()
{
    int ID_EMP = ui->idm->text().toInt();
    QString NOM = ui->nomm->text();
    QString PRENOM = ui->prenomm->text();
    QString POSTE = ui->postem->currentText();
    float SALAIRE = ui->salairem->value();
    QString MDP = ui->mdpm->text();
    QString EMAIL = ui->mailm->text();
    QDate DATE_EMB = ui->datem->date();


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
        ui->tableView->setModel(e.afficher());
        QMessageBox::information(nullptr, QObject::tr("modification avec  succés"),
                                 QObject::tr("L'employé a été modifié avec succès."), QMessageBox::Ok);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Échec de la modification"),
                              QObject::tr("La modification a échoué."), QMessageBox::Ok);
    }
}






//test
/*void MainWindow::on_modifier_clicked()
{
    // Récupérer l'ID saisi
    int ID_EMP = ui->idm->text().toInt();

    // Vérifier si l'ID est valide
    if (ID_EMP == 0) {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer un ID valide.");
        return;
    }

    // Récupérer les données actuelles de l'employé
    employee e;
    if (!e.recuperer(ID_EMP)) {
        QMessageBox::warning(this, "Erreur", "Aucun employé trouvé avec cet ID.");
        return;
    }

    // Afficher les informations actuelles dans l'interface utilisateur
    ui->nomm->setText(e.getNOM());
    ui->prenomm->setText(e.getPRENOM());
    ui->postem->setCurrentText(e.getPOSTE());
    ui->salairem->setValue(e.getSALAIRE());
    ui->mdpm->setText(e.getMDP());
    ui->mailm->setText(e.getEMAIL());
    ui->datem->setDate(e.getDATE_EMB());

    // Afficher l'image si disponible
    if (!e.getIMAGE().isEmpty()) {
        QPixmap pixmap;
        pixmap.loadFromData(e.getIMAGE());
        ui->laboulam->setPixmap(pixmap.scaled(100, 100, Qt::KeepAspectRatio));
    }

    // Récupérer les nouvelles valeurs après modification
    QString NOM = ui->nomm->text();
    QString PRENOM = ui->prenomm->text();
    QString POSTE = ui->postem->currentText();
    float SALAIRE = ui->salairem->value();
    QString MDP = ui->mdpm->text();
    QString EMAIL = ui->mailm->text();
    QDate DATE_EMB = ui->datem->date();

    // Vérification du mot de passe (au moins une majuscule et un caractère spécial)
    QRegularExpression majuscule("[A-Z]");
    QRegularExpression special("[^a-zA-Z0-9]");

    if (!MDP.contains(majuscule) || !MDP.contains(special)) {
        QMessageBox::warning(this, "Mot de passe invalide",
                             "Le mot de passe doit contenir au moins une lettre majuscule et un caractère spécial.");
        return;
    }

    // Vérification de l'email (doit contenir '@')
    if (!EMAIL.contains("@")) {
        QMessageBox::warning(this, "Email invalide",
                             "L'adresse email doit contenir le symbole '@'.");
        return;
    }

    // Modifier les informations de l'employé
    e.setNOM(NOM);
    e.setPRENOM(PRENOM);
    e.setPOSTE(POSTE);
    e.setSALAIRE(SALAIRE);
    e.setMDP(MDP);
    e.setEMAIL(EMAIL);
    e.setDATE_EMB(DATE_EMB);
    e.setIMAGE(imageData); // Mettre à jour l'image si nécessaire

    bool test = e.modifier();
    afficherStatistiques();

    if (test) {
        ui->tableView->setModel(e.afficher());  // Actualiser l'affichage
        QMessageBox::information(this, "Succès", "L'employé a été modifié avec succès.");
    } else {
        QMessageBox::critical(this, "Échec", "La modification a échoué.");
    }
}*/









//tri
void MainWindow::on_tri_activated(int index)
{
    employee e;

    switch (index)
    {
    case 0: // Tri par ID
        ui->tableView->setModel(e.trier(1));
        break;
    case 1: // Tri par salaire
        ui->tableView->setModel(e.trier(2));
        break;
    case 2: // Tri par nom
        ui->tableView->setModel(e.trier(3));
        break;
    case 3: // Tri par  date d'embauche
        ui->tableView->setModel(e.trier(4));
        break;
    default:
        ui->tableView->setModel(e.afficher()); // Afficher sans tri
        break;
    }
}



void MainWindow::on_validrech_clicked()
{
    int ID_EMP = ui->rech->text().toInt();
    employee e;
    ui->tableView->setModel(e.recherche(ID_EMP));
}



//image
void MainWindow::on_deposer_clicked()
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
            image = image.scaled(ui->laboula->size(), Qt::KeepAspectRatio);

            // Afficher l'image
            ui->laboula->setPixmap(QPixmap::fromImage(image));
        }
    }
}


void MainWindow::on_deposerm_clicked()
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
            image = image.scaled(ui->laboula1->size(), Qt::KeepAspectRatio);

            // Afficher l'image dans le QLabel
            ui->laboula1->setPixmap(QPixmap::fromImage(image));
        }
    }
}


void MainWindow::on_exp_clicked()
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

    // Récupérer la vue graphique générée par statistiquesPoste()
    QGraphicsView *statView = e.statistiquesPoste();
    QGraphicsView *statVie = e.statistiquesembauche();

    // Vérifier que l'élément "stat" existe bien dans l'UI
    if (ui->stat) {
        // Remplacer l'ancienne scène par la nouvelle
        QGraphicsScene *scene = statView->scene();
        ui->stat->setScene(scene);

    }
    if (ui->stat1) {
        // Remplacer l'ancienne scène par la nouvelle
        QGraphicsScene *scene = statVie->scene();
        ui->stat1->setScene(scene);
    }
}




//mtaa modifier
void MainWindow::on_set_clicked()
{
    int ID_EMP = ui->idm->text().toInt();
    employee e;

    if (e.recuperer(ID_EMP)) {  // Si l'ID est trouvé dans la base de données
        ui->nomm->setText(e.getNOM());
        ui->prenomm->setText(e.getPRENOM());
        ui->postem->setCurrentText(e.getPOSTE());
        ui->salairem->setValue(e.getSALAIRE());
        ui->mdpm->setText(e.getMDP());
        ui->mailm->setText(e.getEMAIL());
        ui->datem->setDate(e.getDATE_EMB());

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

