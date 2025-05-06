#include "connexion.h"

connexion::connexion()
{

}

bool connexion::createconnect()
{bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("projet_lakahni");//inserer le nom de la source de données
    db.setUserName("lakahni");//inserer nom de l'utilisateur
    db.setPassword("1234");//inserer mot de passe de cet utilisateur

    if (db.open())
        test=true;



    return  test;
}
