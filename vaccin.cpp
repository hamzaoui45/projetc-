#include "vaccin.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

// Constructeur
Vaccin::Vaccin(int id, string nom, int qte, string labo, string patho, QDate date) {
    this->id_vac = id;
    this->nom_vac = nom;
    this->quantite = qte;
    this->nom_labo = labo;
    this->pathologie = patho;
    this->date_exp = date;
}

// Ajouter un vaccin
bool Vaccin::ajouterVaccin() {
    QSqlQuery query;
    query.prepare("INSERT INTO Vaccin (id_vac, nom_vac, quantite, nom_labo, pathologie, date_exp) "
                  "VALUES (:id_vac, :nom_vac, :quantite, :nom_labo, :pathologie, TO_DATE(:date_exp, 'YYYY-MM-DD'))");

    query.bindValue(":id_vac", id_vac);
    query.bindValue(":nom_vac", QString::fromStdString(nom_vac));
    query.bindValue(":quantite", quantite);
    query.bindValue(":nom_labo", QString::fromStdString(nom_labo));
    query.bindValue(":pathologie", QString::fromStdString(pathologie));
    query.bindValue(":date_exp", date_exp.toString("yyyy-MM-dd"));

    if (!query.exec()) {
        qDebug() << "Erreur d'insertion:" << query.lastError().text();
        return false;
    }
    return true;
}


bool Vaccin::modifierVaccin(int id) {
    // Vérification que le vaccin existe
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM Vaccin WHERE id_vac = :id");
    checkQuery.bindValue(":id", id);
    checkQuery.exec();

    if (checkQuery.next() && checkQuery.value(0).toInt() == 0) {
        return false;
    }

    QSqlQuery query;
    query.prepare("UPDATE Vaccin SET nom_vac = :nom_vac, quantite = :quantite, nom_labo = :nom_labo, pathologie = :pathologie, date_exp = TO_DATE(:date_exp, 'YYYY-MM-DD') WHERE id_vac = :id_vac");

    query.bindValue(":id_vac", id);
    query.bindValue(":nom_vac", QString::fromStdString(nom_vac));
    query.bindValue(":quantite", quantite);
    query.bindValue(":nom_labo", QString::fromStdString(nom_labo));
    query.bindValue(":pathologie", QString::fromStdString(pathologie));
    query.bindValue(":date_exp", date_exp.toString("yyyy-MM-dd"));

    return query.exec();
}



// Vaccin.cpp
bool Vaccin::supprimerVaccin(int id) {
    QSqlQuery query;
    query.prepare("DELETE FROM Vaccin WHERE id_vac = :id_vac");
    query.bindValue(":id_vac", QString::number(id));  // bind l'ID comme entier
    return query.exec();
}


QSqlQueryModel* Vaccin::afficherVaccins()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT id_vac, nom_vac, quantite, nom_labo, pathologie, date_exp FROM vaccin");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_Vac"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom_Vac"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Quantité"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom_Labo"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Pathologie"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Date_Exp"));

    return model;
}


