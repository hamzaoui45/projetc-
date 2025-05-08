#ifndef VACCIN_H
#define VACCIN_H

#include <string>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>  // Utilisation correcte de QDate

using namespace std;

class Vaccin {
private:
    int id_vac;  // ID en entier (NUMBER dans la base de données)
    string nom_vac;
    int quantite;
    string nom_labo;
    string pathologie;
    QDate date_exp;

public:
    // Constructeurs
    Vaccin() {};
    Vaccin(int, string, int, string, string, QDate);

    // Getters
    int getIdVac() { return id_vac; }
    string getNomVac() { return nom_vac; }
    int getQuantite() { return quantite; }
    string getNomLabo() { return nom_labo; }
    string getPathologie() { return pathologie; }
    QDate getDateExp() { return date_exp; }

    // Setters
    void setIdVac(int id) { id_vac = id; }
    void setNomVac(string nom) { nom_vac = nom; }
    void setQuantite(int qte) { quantite = qte; }
    void setNomLabo(string labo) { nom_labo = labo; }
    void setPathologie(string patho) { pathologie = patho; }
    void setDateExp(QDate date) { date_exp = date; }

    // Méthodes CRUD
    bool ajouterVaccin();
    bool modifierVaccin(int id);
    bool supprimerVaccin(int id);
    QSqlQueryModel* afficherVaccins();
    bool chercherVaccin(int id);




    QSqlQueryModel* rechercher(int id);
    QSqlQueryModel* trier();
};

#endif // VACCIN_H
