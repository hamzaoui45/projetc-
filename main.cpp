#include "mainwindow.h"
#include"connexion.h"

#include <QApplication>

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
    MainWindow w;
    w.show();
    return a.exec();
}
