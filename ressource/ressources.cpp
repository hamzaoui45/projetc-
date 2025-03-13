#include "ressources.h"
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QPdfWriter>
#include <QPainter>
#include <QFileDialog>
#include <QtCharts/QPieSeries>


Ressources::Ressources() : nom(""), qte(0), prix(0.0), etat("") {}

Ressources::Ressources(QString nom, int qte, float prix, QString etat)
{
    this->nom = nom;
    this->qte = qte;
    this->prix = prix;
    this->etat = etat;
}

// Getters
QString Ressources::getNom() const { return nom; }
int Ressources::getQte() const { return qte; }
float Ressources::getPrix() const { return prix; }
QString Ressources::getEtat() const { return etat; }

// Setters
void Ressources::setNom(const QString &nom) { this->nom = nom; }
void Ressources::setQte(int qte) { this->qte = qte; }
void Ressources::setPrix(float prix) { this->prix = prix; }
void Ressources::setEtat(const QString &etat) { this->etat = etat; }

//ajouter une ressource
bool Ressources::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO RESSOURCES (NOM, QUANTITE, PRIX, ETAT) "
                  "VALUES (:nom, :quantite, :prix, :etat)");
    query.bindValue(":nom", nom);
    query.bindValue(":quantite", qte);
    query.bindValue(":prix", prix);
    query.bindValue(":etat", etat);

    if (query.exec()) {
        // Succès

        //QMessageBox::information(nullptr, "Succès", "La ressource a été ajoutée avec succès.");
        return true;
    } else {
        // Échec
        QMessageBox::critical(nullptr, "Erreur", "Erreur lors de l'ajout de la ressource : " + query.lastError().text());
        return false;
    }
}
//recherche par reference
bool Ressources::chercher(int reference)
{
    QSqlQuery query;
    query.prepare("SELECT NOM, QUANTITE, PRIX, ETAT FROM RESSOURCES WHERE REFERENCE = :reference");
    query.bindValue(":reference", reference);

    if (query.exec() && query.next()) {
        // Récupérer les valeurs depuis la base de données
        nom = query.value(0).toString();
        qte = query.value(1).toInt();
        prix = query.value(2).toDouble();
        etat = query.value(3).toString();

        return true;
    }

    return false;
}
//modifier ressource
bool Ressources::modifier(int reference)
{
    QSqlQuery query;
    query.prepare("UPDATE RESSOURCES SET NOM = :nom, QUANTITE = :quantite, PRIX = :prix, ETAT = :etat "
                  "WHERE REFERENCE = :reference");
    query.bindValue(":nom", nom);
    query.bindValue(":quantite", qte);
    query.bindValue(":prix", prix);
    query.bindValue(":etat", etat);
    query.bindValue(":reference", reference);

    if (query.exec()) {
        QMessageBox::information(nullptr, "Succès", "La ressource a été modifiée avec succès.");
        return true;
    } else {
        QMessageBox::critical(nullptr, "Erreur", "Erreur lors de la modification de la ressource : " + query.lastError().text());
        return false;
    }
}

//affichage
QSqlQueryModel* Ressources::afficher()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT REFERENCE, NOM, QUANTITE, PRIX, ETAT FROM RESSOURCES");

    // Vérifier si la requête a réussi
    if (model->lastError().isValid())
    {
        qDebug() << "Erreur lors de l'affichage des ressources :" << model->lastError().text();
        return nullptr;
    }

    // Définir les en-têtes des colonnes
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Référence"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Quantité"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Prix"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("État"));

    return model; // Retourner le modèle
}
//suppression
bool Ressources::supprimer(int reference)
{
    QSqlQuery query;
    query.prepare("DELETE FROM RESSOURCES WHERE REFERENCE = :reference");
    query.bindValue(":reference", reference);

    if (query.exec()) {
        QMessageBox::information(nullptr, "Succès", "La ressource a été supprimée avec succès.");
        return true;
    } else {
        QMessageBox::critical(nullptr, "Erreur", "Erreur lors de la suppression de la ressource : " + query.lastError().text());
        return false;
    }
}
//tri
QSqlQueryModel* Ressources::trier(QString critere, QString ordre)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QString queryStr = "SELECT * FROM RESSOURCES ORDER BY " + critere + " " + ordre;
    model->setQuery(queryStr);

    if (model->lastError().isValid())
    {
        qDebug() << "Erreur lors du tri des ressources :" << model->lastError().text();
        return nullptr;
    }

    return model;
}
//metier recherche
QSqlQueryModel* Ressources::rechercher(QString valeur, QString critere)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;

    // Recherche par référence (valeur numérique)
    if (critere == "REFERENCE") {
        query.prepare("SELECT * FROM RESSOURCES WHERE REFERENCE = :valeur");
        query.bindValue(":valeur", valeur.toInt());
    }
    // Recherche par nom (valeur texte)
    else if (critere == "NOM") {
        query.prepare("SELECT * FROM RESSOURCES WHERE NOM LIKE :valeur");
        query.bindValue(":valeur", "%" + valeur + "%");
    }

    if (query.exec()) {

        model->setQuery(std::move(query));

    } else {
        qDebug() << "Erreur lors de la recherche :" << query.lastError().text();
    }

    return model;
}

//export pdf
void Ressources::export_pdf() const
{
    QString fileName = QFileDialog::getSaveFileName(nullptr, "Enregistrer le PDF", "", "PDF Files (*.pdf);;All Files (*)");
    if (fileName.isEmpty())
        return;

    QPdfWriter pdfWriter(fileName);
    pdfWriter.setPageSize(QPageSize(QPageSize::A4));
    pdfWriter.setPageMargins(QMarginsF(20, 20, 20, 20)); // Marges pages

    QPainter painter(&pdfWriter);
    painter.setRenderHint(QPainter::Antialiasing, true);

    int startX = 0, startY = 200;  // Position départ du tableau
    int colWidth[] = {1000, 1750, 1750, 1750, 1750}; // Largeur des colonnes
    int rowHeight = 900; // Hauteur des lignes ajustée

    // Titre du document
    painter.setFont(QFont("Arial", 16, QFont::Bold));
    painter.drawText(200, startY, "Liste des Ressources");
    startY += 400; // Espacement après le titre

    // En-têtes du tableau
    painter.setFont(QFont("Arial", 12, QFont::Bold));

    QStringList headers = {"Réf", "Nom", "Quantité", "Prix", "État"};
    int x = startX;

    // Dessiner les en-têtes des colonnes avec bordures
    for (int i = 0; i < headers.size(); ++i)
    {
        painter.drawRect(x, startY, colWidth[i], rowHeight); // Bordure
        painter.drawText(x + 400, startY + 800, headers[i]);   // Texte avec ajustement de position
        x += colWidth[i];
    }

    startY += rowHeight; // Passer à la première ligne des données

    painter.setFont(QFont("Arial", 10)); // Police normale pour les données

    QSqlQuery query("SELECT * FROM RESSOURCES");
    while (query.next())
    {
        x = startX;
        for (int i = 0; i < headers.size(); ++i)
        {
            painter.drawRect(x, startY, colWidth[i], rowHeight); // Dessiner la cellule
            painter.drawText(x + 100, startY + 400, query.value(i).toString()); // Insérer la valeur avec ajustement de position
            x += colWidth[i];
        }
        startY += rowHeight; // Passer à la ligne suivante
    }

    painter.end();
    QMessageBox::information(nullptr, "Exportation réussie", "Le fichier PDF a été généré avec succès.");
}
//statistiques


// Méthode pour obtenir un QPieSeries des statistiques des ressources
QPieSeries* Ressources::getStatistiques()
{
    // Requête pour compter les ressources disponibles
    QSqlQuery queryDispo("SELECT COUNT(*) FROM RESSOURCES WHERE etat = 'Disponible'");
    int countDispo = queryDispo.next() ? queryDispo.value(0).toInt() : 0;

    // Requête pour compter les ressources hors stock
    QSqlQuery queryHorsStock("SELECT COUNT(*) FROM RESSOURCES WHERE etat = 'Hors stock'");
    int countHorsStock = queryHorsStock.next() ? queryHorsStock.value(0).toInt() : 0;

    // Créer un QPieSeries
    QPieSeries *series = new QPieSeries();

    // Ajouter les données au diagramme circulaire
    if (countDispo > 0) {
        series->append("Disponible", countDispo);
    }
    if (countHorsStock > 0) {
        series->append("Hors stock", countHorsStock);
    }

    //Personnalisation diagramme
    for (QPieSlice *slice : series->slices()) {
        slice->setLabelVisible(true); // Afficher les étiquettes
        slice->setLabelColor(Qt::black); // Couleur des étiquettes
    }

    return series;
}
