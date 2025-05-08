#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "log.h"
#include "arduino.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_valider_2_clicked();
    void on_sup_2_clicked();

    void on_modifier_2_clicked();

    void on_tri_2_activated(int index);

    void on_validrech_2_clicked();

    void on_deposer_2_clicked();

    void on_deposerm_2_clicked();

    void on_exp_2_clicked();
    void afficherStatistiques();

    void on_set_2_clicked();

    void on_pushButton_16_clicked();


    void on_tr_2_activated(int index);

    void afficherquantity(); // Slot to handle Arduino data
    void updateA(); // New slot for updating quantity at 150 degrees
    //void handle_arduino();
    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;
    QByteArray imageData;  // Stocke l'image temporairement
    Arduino arduino; // Arduino object for communication
    qint64 lastUpdateProcessed = 0;
    const qint64 updateCooldown = 1000;
    //int get_vaccine_quantity_from_db(); // Méthode pour accéder à la base

};
#endif // MAINWINDOW_H
