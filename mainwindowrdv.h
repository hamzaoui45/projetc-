#ifndef MAINWINDOWRDV_H
#define MAINWINDOWRDV_H

#include <QMainWindow>
#include <QLabel>
#include <QCalendarWidget>
#include <QStandardItemModel>
#include <QSet>
#include <QMap>
#include "arduino.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindowrdv;
}
QT_END_NAMESPACE

class MainWindowrdv : public QMainWindow
{
    Q_OBJECT

public:
    MainWindowrdv(QWidget *parent = nullptr);
    ~MainWindowrdv();

public slots:
    void on_pb_ajouter_clicked();
    void on_pb_supprimer_clicked();
    void on_pb_generate_pdf_clicked();
    void on_pb_recherche_clicked();
    void on_pb_trier_clicked();
    void on_pb_modifier_clicked();
    void on_pb_load_clicked();
    void updateVaccinationChart();
    void on_liste_attente_clicked();
    void onRowClicked(const QModelIndex &index);

private:
    void afficher();
    void updateCalendarColors();
    void on_calendarWidget_clicked(const QDate &date);
    void validatePassword(const QString &password);
    void handleVaccineID(const QString &vaccineID);


private:
    Ui::MainWindowrdv *ui;
    QStandardItemModel *model;
    QMap<QDate, int> rdvCountPerDate;
    QSet<QDate> tunisianHolidays;
    QDate selectedDate;
    Arduino *arduino;
};

#endif // MAINWINDOWRDV_H
