#ifndef RDV_H
#define RDV_H

#include <QString>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QLabel>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QSqlRecord>
class Rdv
{
public:
    // Constructors
    Rdv() = default;
    Rdv(QString heure, QString nom_vac, QString nom, QString prenom, QDate date_rdv);


    bool verif();
    bool ajouter();
    static QSqlQueryModel *afficher();
    bool supprimer(int id_rdv);
    QSqlQueryModel* trier(QString column, QString order);
    bool modifier(int id_rdv);
    bool loadById(int id_rdv);
    QStandardItemModel* afficherListeAttenteAvecStatut(); // Correct declaration


    // Getters
    QString getHeure() const;
    QString getNomVac() const;
    QString getNom() const;
    QString getPrenom() const;
    QDate getDateRdv() const;  // Getter for the date

    // Setters
    void setHeure(const QString &heure);
    void setNomVac(const QString &nom_vac);
    void setNom(const QString &nom);
    void setPrenom(const QString &prenom);
    void setDateRdv(const QDate &date);



private:
    QString heure, nom_vac, nom, prenom;
    QDate date_rdv;
};

#endif // RDV_H
