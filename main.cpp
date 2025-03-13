#include "mainwindow.h"
#include "connection.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // test
    Connection c;
    bool test=c.createconnect();
    MainWindow w;
    w.show();
    if (test)
    {QMessageBox::information(nullptr, QObject::tr("database is open"),
                                 QObject::tr("connection successful.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);

    }


    return a.exec();
}
