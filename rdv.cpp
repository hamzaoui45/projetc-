#include "rdv.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QRegularExpression>
#include <QDebug>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QSqlRecord>

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
    QString errorMessages;


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


    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM vaccins WHERE nom_vac = :nom_vac");
    query.bindValue(":nom_vac", nom_vac);
    if (!query.exec() || !query.next() || query.value(0).toInt() == 0) {
        errorMessages += "Le vaccin sélectionné n'existe pas.\n";
    }


    if (!errorMessages.isEmpty()) {
        QMessageBox::critical(nullptr, "Erreurs", errorMessages);
        return false;
    }


    return true;
}


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
    query.bindValue(":date_rdv", getDateRdv());

    if (!query.exec()) {
        qDebug() << "Erreur SQL insert: " << query.lastError().text();
        return false;
    }

    return true;
}


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


bool Rdv::supprimer(int id_rdv)
{
    QSqlQuery query;
    query.prepare("DELETE FROM RDV WHERE ID_RDV = :id_rdv");
    query.bindValue(":id_rdv", id_rdv);
    return query.exec();
}


QSqlQueryModel* Rdv::trier(QString column, QString order)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QString queryStr = "SELECT * FROM RDV ORDER BY " + column + " " + order;
    model->setQuery(queryStr);
    return model;
}


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
    query.bindValue(":date_rdv", getDateRdv());
    query.bindValue(":id_rdv", id_rdv);

    if (!query.exec()) {
        qDebug() << "Erreur SQL update: " << query.lastError().text();
        return false;
    }

    return true;
}

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
    model->setHorizontalHeaderLabels({"ID_RDV", "HEURE", "NOM_VAC", "NOM", "PRENOM", "DATE_RDV", "STATUT"});

    // Execute the query to get all RDVs ordered by date and time
    if (!query.exec("SELECT ID_RDV, HEURE, NOM_VAC, NOM, PRENOM, DATE_RDV FROM RDV ORDER BY DATE_RDV ASC, HEURE ASC")) {
        qDebug() << "Query error:" << query.lastError().text();
        return model;
    }

    QDate today = QDate::currentDate();
    QTime now = QTime::currentTime();

    QMap<QDate, int> confirmedCountPerDate;

    // First pass: Counting confirmed RDVs per date
    while (query.next()) {
        QDate rdvDate = query.value("DATE_RDV").toDate();
        confirmedCountPerDate[rdvDate]++;
    }

    query.first();
    query.previous();  // Reset query position for second pass

    // Second pass: Add rows to model and calculate status
    while (query.next()) {
        QList<QStandardItem*> row;

        QString id = query.value("ID_RDV").toString();
        QString heure = query.value("HEURE").toString();
        QString nom_vac = query.value("NOM_VAC").toString();
        QString nom = query.value("NOM").toString();
        QString prenom = query.value("PRENOM").toString();
        QDate date_rdv = query.value("DATE_RDV").toDate();
        QTime heure_rdv = QTime::fromString(heure, "hh:mm");

        // Check if RDV is expired, and if so, postpone it
        if (date_rdv < today || (date_rdv == today && heure_rdv < now)) {
            QDate newDate = today.addDays(1);
            while (confirmedCountPerDate.value(newDate, 0) >= 3) {
                newDate = newDate.addDays(1);
            }

            // Update the RDV's date and time to the next available slot
            QSqlQuery updateQuery;
            updateQuery.prepare("UPDATE RDV SET DATE_RDV = :new_date, HEURE = :new_heure WHERE ID_RDV = :id");
            updateQuery.bindValue(":new_date", newDate);
            updateQuery.bindValue(":new_heure", "09:00");  // Or you can choose another free time
            updateQuery.bindValue(":id", id);
            if (updateQuery.exec()) {
                QMessageBox::information(nullptr, "RDV Postponed",
                                         QString("RDV for %1 %2 has been postponed to %3 at 09:00")
                                             .arg(nom).arg(prenom).arg(newDate.toString("yyyy-MM-dd")));
            }
            confirmedCountPerDate[newDate]++;  // Increment for the new date
            continue;  // Skip adding this RDV as it has been postponed
        }

        // Continue to check if RDV is confirmed or in waiting list
        row << new QStandardItem(id)
            << new QStandardItem(heure)
            << new QStandardItem(nom_vac)
            << new QStandardItem(nom)
            << new QStandardItem(prenom)
            << new QStandardItem(date_rdv.toString("yyyy-MM-dd"));

        QString statut = "Attente";  // Default status is "Attente"

        // RDV is confirmed if it's today or in the future
        if (date_rdv == today || (date_rdv == today && heure_rdv >= now)) {
            statut = "Confirmé";
        }

        // Add the status to the row
        row << new QStandardItem(statut);

        // Append the row to the model
        model->appendRow(row);
    }

    return model;
}
