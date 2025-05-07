#include "gressource.h"
#include "ui_gressource.h"
#include "ressources.h"
#include "mainwindowrdv.h"

#include "log.h"
#include <QMessageBox>
#include <QTableView>
#include <QSqlQueryModel>
#include <QPdfWriter>
#include <QPainter>
#include <QFileDialog>
#include <QRegularExpression>
#include <QtCharts/QChartView>
#include <QtCharts/QChart>
#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QHttpMultiPart>
#include <QFile>
#include <QFileInfo>
#include <QMimeDatabase>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMediaPlayer>
#include <QAudioOutput>

gressource::gressource(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::gressource)
{
    ui->setupUi(this);
    Ressources res;
    ui->tableView->setModel(res.afficher());
    ui->tableView->resizeColumnsToContents(); // Ajuste la largeur des colonnes selon le contenu
    ui->tableView->horizontalHeader()->setStretchLastSection(true); // Étire la dernière colonne

    // MAX-MIN qte
    ui->qteSpinBox->setMaximum(99999);
    ui->qteSpinBox->setMinimum(0);
    // max-min prix
    ui->PrixSpinbox->setMaximum(99999);
    ui->PrixSpinbox->setMinimum(0);

    // intialiser network manager
    networkManager = new QNetworkAccessManager(this);
    connect(networkManager, &QNetworkAccessManager::finished, this, &gressource::onApiReplyFinished);

    //intialiser media player
    mediaPlayer = new QMediaPlayer(this);
    audioOutput = new QAudioOutput(this);
    mediaPlayer->setAudioOutput(audioOutput);
}

gressource::~gressource()
{
    delete ui;
}

//button valider ajout
void gressource::on_valider_ajout_clicked()
{
    // Récupérer les données saisies dans l'interface
    QString nom = ui->nom->text().trimmed();
    int qte = ui->qteSpinBox->value();
    double prix = ui->PrixSpinbox->value();
    QString etat;

    // Contrôle de saisie pour le nom
    if (nom.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Le champ 'Nom' ne peut pas être vide.");
        return;
    }
    //caracteres speciaux
    QRegularExpression regex("^[a-zA-Zéè]+$");
    if (!regex.match(nom).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "Le champ 'Nom' ne peut pas contenir des chiffres et des espaces.");
        return;
    }

    // Contrôle de saisie pour la quantité
    if (qte <= 0) {
        QMessageBox::warning(this, "Erreur", "La quantité doit être supérieure à 0.");
        return;
    }
    if (qte > 9999) { // Limiter la quantité à une valeur raisonnable
        QMessageBox::warning(this, "Erreur", "La quantité ne peut pas dépasser 9999.");
        return;
    }

    // Contrôle de saisie pour le prix
    if (prix <= 0) {
        QMessageBox::warning(this, "Erreur", "Le prix doit être supérieur à 0.");
        return;
    }
    if (prix > 9999) { // Limiter le prix à une valeur raisonnable
        QMessageBox::warning(this, "Erreur", "Le prix ne peut pas dépasser 9999.");
        return;
    }

    // Contrôle de saisie pour l'état
    if (ui->dispo->isChecked()) {
        etat = "Disponible";
    } else if (ui->hstock->isChecked()) {
        etat = "Hors stock";
    } else {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner un état.");
        return;
    }

    // Créer un objet Ressources avec les données saisies
    Ressources ressource;
    ressource.setNom(nom);
    ressource.setQte(qte);
    ressource.setPrix(prix);
    ressource.setEtat(etat);

    // Ajouter la ressource à la base de données
    if (ressource.ajouter())
    {
        QMessageBox::information(this, "Succès", "La ressource a été ajoutée avec succès.");
        // Réinitialiser les champs après l'ajout
        ui->nom->clear();
        ui->qteSpinBox->setValue(0);
        ui->PrixSpinbox->setValue(0.0);
        ui->dispo->setChecked(false);
        ui->hstock->setChecked(false);
        ui->tableView->setModel(res.afficher());
    }
}

//boutton retour de l'ajout
void gressource::on_retour_ajout_clicked()
{
    ui->nom->clear();
    ui->qteSpinBox->setValue(0);
    ui->PrixSpinbox->setValue(0.0);
    ui->dispo->setChecked(false);
    ui->hstock->setChecked(false);
    ui->tableView->setModel(res.afficher());
}

//recuperer donnees selon REF
void gressource::on_recherche_modif_clicked()
{
    // Récupérer l'ID saisi
    int reference = ui->ref->text().toInt();

    if (reference <= 0) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir une référence valide !");
        return;
    }

    //appel recherche
    Ressources res;
    if (res.chercher(reference))
    {
        // Remplir les champs de modification
        ui->nomm->setText(res.getNom());
        ui->qtem->setText(QString::number(res.getQte()));
        ui->prixm->setText(QString::number(res.getPrix()));

        if (res.getEtat() == "Disponible") {
            ui->dispom->setChecked(true);
            ui->horsstockm->setChecked(false);
        } else {
            ui->dispom->setChecked(false);
            ui->horsstockm->setChecked(true);
        }

        QMessageBox::information(this, "Succès", "Ressource trouvée !");
    } else {
        QMessageBox::warning(this, "Erreur", "Aucune ressource trouvée avec cette référence.");
    }
}

//button modifier
void gressource::on_pushButton_21_clicked()
{
    int reference = ui->ref->text().toInt();

    // Vérification
    if (reference <= 0) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir une référence valide !");
        return;
    }

    //valeurs modifiées
    QString nom = ui->nomm->text();
    int quantite = ui->qtem->text().toInt();
    double prix = ui->prixm->text().toDouble();
    QString etat;

    // Contrôle de saisie pour le nom
    if (nom.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Le champ 'Nom' ne peut pas être vide.");
        return;
    }
    //caracteres speciaux
    QRegularExpression regex("^[a-zA-Zéè]+$");
    if (!regex.match(nom).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "Le champ 'Nom' ne peut pas contenir des chiffres et des espaces.");
        return;
    }

    // Contrôle de saisie pour la quantité
    if (quantite <= 0) {
        QMessageBox::warning(this, "Erreur", "La quantité doit être supérieure à 0.");
        return;
    }
    if (quantite > 9999) { // Limiter la quantité à une valeur raisonnable
        QMessageBox::warning(this, "Erreur", "La quantité ne peut pas dépasser 9999.");
        return;
    }

    // Contrôle de saisie pour le prix
    if (prix <= 0) {
        QMessageBox::warning(this, "Erreur", "Le prix doit être supérieur à 0.");
        return;
    }
    if (prix > 9999) { // Limiter le prix à une valeur raisonnable
        QMessageBox::warning(this, "Erreur", "Le prix ne peut pas dépasser 9999.");
        return;
    }

    if (ui->dispom->isChecked()) {
        etat = "Disponible";
    } else if (ui->horsstockm->isChecked()) {
        etat = "Hors stock";
    } else {
        QMessageBox::warning(this, "Errreur", "Veuillez sélectionner un état.");
        return;
    }
    // Créer un objet Ressources avec les nouvelles valeurs
    Ressources res;
    res.setNom(nom);
    res.setQte(quantite);
    res.setPrix(prix);
    res.setEtat(etat);
    // Appel de la fonction modifier()
    if (res.modifier(reference))
    {
        ui->tableView->setModel(res.afficher());

        ui->nomm->clear();
        ui->qtem->clear();
        ui->prixm->clear();
        ui->dispom->setChecked(false);
        ui->horsstockm->setChecked(false);
    }
}

//button supprimer
void gressource::on_supprimer_clicked()
{
    // Récupérer la référence de la ressource à supprimer
    int reference = ui->suppref->text().toInt();  // Si tu récupères la référence à partir d'un QLineEdit

    // Vérifier si la référence est valide
    if (!res.chercher(reference)) {
        QMessageBox::warning(nullptr, "Erreur", "Veuillez entrer une référence valide.");
        return;
    }

    // Appeler la fonction supprimer avec la référence
    Ressources ressources;
    bool success = ressources.supprimer(reference);

    // Optionnel : traiter la réponse de la fonction supprimer
    if (success) {
        // refresh
        ui->tableView->setModel(res.afficher());
    }
}

//button metier trie
void gressource::on_trier_clicked()
{
    // Récupérer le critère
    QString critere = ui->critere_tri->currentText();

    // Déterminer l'ordre
    QString ordre = ui->ordre_tri->currentText();

    // Appeler la fonction trier avec les critères et l'ordre
    Ressources ressources;
    QSqlQueryModel* model = ressources.trier(critere, ordre);

    if (model != nullptr)
    {
        // Si le modèle est valide, mets-le dans une vue
        ui->tableView->setModel(model);
    }
    else
    {
        // Gérer l'erreur, si nécessaire
        qDebug() << "Erreur lors du tri des ressources.";
    }
}

//button metier recherche
void gressource::on_Rechercher_clicked()
{
    QString critere = ui->critere_recherche->currentText();
    QString valeur = ui->recherchetext->text();

    // Appeler la fonction trier avec les critères et l'ordre
    Ressources ressources;
    QSqlQueryModel* model = ressources.rechercher(valeur,critere);
    if (model != nullptr)
    {
        // Si le modèle est valide, mets-le dans une vue
        ui->tableView->setModel(model);
    }
    else
    {
        // Gérer l'erreur, si nécessaire
        qDebug() << "Erreur lors de la recherche des ressources.";
    }
}

//afficher les statistiques
void gressource::afficherStatistiques()
{
    // Récupérer le QPieSeries depuis la classe Ressources
    Ressources res;
    QPieSeries *series = res.getStatistiques();

    // Formater les étiquettes pour afficher les pourcentages
    for (QPieSlice *slice : series->slices()) {
        slice->setLabelVisible(true); // Afficher l'étiquette
        slice->setLabel(QString("%1 (%2%)")
                            .arg(slice->label()) // Nom de la tranche (ex: "Disponible")
                            .arg(slice->percentage() * 100, 0, 'f', 2)); // Pourcentage avec 2 décimales
    }

    // Créer un QChart et y ajouter la série
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Statistiques des ressources");
    chart->setAnimationOptions(QChart::SeriesAnimations); // Ajouter une animation

    // Créer une vue pour le graphique
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing); // Activer l'antialiasing

    // Afficher la vue dans une fenêtre
    QMainWindow *chartWindow = new QMainWindow();
    chartWindow->setCentralWidget(chartView);
    chartWindow->resize(800, 600); // Taille de la fenêtre
    chartWindow->show();
}

//button export
void gressource::on_export_pdf_clicked()
{
    res.export_pdf();
}

//afficher stat
void gressource::on_pushButton_11_clicked()
{
    afficherStatistiques();
}

//button refresh
void gressource::on_pushButton_12_clicked()
{
    ui->tableView->setModel(res.afficher());
}

//button reconnaissance des objets
void gressource::on_pushButton_clicked()
{
    // Reset the audio file path and play button state
    audioFilePath.clear();
    if (ui->playAudioButton) {
        ui->playAudioButton->setEnabled(false);
    }
    if (ui->equipmentLabel) {
        ui->equipmentLabel->setText(""); // Clear the equipment name display
    }

    QString filter = QString("Supported Files (*.shp *.kml *.jpg *.png );;All files (*)");
    QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Select File(s)"), QDir::homePath(), filter);
    for(int idx = 0; idx < fileNames.size(); ++idx)
    {
        QImage image;
        bool success = image.load(fileNames.at(idx));
        qDebug() << "File loaded successfully: " << success;

        if (success) {
            // Optionally, display image in UI if you have an image label
            ui->imageLabel->setPixmap(QPixmap::fromImage(image).scaled(ui->imageLabel->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

            // Prepare the HTTP POST request with file upload
            QHttpMultiPart *multiPart = new QHttpMultiPart(QHttpMultiPart::FormDataType);

            // Add the file part
            QFile *file = new QFile(fileNames.at(idx));
            if (!file->open(QIODevice::ReadOnly)) {
                QMessageBox::warning(this, "Erreur", "Impossible d'ouvrir le fichier.");
                delete file;
                delete multiPart;
                return;
            }

            QHttpPart filePart;
            QFileInfo fileInfo(fileNames.at(idx));
            QString baseFileName = fileInfo.fileName();
            filePart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"file\"; filename=\"" + baseFileName + "\""));

            QMimeDatabase mimeDb;
            QMimeType mimeType = mimeDb.mimeTypeForFile(fileNames.at(idx));
            filePart.setHeader(QNetworkRequest::ContentTypeHeader, QVariant(mimeType.name()));
            qDebug() << "Uploading file with MIME type:" << mimeType.name();

            filePart.setBodyDevice(file);
            file->setParent(multiPart);
            multiPart->append(filePart);

            QNetworkRequest request(QUrl("http://127.0.0.1:8000/identify-and-vocalize-equipment/"));
            networkManager->post(request, multiPart);
            multiPart->setParent(networkManager);
        }
    }
}

// reponse d'api
void gressource::onApiReplyFinished(QNetworkReply *reply)
{
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray responseData = reply->readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(responseData);

        if (!jsonDoc.isNull() && jsonDoc.isObject()) {
            QJsonObject jsonObj = jsonDoc.object();

            QString equipmentName = jsonObj.value("equipment_name").toString();
            audioFilePath = jsonObj.value("audio_file_path").toString();

            if (ui->equipmentLabel) {
                ui->equipmentLabel->setText(equipmentName);
            } else {
                QMessageBox::information(this, "Equipment Identified", "Equipment: " + equipmentName);
            }

            if (ui->playAudioButton && !audioFilePath.isEmpty()) {
                ui->playAudioButton->setEnabled(true);
            }
        } else {
            QMessageBox::warning(this, "Erreur API", "Réponse JSON invalide.");
        }
    } else {
        QByteArray responseData = reply->readAll();
        QString responseString = QString::fromUtf8(responseData);
        qDebug() << "API Error:" << reply->errorString();
        qDebug() << "HTTP Status Code:" << reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
        qDebug() << "Response Body:" << responseString;
        QMessageBox::warning(this, "Erreur API", "Erreur : " + reply->errorString() + "\nDétails : " + responseString);
    }
    reply->deleteLater();
}

// button audio
void gressource::on_playAudioButton_clicked()
{
    if (audioFilePath.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Aucun fichier audio à jouer.");
        return;
    }

    // Stop any currently playing audio and clear the media
    mediaPlayer->stop();
    mediaPlayer->setSource(QUrl()); // Clear the current source

    // Set the new media source and play
    mediaPlayer->setSource(QUrl::fromLocalFile(audioFilePath));
    audioOutput->setVolume(0.5);
    mediaPlayer->play();

}

void gressource::on_pushButton_13_clicked()
{
    this->close();  // Fermer MainWindow
    class log l;
    l.exec();
}

