#include "gressource.h"
#include "connexion.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    connexion c;
    //MainWindow w;
    //w.show();
    bool test=c.createconnect();
    gressource w;
    w.show();

    if(test)


    {QMessageBox::information(nullptr, QObject::tr("Succés"),
                                 QObject::tr("Connection successful.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);

    }
    return a.exec();

}
