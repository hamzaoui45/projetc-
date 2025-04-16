#include "log.h"
#include "ui_log.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include "mainwindow.h"
#include <opencv2/opencv.hpp>
#include <opencv2/opencv_modules.hpp>
#include <opencv2/imgproc/imgproc.hpp>  // pour resize()
#include <QBuffer>
#include <QImage>
#include <opencv2/objdetect.hpp>
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

void log::on_connect_clicked()
{
    QString id = ui->user->text();      // Récupérer l'ID entré
    QString mdp = ui->pswd->text();     // Récupérer le mot de passe entré
    //int idem=id.toInt();

    // Vérifier si les champs ne sont pas vides
    if (id.isEmpty() || mdp.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs !");
        return;
    }

    qDebug() << "ID:" << id << "| mdp" << mdp;

    // Connexion à la base de données et vérification de l'authentification
    QSqlQuery query;
    query.prepare("SELECT * FROM employés WHERE ID_EMP = :id AND MDP = :mdp");
    query.bindValue(":id", id);
    query.bindValue(":mdp", mdp);

    if (query.exec()&& query.next()) {
        QMessageBox::information(this, "Connexion réussie", "Bienvenue !");

        // Ouvrir MainWindow
        MainWindow *m = new MainWindow();
        m->show();

        // Fermer la fenêtre actuelle
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



void log::on_recof_clicked()
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

    QString output = faceProcess.readAllStandardOutput().trimmed();
    // Supprimer les caractères \r pour gérer les fins de ligne Windows
    output.replace("\r", "");
    QStringList outputLines = output.split("\n", Qt::SkipEmptyParts);

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

        QString compareResult = QString::fromUtf8(compareProcess.readAllStandardOutput()).trimmed();//yhawalha chaine cohérente
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
}


















void log::on_recov_clicked()
{
    // Afficher que l'écoute commence
    ui->speechOutput->setText("En écoute...");

    // Appeler le script Python pour la reconnaissance vocale
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

}

