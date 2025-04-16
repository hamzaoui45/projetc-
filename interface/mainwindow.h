#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ressources.h"
#include <QMainWindow>

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QMediaPlayer>
#include <QAudioOutput>

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
    void on_pushButton_clicked();
    void onApiReplyFinished(QNetworkReply *reply);
    void on_playAudioButton_clicked();
private:
    Ui::MainWindow *ui;
    Ressources res;
    QNetworkAccessManager *networkManager; // For making HTTP requests
    QString audioFilePath; // Store the audio file path from the API response
    QMediaPlayer *mediaPlayer; // Media player to play the audio
    QAudioOutput *audioOutput; // Required for Qt 6 to manage audio output
};
#endif // MAINWINDOW_H
