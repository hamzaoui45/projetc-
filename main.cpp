#include "mainwindow.h"
#include"connexion.h"
#include"gressource.h"
#include"log.h"
#include <QApplication>
#include "mainwindowrdv.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connexion c;
    bool test=c.createconnect();
    if(test)


    {QMessageBox::information(nullptr, QObject::tr("database is open"),
                                 QObject::tr("connection successful.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);

    }

    class log l;
    l.exec();
    return a.exec();
}
