#include "log.h"
#include "ui_log.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include "mainwindow.h"
#include "gressource.h"
//#include <>
//#include <opencv2/opencv_modules.hpp>
//#include <opencv2/imgproc/imgproc.hpp>  // pour resize()
#include <QBuffer>
#include <QImage>
//#include <opencv2/objdetect.hpp>
#include <QDebug>
#include <QRegularExpression>
#include <QFile>


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




//session
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
            MainWindow *m = new MainWindow();
            m->show();
        }
        else if (poste == "agent") {
            gressource *gr = new gressource();
            gr->show();
        }

        else if (poste == " RH manager") {
            MainWindow *m = new MainWindow();
            m->show();
        }
        else if (poste == " Admin") {

            MainWindow *m = new MainWindow();
            m->show();
        }


        this->close();
    } else {
        QMessageBox::critical(this, "Échec", "ID ou mot de passe incorrect !");
    }
}











/*using namespace cv;

// Fonction pour transformer un QImage stocké en base en Mat
cv::Mat QImageToMat(const QImage &image) {
    return cv::Mat(image.height(), image.width(), CV_8UC4, (void*)image.bits(), image.bytesPerLine()).clone();
}*/



/*void log::on_recof_clicked()
{
    ui->speechOutput->setText("Vérification faciale... Souriez à la caméra !");

    QProcess faceProcess;
    QString workingDir = QCoreApplication::applicationDirPath();
    faceProcess.setWorkingDirectory(workingDir);
    faceProcess.start("C:/Users/VIVOBOOK/AppData/Local/Programs/Python/Python312/python.exe",
                      QStringList() << "face_recognition.py");
    if (!faceProcess.waitForFinished(15000)) {
        QMessageBox::warning(this, "Erreur", "Échec de la capture d'image.");
        return;
    }

    QString output = faceProcess.readAllStandardOutput().trimmed();//testocki resultat mtaa sortie fl output
    // Supprimer les caractères \r pour gérer les fins de ligne Windows
    output.replace("\r", "");
    QStringList outputLines = output.split("\n", Qt::SkipEmptyParts);//nettoyage

    // Afficher la sortie pour débogage
   // qDebug() << "Sortie de face_recognition.py :" << outputLines;

    // Vérifier si un visage a été détecté
    bool faceDetected = outputLines.contains("FaceDetected");
    if (!faceDetected) {
        QMessageBox::critical(this, "Échec", "Aucun visage détecté lors de la capture.");
        return;
    }


    // Mettre à jour speechOutput pour indiquer que le visage a été détecté
    ui->speechOutput->setText("Visage détecté ! Vérification de l'image capturée...");
    //qDebug() << "Étape atteinte : Visage détecté, avant affichage dans speechOutput";

    // Récupérer le chemin de l'image capturée (dernière ligne de la sortie)
    QString capturedImagePath = outputLines.last().trimmed();
    if (capturedImagePath.startsWith("Erreur")) {
        QMessageBox::critical(this, "Échec", capturedImagePath);
        return;
    }

    // Remplacer temporairement QMessageBox::information par un message dans speechOutput
    ui->speechOutput->setText("Image capturée sous 'captured_face_raw.jpg'. Passage à la comparaison...");
    //qDebug() << "Image capturée sauvegardée sous 'captured_face_raw.jpg'. Passage à la comparaison...";

    // Mettre à jour speechOutput avant de lancer la comparaison
    ui->speechOutput->setText("Comparaison en cours...");

    QSqlQuery query;
    query.prepare("SELECT ID_EMP, IMAGE FROM employés WHERE IMAGE IS NOT NULL");
    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Échec de la requête à la base de données.");
        return;
    }

    bool found = false;
    int matchedId = -1;

    while (query.next()) {
        int idEmp = query.value("ID_EMP").toInt();
        QByteArray photoData = query.value("IMAGE").toByteArray();

        QString referenceImagePath = workingDir + "/reference_face_" + QString::number(idEmp) + ".jpg";
        QFile file(referenceImagePath);
        if (!file.open(QIODevice::WriteOnly)) {
            qDebug() << "Erreur: Impossible d'écrire l'image de référence pour ID_EMP" << idEmp;
            continue;
        }
        file.write(photoData);
        file.close();

        // Afficher les chemins pour débogage
        qDebug() << "Comparaison avec l'image de référence :" << referenceImagePath;

        QProcess compareProcess;
        compareProcess.setWorkingDirectory(workingDir);
        compareProcess.start("C:/Users/VIVOBOOK/AppData/Local/Programs/Python/Python312/python.exe",
                             QStringList() << "compare_faces.py" << capturedImagePath << referenceImagePath);
        if (!compareProcess.waitForFinished(20000)) {  // Augmenté à 20000 ms
            qDebug() << "Erreur: compare_faces.py a timed out pour ID_EMP" << idEmp;
            QFile::remove(referenceImagePath);
            continue;
        }

        QString compareResult = QString::fromUtf8(compareProcess.readAllStandardOutput()).trimmed();//yhawalha chaine cohérente qbyte array
        compareResult.replace("\r", "").replace("\n", " ");
        qDebug() << "Résultat brut de compare_faces.py pour ID_EMP" << idEmp << ":" << compareResult;

        QFile::remove(referenceImagePath);//netoyage du fichier temporaire

        if (compareResult.contains("Match")) {//ycompari idhaken chainé extracted ==match wala le si oui yodkhol
            found = true;
            matchedId = idEmp;
            break;
        }
    }

    QFile::remove(capturedImagePath);

    if (!found) {
        QMessageBox::critical(this, "Échec", "Aucun visage correspondant trouvé !");
        return;
    }

    QMessageBox::information(this, "Connexion réussie", "Bienvenue, ID " + QString::number(matchedId) + " !");
    MainWindow *m = new MainWindow();
    m->show();
    this->close();
}*/




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
        MainWindow *m = new MainWindow();
        m->show();
    }
    else if (poste == "agent") {
        gressource *gr = new gressource();
        gr->show();
    }

    else if (poste == " RH manager") {
        MainWindow *m = new MainWindow();
        m->show();
    }
    else if (poste == " Admin") {
        MainWindow *m = new MainWindow();
        m->show();
    }

    this->close();
}










/*void log::on_recov_clicked()
{
    // Afficher que l'écoute commence
    ui->speechOutput->setText("En écoute...");

    // Appeler le script Python
    QProcess process;
    process.start("C:/Users/VIVOBOOK/AppData/Local/Programs/Python/Python312/python.exe",
                  QStringList() << "recognize.py");
    bool finished = process.waitForFinished(10000); // max 10 secondes

    QString recognizedText;
    if (!finished || process.exitStatus() != QProcess::NormalExit || process.exitCode() != 0) {
        QMessageBox::warning(this, "Erreur", "Problème avec le script Python. Simulation activée.");
        recognizedText = "123"; // Valeur simulée si erreur
    } else {
        recognizedText = process.readAllStandardOutput().trimmed();
        if (recognizedText.isEmpty() || recognizedText.startsWith("Erreur")) {
            QMessageBox::warning(this, "Erreur", "Rien reconnu. Simulation activée.");
            recognizedText = "123"; // Valeur simulée si vide
        }
    }

    // Afficher le texte reconnu pour debug
    ui->speechOutput->setText("Texte reconnu : " + recognizedText);

    // Nettoyage : enlever tout sauf les chiffres
    recognizedText = recognizedText.remove(QRegularExpression("[^0-9]")); // garder uniquement les chiffres


    // Conversion en entier
    bool ok;
    int idNumber = recognizedText.toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Erreur", "L'ID vocal doit être un nombre entier !");
        return;
    }

    // Vérification dans la base de données
    QSqlQuery query;
    query.prepare("SELECT * FROM employés WHERE ID_EMP = :id");
    query.bindValue(":id", idNumber);

    if (query.exec() && query.next()) {
        QMessageBox::information(this, "Connexion réussie", "Bienvenue !");
        MainWindow *m = new MainWindow();
        m->show();
        this->close();
    } else {
        QMessageBox::critical(this, "Échec", "ID introuvable !");
    }

}*/










void log::on_recov_2_clicked()
{
    // Afficher que l'écoute commence
    ui->speechOutput_2->setText("En écoute...");

    // Initialiser le processus pour le script Python
    QProcess process;
    process.start("C:/Users/VIVOBOOK/AppData/Local/Programs/Python/Python312/python.exe",
                    QStringList() << "C:/Users/VIVOBOOK/Documents/employ/recognize.py");

    // Attendre la fin du processus (10 secondes max)
    bool finished = process.waitForFinished(10000);

    QString recognizedText;
    if (!finished || process.exitStatus() != QProcess::NormalExit || process.exitCode() != 0) {
        QMessageBox::warning(this, "Erreur", "Problème avec le script Python. Veuillez réessayer.");
        ui->speechOutput_2->setText("Erreur de reconnaissance");
        qDebug() << "Standard Output:" << process.readAllStandardOutput();
        qDebug() << "Standard Error:" << process.readAllStandardError();
        qDebug() << "Exit Code:" << process.exitCode();
        qDebug() << "Exit Status:" << process.exitStatus();

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
    query.prepare("SELECT ID_EMP, Poste FROM employés WHERE ID_EMP = :id");
    query.bindValue(":id", idNumber);

    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la requête à la base de données.");
        return;
    }

    if (query.next()) {
        QString poste = query.value("Poste").toString();
        QMessageBox::information(this, "Connexion réussie", "Bienvenue, " + poste + " !");
        poste = poste.trimmed().toLower();

        if (poste == "médecin" || poste == "medecin") {
            MainWindow *m = new MainWindow();
            m->show();
        } else if (poste == "agent") {
            MainWindow *m = new MainWindow();
            m->show();
        } else if (poste == "rh manager") {
            MainWindow *m = new MainWindow();
            m->show();
        } else if (poste == "admin") {
            MainWindow *m = new MainWindow();
            m->show();
        } else {
            QMessageBox::warning(this, "Erreur", "Poste inconnu : " + poste);
            return;
        }


        // Fermer la fenêtre de login
        this->close();
    } else {
        QMessageBox::critical(this, "Échec", "ID introuvable dans la base de données !");
    }
}




