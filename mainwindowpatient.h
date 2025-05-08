#ifndef MAINWINDOWPATIENT_H
#define MAINWINDOWPATIENT_H

#include <QMainWindow>
#include <QMessageBox>
#include <QtCharts>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindowPatient; }
QT_END_NAMESPACE

class MainWindowPatient : public QMainWindow
{
    Q_OBJECT

public:
    MainWindowPatient(QWidget *parent = nullptr);
    ~MainWindowPatient();
    void analyserReponses();

private slots:
    void boutonValider_clicked();
    void afficher_buttonmodif_clicked();
    void valider_buttonmodif_clicked();
    void valider_supression_clicked();
    void on_tri_button_clicked();
    void on_rechercher_Button_clicked();
    void on_retour_Button_clicked();
    void on_export_Button_clicked();
    void on_val_button_clicked();
    void on_annul_button_clicked();
    void on_diagnostiquer_clicked();

private:
    Ui::MainWindowPatient *ui;
    void afficherPatients();
    void reinitialiserChamps();
    void afficherStatistiques();
    int idInitial;
};

#endif // MAINWINDOWPATIENT_H
