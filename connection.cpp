#include "connection.h"

Connection::Connection()
{
    db = QSqlDatabase::addDatabase("QODBC");
}

bool Connection::createconnect()
{
    bool test = false;
    db.setDatabaseName("project_lakahni"); // Insert database source name
    db.setUserName("lakahni");             // Insert username
    db.setPassword("1234");                // Insert password

    if (db.open())
        test = true;

    return test;
}

void Connection::closeConnection()
{
    db.close();
}
