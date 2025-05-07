#ifndef CONNEXION_H
#define CONNEXION_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>

using namespace std;
class connexion
{
public:
    connexion();
    bool createconnect();
};

#endif

