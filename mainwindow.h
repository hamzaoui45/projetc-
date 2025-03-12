#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
void on_valider_clicked();
void on_sup_clicked();

void on_modifier_clicked();

void on_tri_activated(int index);

void on_validrech_clicked();

void on_deposer_clicked();

void on_deposerm_clicked();

void on_exp_clicked();
void afficherStatistiques();

private:
    Ui::MainWindow *ui;
    QByteArray imageData;  // Stocke l'image temporairement

};
#endif // MAINWINDOW_H
