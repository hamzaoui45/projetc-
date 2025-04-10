#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "vaccin.h"

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
    void on_pushbuttonajoutervaccin_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_21_clicked();



    void on_pushButton_16_clicked();



    void on_pushButton_14_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();
    void afficherStatistiqueVaccins();

    void exportPdfVaccins();





    void on_pushButton_19_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::MainWindow *ui;
    Vaccin vaccin;

};

#endif // MAINWINDOW_H
