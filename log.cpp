#include "log.h"
#include "ui_log.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include "mainwindow.h"
#include "gressource.h"
#include "dialog.h" // Inclusion pour Dialog
#include "mainwindowrdv.h" // Inclusion pour MainWindowrdv
#include <QBuffer>
#include <QImage>
#include <QDebug>
#include <QRegularExpression>
#include <QFile>
#include "mainwindowV.h"

log::log(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::log)
{
    ui->setupUi(this);
}

log::~log()
{
    delete ui;
}

// Connexion par identifiant et mot de passe
void log::on_connect_2_clicked()
{
    QString id = ui->user_2->text().trimmed();
    QString mdp = ui->pswd_2->text().trimmed();

    if (id.isEmpty() || mdp.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs !");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT POSTE FROM employés WHERE LOWER(TRIM(ID_EMP)) = LOWER(TRIM(:id)) AND LOWER(TRIM(MDP)) = LOWER(TRIM(:mdp))");
    query.bindValue(":id", id);
    query.bindValue(":mdp", mdp);

    if (query.exec() && query.next()) {
        QString poste = query.value(0).toString().toLower();
        QMessageBox::information(this, "Connexion réussie", "Bienvenue " + poste + " !");

        if (poste == "médecin" || poste == "medecin") {
            MainWindowV *mv = new MainWindowV();
            mv->show();
        }
        else if (poste == "agent") {
            QMessageBox msgBox;
            msgBox.setText("Choisissez une interface");
            QPushButton *mainWindowVButton = msgBox.addButton("MainWindowV", QMessageBox::AcceptRole);
            QPushButton *gressourceButton = msgBox.addButton("Gressource", QMessageBox::AcceptRole);
            QPushButton *dialogButton = msgBox.addButton("Dialog", QMessageBox::AcceptRole); // Option pour Dialog
            QPushButton *mainWindowRdvButton = msgBox.addButton("MainWindowRdv", QMessageBox::AcceptRole); // Option pour MainWindowrdv
            msgBox.exec();

            if (msgBox.clickedButton() == mainWindowVButton) {
                MainWindowV *mv = new MainWindowV();
                mv->show();
            } else if (msgBox.clickedButton() == gressourceButton) {
                gressource *gr = new gressource();
                gr->show();
            } else if (msgBox.clickedButton() == dialogButton) {
                Dialog *dlg = new Dialog();
                dlg->show();
            } else if (msgBox.clickedButton() == mainWindowRdvButton) {
                MainWindowrdv *mrdv = new MainWindowrdv();
                mrdv->show();
            }
        }
        else if (poste == "rh manager") {
            MainWindow *m = new MainWindow();
            m->show();
        }
        else if (poste == "admin") {
            MainWindow *m = new MainWindow();
            m->show();
        }

        this->close();
    } else {
        QMessageBox::critical(this, "Échec", "ID ou mot de passe incorrect !");
    }
}

// Connexion par reconnaissance faciale
void log::on_recof_2_clicked()
{
    ui->speechOutput_2->setText("Vérification faciale... Souriez à la caméra !");

    QProcess faceProcess;
    QString workingDir = QCoreApplication::applicationDirPath();
    faceProcess.setWorkingDirectory(workingDir);
    faceProcess.start("C:/Users/VIVOBOOK/AppData/Local/Programs/Python/Python312/python.exe",
                      QStringList() << "face_recognition.py");

    if (!faceProcess.waitForFinished(15000)) {
        QMessageBox::warning(this, "Erreur", "Échec de la capture d'image.");
        return;
    }

    QString output = faceProcess.readAllStandardOutput().trimmed();
    output.replace("\r", "");
    QStringList outputLines = output.split("\n", Qt::SkipEmptyParts);

    if (!outputLines.contains("FaceDetected")) {
        QMessageBox::critical(this, "Échec", "Aucun visage détecté.");
        return;
    }

    QString capturedImagePath = outputLines.last().trimmed();
    if (capturedImagePath.startsWith("Erreur")) {
        QMessageBox::critical(this, "Erreur", capturedImagePath);
        return;
    }

    ui->speechOutput_2->setText("Comparaison en cours...");

    QSqlQuery query;
    query.prepare("SELECT ID_EMP, POSTE, IMAGE FROM employés WHERE IMAGE IS NOT NULL");
    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur base de données !");
        return;
    }

    bool found = false;
    int matchedId = -1;
    QString poste;

    while (query.next()) {
        int idEmp = query.value("ID_EMP").toInt();
        QString currentPoste = query.value("POSTE").toString().toLower();
        QByteArray photoData = query.value("IMAGE").toByteArray();

        QString referenceImagePath = workingDir + "/reference_face_" + QString::number(idEmp) + ".jpg";
        QFile file(referenceImagePath);
        if (!file.open(QIODevice::WriteOnly)) continue;
        file.write(photoData);
        file.close();

        QProcess compareProcess;
        compareProcess.setWorkingDirectory(workingDir);
        compareProcess.start("C:/Users/VIVOBOOK/AppData/Local/Programs/Python/Python312/python.exe",
                             QStringList() << "compare_faces.py" << capturedImagePath << referenceImagePath);
        if (!compareProcess.waitForFinished(20000)) {
            QFile::remove(referenceImagePath);
            continue;
        }

        QString result = QString::fromUtf8(compareProcess.readAllStandardOutput()).trimmed();
        result.replace("\r", "").replace("\n", " ");
        QFile::remove(referenceImagePath);

        if (result.contains("Match")) {
            matchedId = idEmp;
            poste = currentPoste;
            found = true;
            break;
        }
    }

    QFile::remove(capturedImagePath);

    if (!found) {
        QMessageBox::critical(this, "Échec", "Aucune correspondance trouvée !");
        return;
    }

    QMessageBox::information(this, "Connexion réussie",
                             "Bienvenue !\nID : " + QString::number(matchedId) + "\nPoste : " + poste);

    poste = poste.trimmed().toLower();
    if (poste == "médecin" || poste == "medecin") {
        MainWindowV *mv = new MainWindowV();
        mv->show();
    }
    else if (poste == "agent") {
        QMessageBox msgBox;
        msgBox.setText("Choisissez une interface");
        QPushButton *mainWindowVButton = msgBox.addButton("MainWindowV", QMessageBox::AcceptRole);
        QPushButton *gressourceButton = msgBox.addButton("Gressource", QMessageBox::AcceptRole);
        QPushButton *dialogButton = msgBox.addButton("Dialog", QMessageBox::AcceptRole); // Option pour Dialog
        QPushButton *mainWindowRdvButton = msgBox.addButton("MainWindowRdv", QMessageBox::AcceptRole); // Option pour MainWindowrdv
        msgBox.exec();

        if (msgBox.clickedButton() == mainWindowVButton) {
            MainWindowV *mv = new MainWindowV();
            mv->show();
        } else if (msgBox.clickedButton() == gressourceButton) {
            gressource *gr = new gressource();
            gr->show();
        } else if (msgBox.clickedButton() == dialogButton) {
            Dialog *dlg = new Dialog();
            dlg->show();
        } else if (msgBox.clickedButton() == mainWindowRdvButton) {
            MainWindowrdv *mrdv = new MainWindowrdv();
            mrdv->show();
        }
    }
    else if (poste == "rh manager") {
        MainWindow *m = new MainWindow();
        m->show();
    }
    else if (poste == "admin") {
        MainWindow *m = new MainWindow();
        m->show();
    }

    this->close();
}

// Connexion par reconnaissance vocale
void log::on_recov_2_clicked()
{
    // Afficher que l'écoute commence
    ui->speechOutput_2->setText("En écoute...");

    // Initialiser le processus pour le script Python
    QProcess process;
    process.start("C:/Users/VIVOBOOK/AppData/Local/Programs/Python/Python312/python.exe",
                  QStringList() << "recognize.py");

    // Attendre la fin du processus (10 secondes max)
    bool finished = process.waitForFinished(10000);

    QString recognizedText;
    if (!finished || process.exitStatus() != QProcess::NormalExit || process.exitCode() != 0) {
        QMessageBox::warning(this, "Erreur", "Problème avec le script Python. Veuillez réessayer.");
        ui->speechOutput_2->setText("Erreur de reconnaissance");
        return;
    }

    // Lire la sortie du script
    recognizedText = process.readAllStandardOutput().trimmed();
    if (recognizedText.isEmpty() || recognizedText.startsWith("Erreur")) {
        QMessageBox::warning(this, "Erreur", "Aucun texte reconnu. Veuillez réessayer.");
        ui->speechOutput_2->setText("Aucun texte reconnu");
        return;
    }

    // Afficher le texte reconnu pour debug
    ui->speechOutput_2->setText("Texte reconnu : " + recognizedText);

    // Nettoyer : garder uniquement les chiffres
    recognizedText = recognizedText.remove(QRegularExpression("[^0-9]"));

    // Conversion en entier
    bool ok;
    int idNumber = recognizedText.toInt(&ok);
    if (!ok || idNumber <= 0) {
        QMessageBox::warning(this, "Erreur", "L'ID vocal doit être un nombre entier positif !");
        return;
    }

    // Vérification dans la base de données
    QSqlQuery query;
    query.prepare("SELECT ID_EMP, POSTE FROM employés WHERE ID_EMP = :id");
    query.bindValue(":id", idNumber);

    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la requête à la base de données.");
        return;
    }

    if (query.next()) {
        QString poste = query.value("POSTE").toString();
        QMessageBox::information(this, "Connexion réussie", "Bienvenue, " + poste + " !");
        poste = poste.trimmed().toLower();

        // Rediriger vers l'interface appropriée en fonction du poste
        if (poste == "médecin" || poste == "medecin") {
            MainWindowV *mv = new MainWindowV();
            mv->show();
        }
        else if (poste == "agent") {
            QMessageBox msgBox;
            msgBox.setText("Choisissez une interface");
            QPushButton *mainWindowVButton = msgBox.addButton("MainWindowV", QMessageBox::AcceptRole);
            QPushButton *gressourceButton = msgBox.addButton("Gressource", QMessageBox::AcceptRole);
            QPushButton *dialogButton = msgBox.addButton("Dialog", QMessageBox::AcceptRole); // Option pour Dialog
            QPushButton *mainWindowRdvButton = msgBox.addButton("MainWindowRdv", QMessageBox::AcceptRole); // Option pour MainWindowrdv
            msgBox.exec();

            if (msgBox.clickedButton() == mainWindowVButton) {
                MainWindowV *mv = new MainWindowV();
                mv->show();
            } else if (msgBox.clickedButton() == gressourceButton) {
                gressource *gr = new gressource();
                gr->show();
            } else if (msgBox.clickedButton() == dialogButton) {
                Dialog *dlg = new Dialog();
                dlg->show();
            } else if (msgBox.clickedButton() == mainWindowRdvButton) {
                MainWindowrdv *mrdv = new MainWindowrdv();
                mrdv->show();
            }
        }
        else if (poste == "rh manager") {
            MainWindow *m = new MainWindow();
            m->show();
        }
        else if (poste == "admin") {
            MainWindow *m = new MainWindow();
            m->show();
        }
        else {
            QMessageBox::warning(this, "Erreur", "Poste inconnu : " + poste);
            return;
        }

        // Fermer la fenêtre de login
        this->close();
    } else {
        QMessageBox::critical(this, "Échec", "ID introuvable dans la base de données !");
    }
}
