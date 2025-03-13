#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ressources.h"
#include <QMainWindow>

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
    void on_pushButton_11_clicked();

    void on_valider_ajout_clicked();



    void on_pushButton_21_clicked();

    void on_recherche_modif_clicked();

    void on_supprimer_clicked();

    void on_trier_clicked();

    void on_Rechercher_clicked();

    void on_export_pdf_clicked();

    void afficherStatistiques();

    void on_retour_ajout_clicked();

    void on_pushButton_12_clicked();

private:
    Ui::MainWindow *ui;
    Ressources res;
};
#endif // MAINWINDOW_H
