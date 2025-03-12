#include "rdv.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QVariant>
#include <QDebug>
#include <QSqlError>

// Constructor
Rdv::Rdv(QString heure, QString nom_vac, QString nom, QString prenom)
{
    this->heure = heure;
    this->nom_vac = nom_vac;
    this->nom = nom;
    this->prenom = prenom;
}

// Getters
QString Rdv::getHeure() const { return heure; }
QString Rdv::getNomVac() const { return nom_vac; }
QString Rdv::getNom() const { return nom; }
QString Rdv::getPrenom() const { return prenom; }

// Setters
void Rdv::setHeure(const QString &heure) { this->heure = heure; }
void Rdv::setNomVac(const QString &nom_vac) { this->nom_vac = nom_vac; }
void Rdv::setNom(const QString &nom) { this->nom = nom; }
void Rdv::setPrenom(const QString &prenom) { this->prenom = prenom; }


bool Rdv::ajouter()
{
    QSqlQuery query;

    query.prepare("INSERT INTO RDV (HEURE, NOM_VAC, NOM, PRENOM) VALUES (:heure, :nom_vac, :nom, :prenom)");

    query.bindValue(":heure", getHeure());
    query.bindValue(":nom_vac", getNomVac());
    query.bindValue(":nom", getNom());
    query.bindValue(":prenom", getPrenom());

    qDebug() << " Executing Query: " << query.executedQuery();
    qDebug() << "HEURE:" << getHeure();
    qDebug() << "NOM_VAC:" << getNomVac();
    qDebug() << "NOM:" << getNom();
    qDebug() << "PRENOM:" << getPrenom();

    if (!query.exec()) {
        qDebug() << " SQL Insert Error:" << query.lastError().text();
        return false;
    }

    qDebug() << " Appointment added successfully!";
    return true;
}
QSqlQueryModel *Rdv::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    model->setQuery("SELECT ID_RDV, HEURE, NOM_VAC, NOM, PRENOM FROM RDV");

    if (model->lastError().isValid()) {
        qDebug() << "SQL Error: " << model->lastError().text();
        return nullptr;
    }

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_RDV"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("HEURE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM_VAC"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("PRENOM"));

    return model;
}
bool Rdv::supprimer(int id_rdv)
{
    QSqlQuery query;
    query.prepare("DELETE FROM RDV WHERE ID_RDV = :id_rdv");
    query.bindValue(":id_rdv", id_rdv);

    if (!query.exec()) {
        qDebug() << "Error deleting record:" << query.lastError().text();
        return false;
    }

    qDebug() << "Record with ID_RDV" << id_rdv << "deleted successfully!";
    return true;
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
    QSqlQuery query;

    query.prepare("UPDATE RDV SET HEURE = :heure, NOM_VAC = :nom_vac, NOM = :nom, PRENOM = :prenom WHERE ID_RDV = :id_rdv");

    query.bindValue(":heure", getHeure());
    query.bindValue(":nom_vac", getNomVac());
    query.bindValue(":nom", getNom());
    query.bindValue(":prenom", getPrenom());
    query.bindValue(":id_rdv", id_rdv);

    qDebug() << " Executing Query: " << query.executedQuery();
    qDebug() << "HEURE:" << getHeure();
    qDebug() << "NOM_VAC:" << getNomVac();
    qDebug() << "NOM:" << getNom();
    qDebug() << "PRENOM:" << getPrenom();
    qDebug() << "ID_RDV:" << id_rdv;

    if (!query.exec()) {
        qDebug() << " SQL Update Error:" << query.lastError().text();
        return false;
    }

    qDebug() << " Appointment updated successfully!";
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
        return true;
    }
    return false;
}


