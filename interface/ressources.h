#ifndef RESSOURCES_H
#define RESSOURCES_H

#include <QString>
#include <QSqlQuery>
#include<QSqlQueryModel>
#include <QtCharts/QPieSeries>
#include <QSqlQuery>


class Ressources
{
public:
    Ressources();
    Ressources(QString nom, int qte, float prix, QString etat);

    // Getters
    QString getNom() const;
    int getQte() const;
    float getPrix() const;
    QString getEtat() const;

    // Setters
    void setNom(const QString &nom);
    void setQte(int qte);
    void setPrix(float prix);
    void setEtat(const QString &etat);

    // Méthodes pour une ressource
    bool ajouter();
    QSqlQueryModel* afficher();
    bool modifier(int reference);
    bool chercher(int reference);
    bool supprimer(int reference);
    QSqlQueryModel* trier(QString critere, QString ordre);
    QSqlQueryModel* rechercher(QString valeur, QString critere);
    void export_pdf() const;
    QPieSeries * getStatistiques();
private:
    QString nom;
    int qte;
    float prix;
    QString etat;
};

#endif // RESSOURCES_H
