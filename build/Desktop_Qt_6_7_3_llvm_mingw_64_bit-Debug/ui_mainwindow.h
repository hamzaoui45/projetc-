/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_13;
    QLabel *label_14;
    QLabel *label_7;
    QTabWidget *tabWidget;
    QWidget *ajouter_2;
    QLabel *label_4;
    QLabel *nom;
    QLineEdit *lineEdit_nom;
    QLabel *vaccin;
    QLineEdit *lineEdit_nom_vac;
    QLabel *label_9;
    QLabel *label_24;
    QPushButton *ajouter;
    QPushButton *pushButton_24;
    QTimeEdit *timeEdit;
    QLabel *prenom;
    QLineEdit *lineEdit_prenom;
    QWidget *Modifier;
    QLabel *label_8;
    QLineEdit *lineEdit_prenom_2;
    QLineEdit *lineEdit_nom_vac_2;
    QPushButton *pb_modifier;
    QPushButton *pushButton_22;
    QLabel *label_12;
    QLabel *label_18;
    QLabel *label_22;
    QLabel *label_23;
    QTimeEdit *timeEdit_2;
    QLabel *prenom_2;
    QLabel *vaccin_2;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_nom_2;
    QPushButton *pb_load;
    QWidget *tab_5;
    QLabel *label_16;
    QTableView *tableView_3;
    QPushButton *pushButton_5;
    QPushButton *pb_generate_pdf;
    QLabel *label_5;
    QLabel *label_10;
    QLabel *label_13;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_25;
    QLineEdit *lineEditsup;
    QPushButton *pb_supprimer;
    QComboBox *comboBoxrech;
    QPushButton *pb_recherche;
    QLineEdit *lineEdit_rech;
    QComboBox *comboBoxtri;
    QComboBox *comboBoxtri_2;
    QPushButton *pb_trier;
    QWidget *Statsitiques;
    QLabel *label_11;
    QLabel *label_17;
    QWidget *listdatteint;
    QWidget *Calender;
    QGroupBox *gb_calendar;
    QCalendarWidget *calendarWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1166, 721);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 217, 217)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(-30, -40, 1211, 131));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 120, 171, 551));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 100, 151, 51));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 200, 151, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(20, 300, 151, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(20, 390, 151, 41));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(20, 490, 151, 41));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(20, 580, 151, 41));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(1010, 30, 131, 29));
        pushButton_13->setStyleSheet(QString::fromUtf8("color : black;\n"
"background-color: rgb(81, 182, 182);"));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(-10, 0, 161, 91));
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_14->setTextFormat(Qt::TextFormat::RichText);
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/logo.png")));
        label_14->setScaledContents(true);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 60, 101, 20));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(190, 60, 961, 641));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(81, 182, 182);"));
        ajouter_2 = new QWidget();
        ajouter_2->setObjectName("ajouter_2");
        label_4 = new QLabel(ajouter_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(180, 50, 571, 431));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        nom = new QLabel(ajouter_2);
        nom->setObjectName("nom");
        nom->setGeometry(QRect(240, 110, 121, 31));
        QFont font;
        font.setKerning(true);
        nom->setFont(font);
        nom->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        lineEdit_nom = new QLineEdit(ajouter_2);
        lineEdit_nom->setObjectName("lineEdit_nom");
        lineEdit_nom->setGeometry(QRect(390, 100, 161, 28));
        lineEdit_nom->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(12, 12, 12);"));
        vaccin = new QLabel(ajouter_2);
        vaccin->setObjectName("vaccin");
        vaccin->setGeometry(QRect(240, 210, 131, 31));
        vaccin->setFont(font);
        vaccin->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        lineEdit_nom_vac = new QLineEdit(ajouter_2);
        lineEdit_nom_vac->setObjectName("lineEdit_nom_vac");
        lineEdit_nom_vac->setGeometry(QRect(390, 210, 161, 28));
        lineEdit_nom_vac->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(9, 9, 9);"));
        label_9 = new QLabel(ajouter_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(330, 20, 291, 41));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_24 = new QLabel(ajouter_2);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(250, 280, 121, 31));
        label_24->setFont(font);
        label_24->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        ajouter = new QPushButton(ajouter_2);
        ajouter->setObjectName("ajouter");
        ajouter->setGeometry(QRect(260, 370, 121, 41));
        ajouter->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        pushButton_24 = new QPushButton(ajouter_2);
        pushButton_24->setObjectName("pushButton_24");
        pushButton_24->setGeometry(QRect(500, 370, 121, 41));
        pushButton_24->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        timeEdit = new QTimeEdit(ajouter_2);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(420, 280, 118, 29));
        timeEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(13, 13, 13);"));
        prenom = new QLabel(ajouter_2);
        prenom->setObjectName("prenom");
        prenom->setGeometry(QRect(240, 160, 121, 31));
        prenom->setFont(font);
        prenom->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        lineEdit_prenom = new QLineEdit(ajouter_2);
        lineEdit_prenom->setObjectName("lineEdit_prenom");
        lineEdit_prenom->setGeometry(QRect(400, 150, 161, 28));
        lineEdit_prenom->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(12, 12, 12);"));
        tabWidget->addTab(ajouter_2, QString());
        Modifier = new QWidget();
        Modifier->setObjectName("Modifier");
        label_8 = new QLabel(Modifier);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(110, 50, 681, 431));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        lineEdit_prenom_2 = new QLineEdit(Modifier);
        lineEdit_prenom_2->setObjectName("lineEdit_prenom_2");
        lineEdit_prenom_2->setGeometry(QRect(400, 150, 161, 28));
        lineEdit_prenom_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(12, 12, 12);"));
        lineEdit_nom_vac_2 = new QLineEdit(Modifier);
        lineEdit_nom_vac_2->setObjectName("lineEdit_nom_vac_2");
        lineEdit_nom_vac_2->setGeometry(QRect(400, 230, 161, 31));
        lineEdit_nom_vac_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(9, 9, 9);"));
        pb_modifier = new QPushButton(Modifier);
        pb_modifier->setObjectName("pb_modifier");
        pb_modifier->setGeometry(QRect(270, 360, 121, 41));
        pb_modifier->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        pushButton_22 = new QPushButton(Modifier);
        pushButton_22->setObjectName("pushButton_22");
        pushButton_22->setGeometry(QRect(440, 360, 121, 41));
        pushButton_22->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_12 = new QLabel(Modifier);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(300, 30, 291, 41));
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_18 = new QLabel(Modifier);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(240, 90, 131, 31));
        label_18->setFont(font);
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_22 = new QLabel(Modifier);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(240, 220, 131, 31));
        label_22->setFont(font);
        label_22->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_23 = new QLabel(Modifier);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(260, 300, 121, 31));
        label_23->setFont(font);
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        timeEdit_2 = new QTimeEdit(Modifier);
        timeEdit_2->setObjectName("timeEdit_2");
        timeEdit_2->setGeometry(QRect(420, 300, 118, 29));
        timeEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(13, 13, 13);"));
        prenom_2 = new QLabel(Modifier);
        prenom_2->setObjectName("prenom_2");
        prenom_2->setGeometry(QRect(250, 150, 121, 31));
        prenom_2->setFont(font);
        prenom_2->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        vaccin_2 = new QLabel(Modifier);
        vaccin_2->setObjectName("vaccin_2");
        vaccin_2->setGeometry(QRect(610, 70, 131, 31));
        vaccin_2->setFont(font);
        vaccin_2->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        lineEdit_id = new QLineEdit(Modifier);
        lineEdit_id->setObjectName("lineEdit_id");
        lineEdit_id->setGeometry(QRect(600, 110, 161, 28));
        lineEdit_id->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(8, 8, 8);"));
        lineEdit_nom_2 = new QLineEdit(Modifier);
        lineEdit_nom_2->setObjectName("lineEdit_nom_2");
        lineEdit_nom_2->setGeometry(QRect(400, 90, 161, 28));
        lineEdit_nom_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(13, 13, 13);"));
        pb_load = new QPushButton(Modifier);
        pb_load->setObjectName("pb_load");
        pb_load->setGeometry(QRect(660, 160, 83, 29));
        pb_load->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
""));
        tabWidget->addTab(Modifier, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        label_16 = new QLabel(tab_5);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(30, 140, 901, 391));
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        tableView_3 = new QTableView(tab_5);
        tableView_3->setObjectName("tableView_3");
        tableView_3->setGeometry(QRect(90, 170, 791, 281));
        pushButton_5 = new QPushButton(tab_5);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(180, 470, 151, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        pb_generate_pdf = new QPushButton(tab_5);
        pb_generate_pdf->setObjectName("pb_generate_pdf");
        pb_generate_pdf->setGeometry(QRect(610, 470, 151, 41));
        pb_generate_pdf->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_5 = new QLabel(tab_5);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 10, 281, 121));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        label_10 = new QLabel(tab_5);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(330, 10, 301, 121));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        label_13 = new QLabel(tab_5);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(640, 10, 291, 121));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        label_19 = new QLabel(tab_5);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(80, 0, 151, 51));
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_20 = new QLabel(tab_5);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(410, 10, 151, 41));
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_21 = new QLabel(tab_5);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(720, 0, 151, 51));
        label_21->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_25 = new QLabel(tab_5);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(650, 70, 63, 20));
        label_25->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);\n"
"color: rgb(13, 13, 13);\n"
""));
        lineEditsup = new QLineEdit(tab_5);
        lineEditsup->setObjectName("lineEditsup");
        lineEditsup->setGeometry(QRect(740, 60, 141, 28));
        lineEditsup->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(12, 12, 12);"));
        pb_supprimer = new QPushButton(tab_5);
        pb_supprimer->setObjectName("pb_supprimer");
        pb_supprimer->setGeometry(QRect(740, 100, 131, 31));
        pb_supprimer->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        comboBoxrech = new QComboBox(tab_5);
        comboBoxrech->addItem(QString());
        comboBoxrech->addItem(QString());
        comboBoxrech->addItem(QString());
        comboBoxrech->setObjectName("comboBoxrech");
        comboBoxrech->setGeometry(QRect(40, 60, 101, 28));
        comboBoxrech->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(7, 7, 7);"));
        pb_recherche = new QPushButton(tab_5);
        pb_recherche->setObjectName("pb_recherche");
        pb_recherche->setGeometry(QRect(102, 100, 101, 29));
        pb_recherche->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
""));
        lineEdit_rech = new QLineEdit(tab_5);
        lineEdit_rech->setObjectName("lineEdit_rech");
        lineEdit_rech->setGeometry(QRect(170, 60, 113, 28));
        lineEdit_rech->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(4, 4, 4);"));
        comboBoxtri = new QComboBox(tab_5);
        comboBoxtri->addItem(QString());
        comboBoxtri->setObjectName("comboBoxtri");
        comboBoxtri->setGeometry(QRect(340, 60, 101, 28));
        comboBoxtri->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(9, 9, 9);"));
        comboBoxtri_2 = new QComboBox(tab_5);
        comboBoxtri_2->addItem(QString());
        comboBoxtri_2->addItem(QString());
        comboBoxtri_2->setObjectName("comboBoxtri_2");
        comboBoxtri_2->setGeometry(QRect(510, 60, 101, 28));
        comboBoxtri_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(7, 7, 7);"));
        pb_trier = new QPushButton(tab_5);
        pb_trier->setObjectName("pb_trier");
        pb_trier->setGeometry(QRect(410, 100, 101, 29));
        pb_trier->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
""));
        tabWidget->addTab(tab_5, QString());
        Statsitiques = new QWidget();
        Statsitiques->setObjectName("Statsitiques");
        label_11 = new QLabel(Statsitiques);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 50, 921, 431));
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        label_17 = new QLabel(Statsitiques);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(300, 30, 291, 41));
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        tabWidget->addTab(Statsitiques, QString());
        listdatteint = new QWidget();
        listdatteint->setObjectName("listdatteint");
        tabWidget->addTab(listdatteint, QString());
        Calender = new QWidget();
        Calender->setObjectName("Calender");
        gb_calendar = new QGroupBox(Calender);
        gb_calendar->setObjectName("gb_calendar");
        gb_calendar->setGeometry(QRect(50, 30, 801, 421));
        calendarWidget = new QCalendarWidget(gb_calendar);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(50, 40, 731, 361));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: lightblue;\n"
"color: rgb(12, 12, 12);"));
        tabWidget->addTab(Calender, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1166, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">DASHBOARD</span></p></body></html>", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Gestion Patients", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Gestion employ\303\251s", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Gestion ressources", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Gestion rendez-vous", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Gestion Vaccins", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "D\303\251connexion", nullptr));
        label_14->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700;\">LAKAHNI</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        tabWidget->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>ajout</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_4->setText(QString());
        nom->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Nom du Patient</p></body></html>", nullptr));
        vaccin->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">nom de vaccin</span></p><p align=\"center\"><br/></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Rendez-vous</span></p></body></html>", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Time</p></body></html>", nullptr));
        ajouter->setText(QCoreApplication::translate("MainWindow", "Valider", nullptr));
        pushButton_24->setText(QCoreApplication::translate("MainWindow", "Retour", nullptr));
        prenom->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">prenom du Patient</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ajouter_2), QCoreApplication::translate("MainWindow", "Ajouter un rendez-vous", nullptr));
        label_8->setText(QString());
        pb_modifier->setText(QCoreApplication::translate("MainWindow", "Valider", nullptr));
        pushButton_22->setText(QCoreApplication::translate("MainWindow", "Retour", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">MODIFIER RENDEZ-VOUS</span></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Nom du Patient</p></body></html>", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">nom de vaccin</span></p><p align=\"center\"><br/></p></body></html>", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Time</p></body></html>", nullptr));
        prenom_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">prenom du Patient</p></body></html>", nullptr));
        vaccin_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">ID_RDV</p><p align=\"center\"><br/></p></body></html>", nullptr));
        pb_load->setText(QCoreApplication::translate("MainWindow", "load", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Modifier), QString());
        label_16->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Gestion Patients", nullptr));
        pb_generate_pdf->setText(QCoreApplication::translate("MainWindow", "PDF", nullptr));
        label_5->setText(QString());
        label_10->setText(QString());
        label_13->setText(QString());
        label_19->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700;\">Recherche</span></p></body></html>", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700;\">Tri</span></p><p align=\"center\"><br/></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Suppression</p><p align=\"center\"><br/></p></body></html>", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "ID_RDV", nullptr));
        pb_supprimer->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        comboBoxrech->setItemText(0, QCoreApplication::translate("MainWindow", "nom", nullptr));
        comboBoxrech->setItemText(1, QCoreApplication::translate("MainWindow", "prenom", nullptr));
        comboBoxrech->setItemText(2, QCoreApplication::translate("MainWindow", "nom_vac", nullptr));

        pb_recherche->setText(QCoreApplication::translate("MainWindow", "Rechercher", nullptr));
        comboBoxtri->setItemText(0, QCoreApplication::translate("MainWindow", "ID_RDV", nullptr));

        comboBoxtri_2->setItemText(0, QCoreApplication::translate("MainWindow", "ASC", nullptr));
        comboBoxtri_2->setItemText(1, QCoreApplication::translate("MainWindow", "DESC", nullptr));

        pb_trier->setText(QCoreApplication::translate("MainWindow", "Trier", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Page", nullptr));
        label_11->setText(QString());
        label_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">STATISTIQUES</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Statsitiques), QString());
        tabWidget->setTabText(tabWidget->indexOf(listdatteint), QCoreApplication::translate("MainWindow", "listdatteint", nullptr));
        gb_calendar->setTitle(QCoreApplication::translate("MainWindow", "Calendrier", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Calender), QCoreApplication::translate("MainWindow", "calendrier", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
