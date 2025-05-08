#ifndef MAINWINDOWV_H
#define MAINWINDOWV_H

#include <QMainWindow>
#include "vaccin.h"
#include <QProcess>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindowV;
}
QT_END_NAMESPACE

class MainWindowV : public QMainWindow
{
    Q_OBJECT

public:
    MainWindowV(QWidget *parent = nullptr);
    ~MainWindowV();

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
    void on_rechercherChatBot_clicked(); // ✅ ton slot de chatbot ici
    void cleanAndDisplayResponse(const QString &response);
    void readChatBotOutput();

    void readRecommendationOutput();



    void on_recommander_clicked();
    void cleanAndDisplayRecommendation(const QString &response);



    void on_recommander_3_clicked();

    void on_recommander_2_clicked();

    void on_recommander_4_clicked();

    void sauvegarderHistorique();
    void chargerHistorique();
void on_pushButton_7_clicked();
    void on_switchToGressourceButton_clicked();
private: // ✅ ici les variables
    Ui::MainWindowV *ui;
    Vaccin vaccin;

    QProcess *chatbotProcess = nullptr;
    bool chatbotStarted = false;
    QString accumulatedResponse;
    QString accumulatedRecommendation;
    QTimer* recommendationTimer = nullptr;

    QStringList historiqueReponses; // pour stocker toutes les réponses nettoyées



};

#endif // MAINWINDOWV_H
