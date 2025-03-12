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
public slots:
    void on_pb_ajouter_clicked();
    void on_pb_supprimer_clicked();
    void on_pb_generate_pdf_clicked();
    void on_pb_recherche_clicked();
    void on_pb_trier_clicked();
    void on_pb_modifier_clicked();
    void on_pb_load_clicked();
private:
    void afficher();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
