#include "mainwindowrdv.h"
#include <QApplication>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QDebug>
#include "connection.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Connection c;
    bool test = c.createconnect();

    MainWindowrdv w;

    if (test)
    {
        w.show();
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Database is not open"),
                              QObject::tr("Connection failed.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
    }

    return a.exec();
}
