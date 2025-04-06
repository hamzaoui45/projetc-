#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
#include <QMessageBox>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QGraphicsTextItem>
#include <QSqlQuery>
#include <QMap>
#include <QBrush>






class employee
{
private:
    int ID_EMP;
    float SALAIRE;
    QString NOM, PRENOM, POSTE, MDP, EMAIL;
    QByteArray IMAGE;
    QDate DATE_EMB;

public:
    employee();
    employee(int,QString, QString, QString, float, QString, QString, QDate,QByteArray);
    //employee(int,QString, QString);

    int getID_EMP(){return ID_EMP;};
    int getSALAIRE(){return SALAIRE;};
    QString getNOM(){return NOM;};
    QString getPRENOM(){return PRENOM;};
    QString getPOSTE(){return POSTE;};
    QString getMDP(){return MDP;};
    QString getIMAGE(){return IMAGE;};
    QString getEMAIL(){return EMAIL;};
    QDate getDATE_EMB(){return DATE_EMB;};

    void setID_EMP(int id) { ID_EMP = id; }
    void setSALAIRE(float salaire) { SALAIRE = salaire; }
    void setNOM(QString nom) { NOM = nom; }
    void setPRENOM(QString prenom) { PRENOM = prenom; }
    void setPOSTE(QString poste) { POSTE = poste; }
    void setMDP(QString mdp) { MDP = mdp; }
    void setEMAIL(QString email) { EMAIL = email; }
    void setDATE_EMB(QDate date) { DATE_EMB = date; }
    void setIMAGE(QByteArray image) { IMAGE = image; }


    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
    bool modifier();
    bool recuperer(int);
    QSqlQueryModel* trier(int test);
    QSqlQueryModel* recherche(int id);
    bool exportToPDF(const QString& filePath);
    QGraphicsView* statistiquesPoste();
    QGraphicsView* statistiquesembauche();



};

#endif // EMPLOYEE_H
