#ifndef PATIENT_H
#define PATIENT_H
#include<QSqlQuery>
#include <QString>
#include <QSqlQueryModel>
#include <QDate>


class Patient
{
    int idPatient,tel,type;
    QString nom,prenom,email,adresse;
    QDate dateNaissance;
public:
    Patient(){};
    Patient(QString,QString,QDate,QString,QString,int,int);
    QString getNom(){return nom;}
    QString getPrenom(){return prenom;}
    QString getEmail(){return email;}
    QString getAdresse(){return adresse;}
    QDate getDateNaissance(){return dateNaissance;}
    int getIdPatient(){return idPatient;}
    int getTel(){return tel;}
    int getType(){return type;}


    void setNom(QString nomp) { nom = nomp; }
    void setPrenom(QString prenomp) { prenom = prenomp; }
    void setEmail(QString emailp) { email = emailp; }
    void setAdresse(QString adressep) { adresse = adressep; }
    void setDateNaissance(QDate datep) { dateNaissance = datep; }
    void setIdPatient(int idp) { idPatient = idp; }
    void setTel(int telp) { tel = telp; }
    void setType(int typep) { type = typep; }

    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int idPatient);
    bool modifier();
};

#endif // PATIENT_H

