#include "rdv.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QRegularExpression>
#include <QDebug>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QSqlRecord>

// Constructor with all fields
Rdv::Rdv(QString heure, QString nom_vac, QString nom, QString prenom, QDate date_rdv)
{
    this->heure = heure;
    this->nom_vac = nom_vac;
    this->nom = nom;
    this->prenom = prenom;
    this->date_rdv = date_rdv;
}

// Getters
QString Rdv::getHeure() const { return heure; }
QString Rdv::getNomVac() const { return nom_vac; }
QString Rdv::getNom() const { return nom; }
QString Rdv::getPrenom() const { return prenom; }
QDate Rdv::getDateRdv() const { return date_rdv; }

// Setters
void Rdv::setHeure(const QString &heure) { this->heure = heure; }
void Rdv::setNomVac(const QString &nom_vac) { this->nom_vac = nom_vac; }
void Rdv::setNom(const QString &nom) { this->nom = nom; }
void Rdv::setPrenom(const QString &prenom) { this->prenom = prenom; }
void Rdv::setDateRdv(const QDate &date) { this->date_rdv = date; }
bool Rdv::verif()
{
    QString errorMessages; // Variable to collect all error messages

    // ---- Empty field checks ----
    if (heure.trimmed().isEmpty()) {
        errorMessages += "L'heure ne peut pas être vide.\n";
    }
    if (nom_vac.trimmed().isEmpty()) {
        errorMessages += "Le nom du vaccin ne peut pas être vide.\n";
    }
    if (nom.trimmed().isEmpty()) {
        errorMessages += "Le nom ne peut pas être vide.\n";
    }
    if (prenom.trimmed().isEmpty()) {
        errorMessages += "Le prénom ne peut pas être vide.\n";
    }

    // ---- Heure format ----
    QRegularExpression timeRegex("^([01]?[0-9]|2[0-3]):[0-5][0-9]$");
    if (!timeRegex.match(heure).hasMatch()) {
        errorMessages += "Format de l'heure invalide. Utilisez HH:MM.\n";
    }

    // ---- Heure range (08:00 to 22:00) ----
    QStringList timeParts = heure.split(":");
    int hour = timeParts[0].toInt();
    int minute = timeParts[1].toInt();
    if (hour < 8 || hour > 22 || (hour == 22 && minute > 0)) {
        errorMessages += "L'heure doit être entre 08:00 et 22:00.\n";
    }

    // ---- Nom/prénom characters ----
    QRegularExpression nameRegex("^[A-Za-zÀ-ÖØ-öø-ÿ ]+$");
    if (!nameRegex.match(nom).hasMatch()) {
        errorMessages += "Le nom est invalide. Lettres et espaces uniquement.\n";
    }
    if (!nameRegex.match(prenom).hasMatch()) {
        errorMessages += "Le prénom est invalide. Lettres et espaces uniquement.\n";
    }

    // ---- Date in future ----
    if (date_rdv < QDate::currentDate()) {
        errorMessages += "La date du rendez-vous ne peut pas être dans le passé.\n";
    }

    // ---- Check vaccine exists ----
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM vaccins WHERE nom_vac = :nom_vac");
    query.bindValue(":nom_vac", nom_vac);
    if (!query.exec() || !query.next() || query.value(0).toInt() == 0) {
        errorMessages += "Le vaccin sélectionné n'existe pas.\n";
    }

    // ---- If there are any errors, show them in one message box ----
    if (!errorMessages.isEmpty()) {
        QMessageBox::critical(nullptr, "Erreurs", errorMessages);
        return false;
    }

    // ---- All good ----
    return true;
}

// Ajouter (FIXED)
bool Rdv::ajouter()
{
    if (!verif()) return false;

    QSqlQuery query;
    query.prepare("INSERT INTO RDV (HEURE, NOM_VAC, NOM, PRENOM, DATE_RDV) "
                  "VALUES (:heure, :nom_vac, :nom, :prenom, :date_rdv)");

    query.bindValue(":heure", getHeure());
    query.bindValue(":nom_vac", getNomVac());
    query.bindValue(":nom", getNom());
    query.bindValue(":prenom", getPrenom());
    query.bindValue(":date_rdv", getDateRdv()); // ✅ Directly bind QDate

    if (!query.exec()) {
        qDebug() << "Erreur SQL insert: " << query.lastError().text();
        return false;
    }

    return true;
}

// Afficher
QSqlQueryModel *Rdv::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT ID_RDV, HEURE, NOM_VAC, NOM, PRENOM, DATE_RDV FROM RDV");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_RDV"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("HEURE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM_VAC"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("DATE_RDV"));

    return model;
}

// Supprimer
bool Rdv::supprimer(int id_rdv)
{
    QSqlQuery query;
    query.prepare("DELETE FROM RDV WHERE ID_RDV = :id_rdv");
    query.bindValue(":id_rdv", id_rdv);
    return query.exec();
}

// Trier
QSqlQueryModel* Rdv::trier(QString column, QString order)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QString queryStr = "SELECT * FROM RDV ORDER BY " + column + " " + order;
    model->setQuery(queryStr);
    return model;
}

// Modifier (FIXED)
bool Rdv::modifier(int id_rdv)
{
    if (!verif()) return false;

    QSqlQuery query;
    query.prepare("UPDATE RDV SET HEURE = :heure, NOM_VAC = :nom_vac, NOM = :nom, "
                  "PRENOM = :prenom, DATE_RDV = :date_rdv WHERE ID_RDV = :id_rdv");

    query.bindValue(":heure", getHeure());
    query.bindValue(":nom_vac", getNomVac());
    query.bindValue(":nom", getNom());
    query.bindValue(":prenom", getPrenom());
    query.bindValue(":date_rdv", getDateRdv()); // ✅ Directly bind QDate
    query.bindValue(":id_rdv", id_rdv);

    if (!query.exec()) {
        qDebug() << "Erreur SQL update: " << query.lastError().text();
        return false;
    }

    return true;
}

// Load by ID
bool Rdv::loadById(int id_rdv)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM RDV WHERE ID_RDV = :id_rdv");
    query.bindValue(":id_rdv", id_rdv);

    if (query.exec() && query.next()) {
        setHeure(query.value("HEURE").toString());
        setNomVac(query.value("NOM_VAC").toString());
        setNom(query.value("NOM").toString());
        setPrenom(query.value("PRENOM").toString());
        setDateRdv(query.value("DATE_RDV").toDate());
        return true;
    }
    return false;
}
QStandardItemModel* Rdv::afficherListeAttenteAvecStatut()
{
    QSqlQuery query;
    QStandardItemModel* model = new QStandardItemModel();

    // Set column headers
    model->setHorizontalHeaderLabels({"ID_RDV", "HEURE", "NOM_VAC", "NOM", "PRENOM", "DATE_RDV", "STATUT"});

    // Query RDVs ordered by DATE_RDV
    if (!query.exec("SELECT ID_RDV, HEURE, NOM_VAC, NOM, PRENOM, DATE_RDV FROM RDV ORDER BY DATE_RDV ASC")) {
        qDebug() << "Erreur requête RDV:" << query.lastError().text();
        return model;
    }

    int index = 0;
    while (query.next()) {
        QList<QStandardItem*> row;

        for (int i = 0; i < 6; ++i) {
            row << new QStandardItem(query.value(i).toString());
        }

        // Set temporary STATUT: first 3 = Confirmé, rest = Attente
        QString statut = (index < 3) ? "Confirmé" : "Attente";
        row << new QStandardItem(statut);

        model->appendRow(row);
        index++;
    }

    return model;
}
