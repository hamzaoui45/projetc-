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

    int getID_EMP();
    int getSALAIRE();
    QString getNOM();
    QString getPRENOM();
    QString getPOSTE();
    QString getMDP();
    QString getIMAGE();
    QString getEMAIL();
    QString getDATE_EMB();

    void setID_EMP(int);
    void setSALAIRE(float);
    void setNOM(QString);
    void setPRENOM(QString);
    void setPOSTE(QString);
    void setMDP(QString);
    void setIMAGE(QByteArray);
    void setEMAIL(QString);
    void setDATE_EMB(QDate);

    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
    bool modifier();
    QSqlQueryModel* trier(int test);
    QSqlQueryModel* recherche(int id);
    bool exportToPDF(const QString& filePath);
    QGraphicsView* statistiquesPoste();


};

#endif // EMPLOYEE_H
