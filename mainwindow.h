#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
//#include "patient.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void boutonValider_clicked();
    void afficher_buttonmodif_clicked();
    void valider_buttonmodif_clicked();
    void valider_supression_clicked();
    void on_tri_button_clicked();
    void on_rechercher_Button_clicked();
    void on_retour_Button_clicked();
    void on_export_Button_clicked();





private:
    Ui::MainWindow *ui;
    void afficherPatients();
    void reinitialiserChamps();
    //void trierPatients();
};
#endif // MAINWINDOW_H
