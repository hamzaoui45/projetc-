#include "mainwindowV.h"
#include "ui_mainwindowV.h"
#include "vaccin.h"
#include <QMessageBox>
#include <QDebug>
#include <QVBoxLayout>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QChart>
#include <QVBoxLayout>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QProcess>


// mainwindow.cpp


#include <QProcess>
#include <QStringList>
#include <QByteArray>



#include <QFileDialog>
#include <QPdfWriter>
#include <QPainter>
#include <QSqlQuery>
#include <QFont>
#include "gressource.h"


// Destructeur
MainWindowV::~MainWindowV()
{
    sauvegarderHistorique();
    delete ui;
    connect(ui->pushButton_7, &QPushButton::clicked, this, &MainWindowV::on_switchToGressourceButton_clicked);

}
void MainWindowV::on_switchToGressourceButton_clicked()
{
    gressource *gr = new gressource();
    gr->show();
}
// Ajouter un vaccin
void MainWindowV::on_pushbuttonajoutervaccin_clicked()
{
    // 1. Récupération des valeurs depuis l'UI
    QString idStr = ui->idvacc->text();
    QString nom = ui->nomvacc->text();
    QString quantiteStr = ui->quantite->text();
    QString labo = ui->nomlabo->text();
    QString patho = ui->pathologie->text();
    QDate date = ui->dateexp->date();

    // 2. Vérification ID valide
    bool ok;
    int id = idStr.toInt(&ok);
    if (!ok || id <= 0) {
        QMessageBox::critical(this, "Erreur", "L'ID du vaccin doit être un entier positif.");
        return;
    }

    // 3. Vérifier si ID existe déjà
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM Vaccin WHERE id_vac = :id");
    checkQuery.bindValue(":id", id);
    checkQuery.exec();
    if (checkQuery.next() && checkQuery.value(0).toInt() > 0) {
        QMessageBox::warning(this, "Erreur", "Un vaccin avec cet ID existe déjà.");
        return;
    }

    // 4. Expression régulière pour vérifier les champs texte
    QRegularExpression lettersOnly("^[A-Za-zÀ-ÿ\\s]+$");

    if (!lettersOnly.match(nom).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "Le nom du vaccin doit contenir uniquement des lettres.");
        return;
    }

    if (!lettersOnly.match(labo).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "Le nom du laboratoire doit contenir uniquement des lettres.");
        return;
    }

    if (!lettersOnly.match(patho).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "La pathologie doit contenir uniquement des lettres.");
        return;
    }

    // 5. Vérifier la quantité
    int quantite = quantiteStr.toInt(&ok);
    if (!ok || quantite <= 0) {
        QMessageBox::warning(this, "Erreur", "La quantité doit être un entier positif.");
        return;
    }

    // 6. Vérifier que la date est dans le futur
    if (!date.isValid() || date <= QDate::currentDate()) {
        QMessageBox::warning(this, "Erreur", "La date d'expiration doit être dans le futur.");
        return;
    }

    // 7. Si tout est OK, créer l'objet et ajouter
    Vaccin v(id, nom.toStdString(), quantite, labo.toStdString(), patho.toStdString(), date);

    if (v.ajouterVaccin()) {
        QMessageBox::information(this, "Succès", "Vaccin ajouté avec succès.");
        // ui->tab_2->setModel(v.afficherVaccins());  // Décommente pour rafraîchir le tableau
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de l'ajout du vaccin.");
    }
    if (v.ajouterVaccin()) {
        // Réinitialiser les champs après un ajout réussi
        ui->idvacc->clear();
        ui->nomvacc->clear();
        ui->quantite->clear();
        ui->nomlabo->clear();
        ui->pathologie->clear();
        ui->dateexp->setDate(QDate::currentDate());  // Réinitialiser à la date actuelle

        // Affichage du message de succès
        QMessageBox::information(this, "Succès", "Vaccin ajouté avec succès.");
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de l'ajout du vaccin.");
    }
}








/// MainWindow.cpp
void MainWindowV::on_pushButton_12_clicked()
{
    // Récupérer l'ID du vaccin à partir du champ de texte (QLineEdit)
    int idVaccin = ui->idsupression->text().toInt();  // Supposons que 'idsupression' est un QLineEdit
    if (idVaccin == 0) {  // Si l'ID est nul, afficher une erreur
        QMessageBox::critical(this, "Erreur", "L'ID saisi est invalide.");
        return;
    }

    // Créer l'objet Vaccin
    Vaccin v;

    // Supprimer le vaccin à partir de l'ID
    bool test = v.supprimerVaccin(idVaccin);

    if (test) {
        // Mettre à jour la vue (tableau) pour refléter la suppression
        //ui->tab->setModel(v.afficherVaccins());

        // Afficher un message de succès
        QMessageBox::information(this, "Succès", "Vaccin supprimé avec succès.");
    } else {
        // Afficher un message d'erreur
        QMessageBox::critical(this, "Erreur", "Échec de la suppression du vaccin.");
    }
}








void MainWindowV::on_pushButton_16_clicked()
{
    // Create an instance of the Vaccin class to call the afficherVaccins method
    Vaccin vaccin;

    // Get the model of vaccines
    QSqlQueryModel *model = vaccin.afficherVaccins();

    // Get the row count and column count
    int rowCount = model->rowCount();
    int columnCount = model->columnCount();

    // Set the row and column count of the QTableWidget
    ui->tableWidget->setRowCount(rowCount);
    ui->tableWidget->setColumnCount(columnCount);

    // Set headers for the table (based on the columns in the database)
    ui->tableWidget->setHorizontalHeaderLabels({"ID_Vac", "Nom_Vac", "Quantité", "Nom_Labo", "Pathologie", "Date_Exp"});

    // Fill the QTableWidget with data
    for (int row = 0; row < rowCount; row++) {
        for (int col = 0; col < columnCount; col++) {
            QTableWidgetItem *item = new QTableWidgetItem(model->data(model->index(row, col)).toString());
            ui->tableWidget->setItem(row, col, item);
        }
    }
}


void MainWindowV::on_pushButton_21_clicked()
{
    int idVac = ui->modif1->text().toInt();

    // Vérifier si le vaccin existe
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM Vaccin WHERE id_vac = :id");
    checkQuery.bindValue(":id", idVac);
    checkQuery.exec();

    if (checkQuery.next() && checkQuery.value(0).toInt() == 0) {
        QMessageBox::warning(this, "Erreur", "Aucun vaccin trouvé avec cet ID.");
        return;
    }

    // Récupérer les valeurs depuis l'interface
    QString nomVac = ui->modif2->text();
    QString quantiteStr = ui->modif3->text();
    QString labo = ui->modif4->text();
    QString patho = ui->modif5->text();
    QDate dateExp = ui->modif6->date();

    // === VALIDATION DES CHAMPS ===

    // Expression régulière : lettres + espaces autorisés (pas de chiffres)
    QRegularExpression lettersOnly("^[A-Za-zÀ-ÿ\\s]+$");

    if (!lettersOnly.match(nomVac).hasMatch()) {
        QMessageBox::warning(this, "Erreur de saisie", "Le nom du vaccin doit contenir uniquement des lettres.");
        return;
    }

    if (!lettersOnly.match(labo).hasMatch()) {
        QMessageBox::warning(this, "Erreur de saisie", "Le nom du laboratoire doit contenir uniquement des lettres.");
        return;
    }

    if (!lettersOnly.match(patho).hasMatch()) {
        QMessageBox::warning(this, "Erreur de saisie", "La pathologie doit contenir uniquement des lettres.");
        return;
    }

    // Vérifier que quantité est un entier positif
    bool ok;
    int quantite = quantiteStr.toInt(&ok);
    if (!ok || quantite <= 0) {
        QMessageBox::warning(this, "Erreur de saisie", "La quantité doit être un entier positif.");
        return;
    }

    // Vérifier que la date d'expiration est dans le futur
    if (dateExp <= QDate::currentDate()) {
        QMessageBox::warning(this, "Erreur de saisie", "La date d'expiration doit être une date future.");
        return;
    }

    // === ENVOI DES DONNÉES À LA CLASSE VACCIN ===

    Vaccin v;
    v.setIdVac(idVac);
    v.setNomVac(nomVac.toStdString());
    v.setQuantite(quantite);
    v.setNomLabo(labo.toStdString());
    v.setPathologie(patho.toStdString());
    v.setDateExp(dateExp);

    bool test = v.modifierVaccin(idVac);

    if (test) {
        QMessageBox::information(this, "Succès", "Modification effectuée avec succès.");
        // Optionnel : rafraîchir la table si nécessaire
        // ui->tableView->setModel(v.afficherVaccins());
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de la modification.");
    }
    if (test) {
        // Réinitialiser les champs après une modification réussie
        ui->modif1->clear();
        ui->modif2->clear();
        ui->modif3->clear();
        ui->modif4->clear();
        ui->modif5->clear();
        ui->modif6->setDate(QDate::currentDate());  // Réinitialiser à la date actuelle

        // Affichage du message de succès
        QMessageBox::information(this, "Succès", "Modification effectuée avec succès.");
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de la modification.");
    }
}



void MainWindowV::on_pushButton_14_clicked()
{
    int idVac = ui->modif1->text().toInt();  // Lire l’ID

    QSqlQuery query;
    query.prepare("SELECT nom_vac, quantite, nom_labo, pathologie, date_exp FROM Vaccin WHERE id_vac = :id");
    query.bindValue(":id", idVac);

    if (query.exec() && query.next()) {
        // Si le vaccin est trouvé, remplir les champs
        ui->modif2->setText(query.value("nom_vac").toString());
        ui->modif3->setText(QString::number(query.value("quantite").toInt()));  // CHANGÉ ICI
        ui->modif4->setText(query.value("nom_labo").toString());
        ui->modif5->setText(query.value("pathologie").toString());
        ui->modif6->setDate(query.value("date_exp").toDate());
    } else {
        QMessageBox::warning(this, "Introuvable", "Aucun vaccin trouvé avec cet ID.");
    }
}




void MainWindowV::on_pushButton_17_clicked()
{
    // Récupérer le critère sélectionné dans le ComboBox
    QString searchCriterion = ui->comboBox->currentText();  // Valeur sélectionnée dans le comboBox
    QString searchValue = ui->idsupression_2->text().trimmed();  // Valeur saisie dans le QLineEdit

    // Vérifier si l'utilisateur a saisi quelque chose dans le LineEdit
    if (searchValue.isEmpty()) {
        QMessageBox::critical(this, "Erreur", "Veuillez entrer une valeur de recherche.");
        return;
    }

    // Préparer la requête SQL en fonction du critère sélectionné dans le ComboBox
    QSqlQuery query;
    QString queryString;

    if (searchCriterion == "id") {
        // Rechercher par ID
        queryString = "SELECT id_vac, nom_vac, quantite, nom_labo, pathologie, date_exp FROM Vaccin WHERE id_vac = :value";
    } else if (searchCriterion == "nom vaccin") {
        // Rechercher par Nom Vaccin
        queryString = "SELECT id_vac, nom_vac, quantite, nom_labo, pathologie, date_exp FROM Vaccin WHERE nom_vac LIKE :value";
        searchValue = "%" + searchValue + "%";  // Ajouter '%' pour une recherche partielle
    } else if (searchCriterion == "nom labo") {
        // Rechercher par Nom Labo
        queryString = "SELECT id_vac, nom_vac, quantite, nom_labo, pathologie, date_exp FROM Vaccin WHERE nom_labo LIKE :value";
        searchValue = "%" + searchValue + "%";  // Ajouter '%' pour une recherche partielle
    } else if (searchCriterion == "pathologie") {
        // Rechercher par Pathologie
        queryString = "SELECT id_vac, nom_vac, quantite, nom_labo, pathologie, date_exp FROM Vaccin WHERE pathologie LIKE :value";
        searchValue = "%" + searchValue + "%";  // Ajouter '%' pour une recherche partielle
    }

    query.prepare(queryString);
    query.bindValue(":value", searchValue);

    // Exécuter la requête
    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la recherche.");
        return;
    }

    // Effacer les anciennes données de la table avant d'afficher les nouveaux résultats
    ui->tableWidget->setRowCount(0);

    // Afficher les résultats dans le QTableWidget
    bool found = false;
    while (query.next()) {
        int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);

        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));  // id_vac
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));  // nom_vac
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(query.value(2).toString()));  // quantite
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(query.value(3).toString()));  // nom_labo
        ui->tableWidget->setItem(row, 4, new QTableWidgetItem(query.value(4).toString()));  // pathologie
        ui->tableWidget->setItem(row, 5, new QTableWidgetItem(query.value(5).toString()));  // date_exp
        found = true;
    }

    if (!found) {
        QMessageBox::information(this, "Résultat", "Aucun résultat trouvé pour cette recherche.");
    }
}

void MainWindowV::on_pushButton_18_clicked()
{
    // Récupérer le critère de tri sélectionné dans comboBox_3 (id ou date_exp)
    QString sortCriterion = ui->comboBox_3->currentText();  // Soit "id", soit "date_exp"

    // Vérifier que l'utilisateur a bien sélectionné un critère
    if (sortCriterion.isEmpty()) {
        QMessageBox::critical(this, "Erreur", "Veuillez sélectionner un critère de tri.");
        return;
    }

    // Récupérer l'ordre de tri sélectionné dans comboBox_2 (croissant ou décroissant)
    QString sortOrder = ui->comboBox_2->currentText();  // Soit "croissant", soit "décroissant"

    // Vérifier que l'utilisateur a bien sélectionné un ordre
    if (sortOrder.isEmpty()) {
        QMessageBox::critical(this, "Erreur", "Veuillez sélectionner l'ordre de tri.");
        return;
    }

    // Déterminer l'ordre de tri (ASC pour croissant, DESC pour décroissant)
    QString order = (sortOrder == "croissant") ? "ASC" : "DESC";

    // Construire la requête SQL en fonction du critère et de l'ordre de tri
    QString queryString;
    if (sortCriterion == "id") {
        queryString = "SELECT id_vac, nom_vac, quantite, nom_labo, pathologie, date_exp FROM Vaccin ORDER BY id_vac " + order;
    } else if (sortCriterion == "date_exp") {
        queryString = "SELECT id_vac, nom_vac, quantite, nom_labo, pathologie, date_exp FROM Vaccin ORDER BY date_exp " + order;
    } else {
        QMessageBox::critical(this, "Erreur", "Critère de tri invalide.");
        return;
    }

    // Afficher la requête SQL pour débogage (optionnel)
    qDebug() << "Requête SQL : " << queryString;

    // Exécuter la requête SQL pour récupérer les données triées
    QSqlQuery query(queryString);

    // Effacer les anciennes données de la table avant de les mettre à jour avec les nouvelles données
    ui->tableWidget->setRowCount(0);  // Réinitialise le tableau

    // Afficher les résultats triés dans le QTableWidget
    bool found = false;  // Variable pour vérifier si des résultats ont été trouvés
    while (query.next()) {
        int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);  // Ajouter une nouvelle ligne dans le tableau

        // Insérer les valeurs récupérées dans les cellules du tableau
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));  // id_vac
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));  // nom_vac
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(query.value(2).toString()));  // quantite
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(query.value(3).toString()));  // nom_labo
        ui->tableWidget->setItem(row, 4, new QTableWidgetItem(query.value(4).toString()));  // pathologie
        ui->tableWidget->setItem(row, 5, new QTableWidgetItem(query.value(5).toString()));  // date_exp

        found = true;  // Des résultats ont été trouvés
    }

    // Si aucun résultat n'a été trouvé, afficher un message
    if (!found) {
        QMessageBox::information(this, "Résultat", "Aucun vaccin trouvé selon les critères de tri.");
    }
}


void MainWindowV::afficherStatistiqueVaccins()
{
    QSqlQuery query;
    query.prepare("SELECT nom_vac, quantite FROM vaccin");

    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Impossible de générer les statistiques.");
        return;
    }

    QPieSeries *series = new QPieSeries();  // Pie chart series
    bool hasData = false;
    int totalVaccins = 0;

    while (query.next()) {
        totalVaccins += query.value(1).toInt();
    }

    query.first();  // Move to the first row
    while (query.isValid()) {
        QString nomVac = query.value(0).toString();
        int quantite = query.value(1).toInt();

        if (!nomVac.isEmpty() && quantite > 0) {
            QPieSlice *slice = series->append(nomVac, quantite);
            hasData = true;

            double percentage = (double)quantite / totalVaccins * 100;
            slice->setLabel(QString("%1: %2%").arg(nomVac).arg(percentage, 0, 'f', 1));
        }
        query.next();  // Move to the next row
    }

    if (!hasData) {
        QMessageBox::information(this, "Aucune donnée", "Aucun vaccin trouvé pour afficher les statistiques.");
        return;
    }

    // Create and show the pie chart
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Répartition des Vaccins par Quantité");

    series->setLabelsVisible(true);
    chart->legend()->setVisible(true);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Clear previous content in widgetStats
    QLayout *layout = ui->widget->layout();
    if (!layout) {
        layout = new QVBoxLayout(ui->widget);
        ui->widget->setLayout(layout);
    }

    // Remove old widgets
    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        delete item->widget();
        delete item;
    }

    layout->addWidget(chartView);  // Add the pie chart view to widgetStats
}




void MainWindowV::on_pushButton_19_clicked()
{
    afficherStatistiqueVaccins();
}


void MainWindowV::exportPdfVaccins()
{
    // Ouvrir une boîte de dialogue pour sélectionner le chemin de sauvegarde du PDF
    QString fileName = QFileDialog::getSaveFileName(nullptr, "Enregistrer le PDF", "", "PDF Files (.pdf);;All Files ()");
    if (fileName.isEmpty()) {
        return;
    }

    QPdfWriter pdfWriter(fileName);
    pdfWriter.setPageSize(QPageSize(QPageSize::A4));
    pdfWriter.setPageMargins(QMarginsF(20, 20, 20, 20)); // Marges

    QPainter painter(&pdfWriter);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setFont(QFont("Arial", 10));

    int startX = 0, startY = 200;
    int colWidth[] = {1000, 1750, 1750, 1750, 1750}; // Largeur des colonnes
    int rowHeight = 900; // Hauteur des lignes ajustée

    // Titre du document
    painter.setFont(QFont("Arial", 16, QFont::Bold));
    painter.drawText(200, startY, "Liste des Vaccins");
    startY += 400;

    // En-têtes du tableau
    painter.setFont(QFont("Arial", 12, QFont::Bold));
    QStringList headers = {"ID_Vac", "Nom_Vac", "Quantité", "Nom_Labo", "Pathologie"};
    int x = startX;

    // Dessiner les en-têtes des colonnes avec bordures
    for (int i = 0; i < headers.size(); ++i) {
        painter.drawRect(x, startY, colWidth[i], rowHeight);  // Dessiner bordure de la cellule
        painter.drawText(x + 100, startY + 800, headers[i]);   // Dessiner texte dans la cellule
        x += colWidth[i];
    }

    startY += rowHeight;  // Passer à la première ligne des données
    painter.setFont(QFont("Arial", 10)); // Police pour les données

    // Récupérer les données des vaccins à partir de la base de données
    QSqlQuery query("SELECT id_vac, nom_vac, quantite, nom_labo, pathologie FROM vaccin");
    while (query.next()) {
        x = startX;
        for (int i = 0; i < headers.size(); ++i) {
            painter.drawRect(x, startY, colWidth[i], rowHeight); // Dessiner chaque cellule
            painter.drawText(x + 100, startY + 400, query.value(i).toString());  // Insérer la valeur dans la cellule
            x += colWidth[i];
        }
        startY += rowHeight;  // Passer à la ligne suivante
    }

    // Fin du dessin
    painter.end();
    QMessageBox::information(nullptr, "Exportation réussie", "Le fichier PDF a été généré avec succès.");
}


void MainWindowV::on_pushButton_10_clicked()
{
    exportPdfVaccins();
}





MainWindowV::MainWindowV(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowV)
{
    ui->setupUi(this);
    // Connect button click to the slot
    connect(ui->rechercherChatBot, &QPushButton::clicked, this, &MainWindowV::on_rechercherChatBot_clicked);
    chargerHistorique();

}



// Slot to handle user input and output
void MainWindowV::on_rechercherChatBot_clicked()
{
    QString userInput = ui->lineEditChatBot->text();
    QString prompt = "Please provide a clear, concise, and minimalist answer. Do not provide excessive details. Answer in a simple and straightforward manner.\n";
    prompt += "User: " + userInput;

    // If the chatbot isn't started yet, initialize and start the process
    if (!chatbotStarted) {
        chatbotProcess = new QProcess(this);

        // Define the chatbot executable and the model path
        QString program = "C:/vaccin projetc++/llama.cpp/build/bin/Release/llama-simple-chat.exe";
        QString modelPath = "C:/vaccin projetc++/llama.cpp/models/mistral-7b-instruct-v0.1.Q4_0.gguf";

        // Set up arguments to pass to the process
        QStringList arguments;
        arguments << "-m" << modelPath;

        // Start the process
        chatbotProcess->setProcessChannelMode(QProcess::MergedChannels);  // Combine stdout and stderr
        chatbotProcess->start(program, arguments);

        // Connect to the process output (Standard Output)
        connect(chatbotProcess, &QProcess::readyReadStandardOutput, this, &MainWindowV::readChatBotOutput);

        // Connect to the process error output (Standard Error)
        connect(chatbotProcess, &QProcess::readyReadStandardError, [=]() {
            QString errorOutput = chatbotProcess->readAllStandardError();
            qDebug() << "Erreur chatbot:" << errorOutput;
        });

        chatbotStarted = true; // Mark the chatbot as started
    }

    // Send user input to the chatbot (via stdin)
    if (chatbotProcess && chatbotProcess->state() == QProcess::Running) {
        chatbotProcess->write(userInput.toUtf8() + "\n");
    } else {
        ui->textEditReponse->append("Erreur : chatbot non démarré.");
    }
}
void MainWindowV::readChatBotOutput()
{
    QByteArray output = chatbotProcess->readAllStandardOutput();
    QString chunk = QString::fromUtf8(output);
    qDebug() << "Chatbot Output Chunk: " << chunk;

    // Ajouter au buffer (sans afficher tout de suite)
    accumulatedResponse += chunk;

    // Optionnel : détecter fin de réponse (à adapter selon ce que ton modèle fait)
    if (chunk.contains("\n")) { // ← Fin possible (ou tu peux tester un tag spécial comme "|end|")
        cleanAndDisplayResponse(accumulatedResponse);
        accumulatedResponse.clear(); // Réinitialiser pour la prochaine question
    }
}

void MainWindowV::cleanAndDisplayResponse(const QString &response)
{
    qDebug() << "Raw Response: " << response;

    QString cleanedResponse = response;

    // Step 1 to 8: Nettoyage comme tu avais déjà
    QRegularExpression cleanupRegex(R"(\x1B\[[0-9;]*m)");
    cleanedResponse.replace(cleanupRegex, "");

    cleanupRegex.setPattern(R"(\|start\||\|end\|)");
    cleanedResponse.replace(cleanupRegex, "");

    cleanupRegex.setPattern(R"(<\|im_start\|>|<\|im_end\|>)");
    cleanedResponse.replace(cleanupRegex, "");

    cleanupRegex.setPattern(R"(\buser\b|\bassistant\b)");
    cleanedResponse.replace(cleanupRegex, "");

    cleanupRegex.setPattern(R"(^>\s*)");
    cleanedResponse.replace(cleanupRegex, "");

    cleanupRegex.setPattern(R"(\r?\n)");
    cleanedResponse.replace(cleanupRegex, " ");

    cleanupRegex.setPattern(R"(\s{2,})");
    cleanedResponse.replace(cleanupRegex, " ");

    cleanedResponse = cleanedResponse.trimmed();

    // 🔴 Limiter à 300 mots
    QStringList words = cleanedResponse.split(" ", Qt::SkipEmptyParts);
    if (words.size() > 100) {
        words = words.mid(0, 100);
        cleanedResponse = words.join(" ") + " ";
    }

    // ✅ Vérifier s’il est déjà affiché (éviter la répétition)
    if (!cleanedResponse.isEmpty() &&
        !ui->textEditReponse->toPlainText().contains(cleanedResponse) &&
        cleanedResponse != " ") {

        // 🟡 Stocker dans l’historique si tu veux
        historiqueReponses.append(cleanedResponse);

        // 🟢 Ajouter au textEdit
        ui->textEditReponse->append("➤ " + cleanedResponse);  // Tu peux aussi ajouter une date ici si tu veux
        ui->textEditReponse->moveCursor(QTextCursor::End);
    }
    else if (cleanedResponse.isEmpty()) {
        ui->textEditReponse->append(" ");
    }
}










#include <QTimer>

void MainWindowV::on_recommander_clicked()
{
    QString idPatient = ui->idpatient->text().trimmed();
    if (idPatient.isEmpty()) {
        ui->resultat->setText("Veuillez entrer un ID patient.");
        return;
    }
    ui->resultat->clear();
    // Requête SQL pour récupérer les vaccins
    QSqlQuery query;
    query.prepare("SELECT NOM_VAC, DATE_RDV FROM RDV WHERE ID_PATIENT = :id_patient ORDER BY DATE_RDV ASC");
    query.bindValue(":id_patient", idPatient);

    QStringList historique;

    if (query.exec()) {
        while (query.next()) {
            QString nomVac = query.value("NOM_VAC").toString();
            QString dateVac = query.value("DATE_RDV").toDate().toString("yyyy-MM-dd");
            historique << "- " + nomVac + " : " + dateVac;
        }
    } else {
        ui->resultat->setText("Erreur lors de l'accès à la base de données.");
        return;
    }

    if (historique.isEmpty()) {
        ui->resultat->setText("Aucun vaccin trouvé pour ce patient.");
        return;
    }
    QString historiqueFormate;

    for (const QString &entry : historique) {
        historiqueFormate += entry + ", ";
    }
    historiqueFormate.chop(2); // retire la dernière virgule + espace

    QString prompt = "Pour un patient ayant déjà reçu les vaccins suivants : " + historiqueFormate +
                     ". Quels vaccins recommandez-vous à présent pour ce patient ? Répondez uniquement sous la forme : 'Les vaccins recommandés pour ce patient sont : [liste des vaccins]'.";


    prompt += historique.join("\n");
    prompt += "\n quels vaccins faut-il recommander maintenant ? Répondez uniquement sous la forme : 'Les vaccins recommandés pour ce patient sont : [liste des vaccins]'.";



    // Démarrer le chatbot si nécessaire
    if (!chatbotStarted) {
        chatbotProcess = new QProcess(this);
        QString program = "C:/vaccin projetc++/llama.cpp/build/bin/Release/llama-simple-chat.exe";
        QString modelPath = "C:/vaccin projetc++/llama.cpp/models/MedLlama-2-7B.q4_K_S.gguf";

        chatbotProcess->setProcessChannelMode(QProcess::MergedChannels);
        chatbotProcess->start(program, QStringList() << "-m" << modelPath);

        connect(chatbotProcess, &QProcess::readyReadStandardOutput, this, &MainWindowV::readRecommendationOutput);
        chatbotStarted = true;
    }

    // Envoyer le prompt au chatbot
    if (chatbotProcess && chatbotProcess->state() == QProcess::Running) {
        chatbotProcess->write(prompt.toUtf8() + "\n");
    } else {
        ui->resultat->setText("Erreur : le chatbot n’est pas en cours d'exécution.");
    }
}

















#include <QTimer>
void MainWindowV::readRecommendationOutput()
{
    QByteArray output = chatbotProcess->readAllStandardOutput();
    QString chunk = QString::fromUtf8(output);
    accumulatedRecommendation += chunk;

    if (!recommendationTimer) {
        recommendationTimer = new QTimer(this);
        recommendationTimer->setSingleShot(true);
        connect(recommendationTimer, &QTimer::timeout, this, [=]() {
            cleanAndDisplayRecommendation(accumulatedRecommendation);
            accumulatedRecommendation.clear();
        });
    }

    recommendationTimer->start(800);

    // Optionally handle end of message marker
    if (accumulatedRecommendation.contains("<|im_end|>")) {
        cleanAndDisplayRecommendation(accumulatedRecommendation);
        accumulatedRecommendation.clear();
        recommendationTimer->stop();
    }
}
void MainWindowV::cleanAndDisplayRecommendation(const QString &response)
{
    QString cleaned = response;
    QRegularExpression regex;

    // Remove ANSI escape codes
    regex.setPattern(R"(\x1B\[[0-9;]*m)");
    cleaned.replace(regex, "");

    // Remove special tags
    regex.setPattern(R"(<\|im_start\|>|<\|im_end\|>|\|start\||\|end\|)");
    cleaned.replace(regex, "");

    // Remove roles and extra symbols
    regex.setPattern(R"(\buser\b|\bassistant\b|^>\s*)");
    cleaned.replace(regex, "");

    // Normalize spacing and lines
    regex.setPattern(R"(\r?\n)");
    cleaned.replace(regex, " ");
    regex.setPattern(R"(\s{2,})");
    cleaned.replace(regex, " ");


    QRegularExpression vaccinsPattern(R"(Les vaccins recommandés pour ce patient sont\s*:\s*(.+))");
    QRegularExpressionMatch match = vaccinsPattern.match(cleaned);
    if (match.hasMatch()) {
        QString onlyRecommendation = match.captured(0); // ou captured(1) si tu veux juste la liste
        ui->resultat->setText(onlyRecommendation);
    }


    // Show it in your result widget (change as needed)
    if (!cleaned.isEmpty()) {
        ui->resultat->append(cleaned);
        ui->resultat->moveCursor(QTextCursor::End);
    } else {
        ui->resultat->append("Aucune recommandation trouvée.");
    }
}




void MainWindowV::on_recommander_3_clicked()
{
    ui->textEditReponse->clear();       // Nettoyer la zone de réponse du chatbot
    ui->lineEditChatBot->clear();       // Optionnel : effacer aussi l'entrée utilisateur
    accumulatedResponse.clear();        // Réinitialiser le buffer


}



void MainWindowV::on_recommander_2_clicked()
{
    // Nettoyer uniquement la zone d'affichage de la recommandation
    ui->resultat->clear();
    ui->idpatient->clear();


    // Réinitialiser la variable contenant la réponse accumulée
    accumulatedRecommendation.clear();

    // Arrêter le timer si actif (évite un affichage après effacement)
    if (recommendationTimer && recommendationTimer->isActive()) {
        recommendationTimer->stop();
    }
}


void MainWindowV::on_recommander_4_clicked()
{
    ui->textEditReponse->clear(); // Nettoyer la zone d'affichage

    if (historiqueReponses.isEmpty()) {
        ui->textEditReponse->append("Aucune tentative enregistrée.");
        return;
    }

    ui->textEditReponse->append("Historique des tentatives précédentes :\n");
    for (const QString &entry : historiqueReponses) {

        ui->textEditReponse->append(entry);
        ui->textEditReponse->append("\n");
    }

    ui->textEditReponse->moveCursor(QTextCursor::End);
}

void MainWindowV::sauvegarderHistorique()
{
    QFile file("historique.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (const QString &entry : historiqueReponses) {
            out << entry << "\n===\n"; // Séparateur simple entre les blocs
        }
        file.close();
    }
}
void MainWindowV::chargerHistorique()
{
    QFile file("historique.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        QString bloc;
        while (!in.atEnd()) {
            QString line = in.readLine();
            if (line == "===") {
                historiqueReponses.append(bloc.trimmed());
                bloc.clear();
            } else {
                bloc += line + "\n";
            }
        }
        if (!bloc.isEmpty()) {
            historiqueReponses.append(bloc.trimmed());
        }
        file.close();
    }
}
void MainWindowV::on_pushButton_7_clicked() {
    // Add logic for "Gestion ressources"
    qDebug() << "Gestion ressources clicked";
}


