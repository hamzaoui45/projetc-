#include "mainwindow.h"
#include "connection.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    Connection c;
    //MainWindow w;
    //w.show();
    bool test=c.createconnect();
    MainWindow w;
    w.show();

    if(test)


    {QMessageBox::information(nullptr, QObject::tr("Succés"),
                                 QObject::tr("Connection successful.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);

    }
    return a.exec();

}
