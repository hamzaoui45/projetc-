#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ressources.h"
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

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Ressources res;
    ui->tableView->setModel(res.afficher());
    ui->tableView->resizeColumnsToContents(); // Ajuste la largeur des colonnes selon le contenu
    ui->tableView->horizontalHeader()->setStretchLastSection(true); // Étire la dernière colonne




    // MAX-MIN qte
    ui->qteSpinBox->setMaximum(9999);
    ui->qteSpinBox->setMinimum(0);
    // max-min prix
    ui->PrixSpinbox->setMaximum(9999);
    ui->PrixSpinbox->setMinimum(0);


}

MainWindow::~MainWindow()
{
    delete ui;
}


//button valider ajout
void MainWindow::on_valider_ajout_clicked()
{
    // Récupérer les données saisies dans l'interface
    QString nom = ui->nom->text().trimmed(); // Nom de la ressource (supprimer les espaces inutiles)
    int qte = ui->qteSpinBox->value();      // Quantité
    double prix = ui->PrixSpinbox->value(); // Prix
    QString etat;

    // Contrôle de saisie pour le nom
    if (nom.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Le champ 'Nom' ne peut pas être vide.");
        return;
    }
    //caracteres speciaux
    QRegularExpression regex("^[a-zA-Z0-9]+$"); // Autorise les lettres, chiffres, espaces et lettres accentuées
    if (!regex.match(nom).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "Le champ 'Nom' ne peut contenir que des lettres, des chiffres et des espaces.");
        return;
    }

    // Contrôle de saisie pour la quantité
    if (qte <= 0) {
        QMessageBox::warning(this, "Erreur", "La quantité doit être supérieure à 0.");
        return;
    }
    if (qte > 1000) { // Limiter la quantité à une valeur raisonnable
        QMessageBox::warning(this, "Erreur", "La quantité ne peut pas dépasser 10 000.");
        return;
    }

    // Contrôle de saisie pour le prix
    if (prix <= 0) {
        QMessageBox::warning(this, "Erreur", "Le prix doit être supérieur à 0.");
        return;
    }
    if (prix > 1000000) { // Limiter le prix à une valeur raisonnable
        QMessageBox::warning(this, "Erreur", "Le prix ne peut pas dépasser 1 000 000.");
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
void MainWindow::on_retour_ajout_clicked()
{
    ui->nom->clear();
    ui->qteSpinBox->setValue(0);
    ui->PrixSpinbox->setValue(0.0);
    ui->dispo->setChecked(false);
    ui->hstock->setChecked(false);
    ui->tableView->setModel(res.afficher());
}
//recuperer donnees selon REF
void MainWindow::on_recherche_modif_clicked()
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
void MainWindow::on_pushButton_21_clicked()
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
    QRegularExpression regex("^[a-zA-Z0-9]+$"); // Autorise les lettres, chiffres, espaces et lettres accentuées
    if (!regex.match(nom).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "Le champ 'Nom' ne peut contenir que des lettres, des chiffres et des espaces.");
        return;
    }

    // Contrôle de saisie pour la quantité
    if (quantite <= 0) {
        QMessageBox::warning(this, "Erreur", "La quantité doit être supérieure à 0.");
        return;
    }
    if (quantite > 1000) { // Limiter la quantité à une valeur raisonnable
        QMessageBox::warning(this, "Erreur", "La quantité ne peut pas dépasser 10 000.");
        return;
    }

    // Contrôle de saisie pour le prix
    if (prix <= 0) {
        QMessageBox::warning(this, "Erreur", "Le prix doit être supérieur à 0.");
        return;
    }
    if (prix > 1000000) { // Limiter le prix à une valeur raisonnable
        QMessageBox::warning(this, "Erreur", "Le prix ne peut pas dépasser 1 000 000.");
        return;
    }

    if (ui->dispom->isChecked()) {
        etat = "Disponible";
    } else if (ui->horsstockm->isChecked()) {
        etat = "Hors stock";
    } else {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner un état.");
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
void MainWindow::on_supprimer_clicked()
{
    // Récupérer la référence de la ressource à supprimer
    int reference = ui->suppref->text().toInt();  // Si tu récupères la référence à partir d'un QLineEdit

    // Vérifier si la référence est valide
    if (reference <= 0) {
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
    void MainWindow::on_trier_clicked()
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
    void MainWindow::on_Rechercher_clicked()
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
    void MainWindow::afficherStatistiques()
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
    void MainWindow::on_export_pdf_clicked()
    {
        res.export_pdf();

    }
    //afficher stat
    void MainWindow::on_pushButton_11_clicked()
    {
        afficherStatistiques();
    }
    //button refresh
    void MainWindow::on_pushButton_12_clicked()
    {
         ui->tableView->setModel(res.afficher());
    }

