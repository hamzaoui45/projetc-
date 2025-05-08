/********************************************************************************
** Form generated from reading UI file 'mainwindowpatient.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWPATIENT_H
#define UI_MAINWINDOWPATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowPatient
{
public:
    QWidget *centralwidget;
    QLabel *label_14;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QLabel *label_2;
    QPushButton *pushButton_13;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QLabel *label_7;
    QPushButton *pushButton_6;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_10;
    QPushButton *rechercher_Button;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *tri_button;
    QLabel *label_19;
    QLabel *label_20;
    QPushButton *export_Button;
    QTableView *table_affichage_patients;
    QPushButton *pushButton_11;
    QComboBox *Tri_comboBox;
    QComboBox *recherche_comboBox;
    QLineEdit *recherche_line;
    QPushButton *retour_Button;
    QWidget *tab_2;
    QLabel *label_4;
    QLineEdit *tel_line;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *id_line;
    QLabel *label_21;
    QLabel *label_13;
    QLineEdit *nom_line;
    QLabel *label_22;
    QPushButton *bouton_valider_ajout;
    QPushButton *pushButton_20;
    QLabel *label_28;
    QLineEdit *prenom_line;
    QLabel *label_29;
    QDateEdit *date_line;
    QRadioButton *type_ch1;
    QRadioButton *type_ch2;
    QLabel *label_23;
    QLineEdit *email_line;
    QLabel *label_30;
    QLineEdit *adresse_line;
    QWidget *tab_5;
    QLabel *label_8;
    QLabel *label_12;
    QLabel *label_9;
    QLineEdit *id_modif_line;
    QLineEdit *nom_modif_line;
    QLineEdit *prenom_modif_line;
    QLineEdit *tel_modif_line;
    QLineEdit *email_modif_line;
    QLineEdit *adresse_modif_line;
    QDateEdit *date_modif;
    QPushButton *valider_button_modif;
    QPushButton *pushButton_22;
    QLabel *label_24;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_18;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_33;
    QRadioButton *type_ch1_modif;
    QRadioButton *type_ch2_modif;
    QPushButton *afficher_button_modif;
    QWidget *tab_6;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLineEdit *id_supression;
    QPushButton *valider_supression;
    QPushButton *pushButton_24;
    QWidget *stat;
    QLabel *label_17;
    QWidget *stati;
    QWidget *tab_4;
    QLabel *label_34;
    QLabel *label_35;
    QLineEdit *lineEdit_13;
    QPushButton *pushButton_23;
    QLabel *label_36;
    QPushButton *diagnostiquer;
    QPlainTextEdit *q1;
    QLabel *Q1_2;
    QPlainTextEdit *q2;
    QLabel *Q1_3;
    QLabel *Q1_4;
    QPlainTextEdit *q3;
    QLabel *aff_diagno;
    QWidget *Emotions;
    QLabel *label_27;
    QLabel *label_37;
    QLabel *Q1;
    QLabel *Q2;
    QPlainTextEdit *rep1;
    QPlainTextEdit *rep2;
    QLabel *Q3;
    QPlainTextEdit *rep3;
    QLabel *Q4;
    QPlainTextEdit *rep4;
    QLabel *Q5;
    QPlainTextEdit *rep5;
    QPushButton *annul_button;
    QPushButton *val_button;
    QLabel *aff_resul;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowPatient)
    {
        if (MainWindowPatient->objectName().isEmpty())
            MainWindowPatient->setObjectName("MainWindowPatient");
        MainWindowPatient->resize(1306, 855);
        centralwidget = new QWidget(MainWindowPatient);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: #99d9d9;\n"
""));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(20, 40, 161, 91));
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_14->setTextFormat(Qt::TextFormat::RichText);
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/logo.png")));
        label_14->setScaledContents(true);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(50, 240, 151, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(50, 530, 151, 41));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 160, 171, 551));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(1040, 70, 131, 29));
        pushButton_13->setStyleSheet(QString::fromUtf8("color : black;\n"
"background-color: rgb(81, 182, 182);"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(50, 430, 151, 41));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(50, 620, 151, 41));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 100, 101, 20));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(50, 340, 151, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1211, 131));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(220, 160, 991, 561));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(81, 182, 182);"));
        tab = new QWidget();
        tab->setObjectName("tab");
        label_10 = new QLabel(tab);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 20, 431, 111));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        rechercher_Button = new QPushButton(tab);
        rechercher_Button->setObjectName("rechercher_Button");
        rechercher_Button->setGeometry(QRect(300, 60, 101, 31));
        rechercher_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_15 = new QLabel(tab);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(640, 10, 141, 41));
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_16 = new QLabel(tab);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(130, 10, 161, 41));
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        tri_button = new QPushButton(tab);
        tri_button->setObjectName("tri_button");
        tri_button->setGeometry(QRect(790, 60, 91, 31));
        tri_button->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_19 = new QLabel(tab);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(490, 20, 431, 111));
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        label_20 = new QLabel(tab);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(10, 140, 951, 371));
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        export_Button = new QPushButton(tab);
        export_Button->setObjectName("export_Button");
        export_Button->setGeometry(QRect(560, 470, 131, 29));
        export_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        table_affichage_patients = new QTableView(tab);
        table_affichage_patients->setObjectName("table_affichage_patients");
        table_affichage_patients->setGeometry(QRect(10, 180, 941, 241));
        table_affichage_patients->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
""));
        table_affichage_patients->setShowGrid(true);
        table_affichage_patients->setSortingEnabled(false);
        pushButton_11 = new QPushButton(tab);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(210, 470, 131, 29));
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        Tri_comboBox = new QComboBox(tab);
        Tri_comboBox->addItem(QString());
        Tri_comboBox->addItem(QString());
        Tri_comboBox->setObjectName("Tri_comboBox");
        Tri_comboBox->setGeometry(QRect(520, 60, 111, 28));
        Tri_comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        recherche_comboBox = new QComboBox(tab);
        recherche_comboBox->addItem(QString());
        recherche_comboBox->addItem(QString());
        recherche_comboBox->addItem(QString());
        recherche_comboBox->setObjectName("recherche_comboBox");
        recherche_comboBox->setGeometry(QRect(30, 60, 111, 28));
        recherche_comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        recherche_line = new QLineEdit(tab);
        recherche_line->setObjectName("recherche_line");
        recherche_line->setGeometry(QRect(140, 100, 161, 28));
        recherche_line->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        retour_Button = new QPushButton(tab);
        retour_Button->setObjectName("retour_Button");
        retour_Button->setGeometry(QRect(810, 470, 131, 29));
        retour_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        tabWidget->addTab(tab, QString());
        label_20->raise();
        label_19->raise();
        label_10->raise();
        rechercher_Button->raise();
        label_15->raise();
        label_16->raise();
        tri_button->raise();
        export_Button->raise();
        table_affichage_patients->raise();
        pushButton_11->raise();
        Tri_comboBox->raise();
        recherche_comboBox->raise();
        recherche_line->raise();
        retour_Button->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        label_4 = new QLabel(tab_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 50, 951, 431));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        tel_line = new QLineEdit(tab_2);
        tel_line->setObjectName("tel_line");
        tel_line->setGeometry(QRect(20, 330, 161, 31));
        tel_line->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(300, 30, 291, 41));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 110, 121, 31));
        QFont font;
        font.setKerning(true);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        id_line = new QLineEdit(tab_2);
        id_line->setObjectName("id_line");
        id_line->setGeometry(QRect(20, 160, 161, 28));
        id_line->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        id_line->setReadOnly(true);
        label_21 = new QLabel(tab_2);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(280, 110, 121, 31));
        label_21->setFont(font);
        label_21->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(40, 280, 121, 31));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        nom_line = new QLineEdit(tab_2);
        nom_line->setObjectName("nom_line");
        nom_line->setGeometry(QRect(270, 160, 161, 28));
        nom_line->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        label_22 = new QLabel(tab_2);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(280, 280, 121, 31));
        label_22->setFont(font);
        label_22->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        bouton_valider_ajout = new QPushButton(tab_2);
        bouton_valider_ajout->setObjectName("bouton_valider_ajout");
        bouton_valider_ajout->setGeometry(QRect(630, 430, 121, 41));
        bouton_valider_ajout->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        pushButton_20 = new QPushButton(tab_2);
        pushButton_20->setObjectName("pushButton_20");
        pushButton_20->setGeometry(QRect(770, 430, 121, 41));
        pushButton_20->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_28 = new QLabel(tab_2);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(520, 110, 121, 31));
        label_28->setFont(font);
        label_28->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        prenom_line = new QLineEdit(tab_2);
        prenom_line->setObjectName("prenom_line");
        prenom_line->setGeometry(QRect(500, 160, 161, 28));
        prenom_line->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        label_29 = new QLabel(tab_2);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(710, 110, 191, 31));
        label_29->setFont(font);
        label_29->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        date_line = new QDateEdit(tab_2);
        date_line->setObjectName("date_line");
        date_line->setGeometry(QRect(720, 160, 161, 29));
        date_line->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        type_ch1 = new QRadioButton(tab_2);
        type_ch1->setObjectName("type_ch1");
        type_ch1->setGeometry(QRect(280, 330, 112, 26));
        type_ch1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        type_ch2 = new QRadioButton(tab_2);
        type_ch2->setObjectName("type_ch2");
        type_ch2->setGeometry(QRect(280, 360, 112, 26));
        type_ch2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        label_23 = new QLabel(tab_2);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(520, 280, 121, 31));
        label_23->setFont(font);
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        email_line = new QLineEdit(tab_2);
        email_line->setObjectName("email_line");
        email_line->setGeometry(QRect(500, 330, 161, 31));
        email_line->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        label_30 = new QLabel(tab_2);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(740, 280, 121, 31));
        label_30->setFont(font);
        label_30->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        adresse_line = new QLineEdit(tab_2);
        adresse_line->setObjectName("adresse_line");
        adresse_line->setGeometry(QRect(720, 330, 161, 31));
        adresse_line->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        label_8 = new QLabel(tab_5);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 50, 951, 431));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        label_12 = new QLabel(tab_5);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(300, 30, 401, 41));
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_9 = new QLabel(tab_5);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(40, 110, 121, 31));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        id_modif_line = new QLineEdit(tab_5);
        id_modif_line->setObjectName("id_modif_line");
        id_modif_line->setGeometry(QRect(20, 160, 161, 28));
        id_modif_line->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        id_modif_line->setReadOnly(false);
        nom_modif_line = new QLineEdit(tab_5);
        nom_modif_line->setObjectName("nom_modif_line");
        nom_modif_line->setGeometry(QRect(270, 160, 161, 28));
        nom_modif_line->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        nom_modif_line->setReadOnly(false);
        prenom_modif_line = new QLineEdit(tab_5);
        prenom_modif_line->setObjectName("prenom_modif_line");
        prenom_modif_line->setGeometry(QRect(500, 160, 161, 28));
        prenom_modif_line->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        prenom_modif_line->setReadOnly(false);
        tel_modif_line = new QLineEdit(tab_5);
        tel_modif_line->setObjectName("tel_modif_line");
        tel_modif_line->setGeometry(QRect(20, 330, 161, 31));
        tel_modif_line->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        tel_modif_line->setReadOnly(false);
        email_modif_line = new QLineEdit(tab_5);
        email_modif_line->setObjectName("email_modif_line");
        email_modif_line->setGeometry(QRect(500, 330, 161, 31));
        email_modif_line->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        adresse_modif_line = new QLineEdit(tab_5);
        adresse_modif_line->setObjectName("adresse_modif_line");
        adresse_modif_line->setGeometry(QRect(720, 330, 161, 31));
        adresse_modif_line->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        date_modif = new QDateEdit(tab_5);
        date_modif->setObjectName("date_modif");
        date_modif->setGeometry(QRect(720, 160, 161, 29));
        date_modif->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        valider_button_modif = new QPushButton(tab_5);
        valider_button_modif->setObjectName("valider_button_modif");
        valider_button_modif->setGeometry(QRect(630, 430, 121, 41));
        valider_button_modif->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        pushButton_22 = new QPushButton(tab_5);
        pushButton_22->setObjectName("pushButton_22");
        pushButton_22->setGeometry(QRect(770, 430, 121, 41));
        pushButton_22->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_24 = new QLabel(tab_5);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(280, 110, 121, 31));
        label_24->setFont(font);
        label_24->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_31 = new QLabel(tab_5);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(520, 110, 121, 31));
        label_31->setFont(font);
        label_31->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_32 = new QLabel(tab_5);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(710, 110, 191, 31));
        label_32->setFont(font);
        label_32->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_18 = new QLabel(tab_5);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(40, 280, 121, 31));
        label_18->setFont(font);
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_25 = new QLabel(tab_5);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(280, 280, 121, 31));
        label_25->setFont(font);
        label_25->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_26 = new QLabel(tab_5);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(520, 280, 121, 31));
        label_26->setFont(font);
        label_26->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_33 = new QLabel(tab_5);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(740, 280, 121, 31));
        label_33->setFont(font);
        label_33->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        type_ch1_modif = new QRadioButton(tab_5);
        type_ch1_modif->setObjectName("type_ch1_modif");
        type_ch1_modif->setGeometry(QRect(280, 330, 112, 26));
        type_ch1_modif->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        type_ch2_modif = new QRadioButton(tab_5);
        type_ch2_modif->setObjectName("type_ch2_modif");
        type_ch2_modif->setGeometry(QRect(280, 360, 112, 26));
        type_ch2_modif->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        afficher_button_modif = new QPushButton(tab_5);
        afficher_button_modif->setObjectName("afficher_button_modif");
        afficher_button_modif->setGeometry(QRect(40, 430, 121, 41));
        afficher_button_modif->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        label_38 = new QLabel(tab_6);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(10, 50, 951, 431));
        label_38->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        label_39 = new QLabel(tab_6);
        label_39->setObjectName("label_39");
        label_39->setGeometry(QRect(300, 30, 401, 41));
        label_39->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_40 = new QLabel(tab_6);
        label_40->setObjectName("label_40");
        label_40->setGeometry(QRect(30, 150, 431, 51));
        label_40->setFont(font);
        label_40->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        id_supression = new QLineEdit(tab_6);
        id_supression->setObjectName("id_supression");
        id_supression->setGeometry(QRect(590, 150, 201, 51));
        id_supression->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        id_supression->setReadOnly(false);
        valider_supression = new QPushButton(tab_6);
        valider_supression->setObjectName("valider_supression");
        valider_supression->setGeometry(QRect(190, 300, 151, 51));
        valider_supression->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        pushButton_24 = new QPushButton(tab_6);
        pushButton_24->setObjectName("pushButton_24");
        pushButton_24->setGeometry(QRect(510, 300, 151, 51));
        pushButton_24->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        tabWidget->addTab(tab_6, QString());
        stat = new QWidget();
        stat->setObjectName("stat");
        label_17 = new QLabel(stat);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(320, 30, 291, 41));
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        stati = new QWidget(stat);
        stati->setObjectName("stati");
        stati->setGeometry(QRect(10, 60, 951, 411));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(213, 241, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(234, 248, 247, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(106, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(142, 161, 160, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 127));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush8(QColor(106, 120, 120, 127));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush2);
        stati->setPalette(palette);
        stati->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        tabWidget->addTab(stat, QString());
        stati->raise();
        label_17->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        label_34 = new QLabel(tab_4);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(310, 30, 291, 41));
        label_34->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_35 = new QLabel(tab_4);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(30, 130, 261, 41));
        label_35->setFont(font);
        label_35->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        lineEdit_13 = new QLineEdit(tab_4);
        lineEdit_13->setObjectName("lineEdit_13");
        lineEdit_13->setGeometry(QRect(400, 130, 261, 41));
        lineEdit_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_23 = new QPushButton(tab_4);
        pushButton_23->setObjectName("pushButton_23");
        pushButton_23->setGeometry(QRect(780, 130, 121, 41));
        pushButton_23->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_36 = new QLabel(tab_4);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(10, 50, 951, 441));
        label_36->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        diagnostiquer = new QPushButton(tab_4);
        diagnostiquer->setObjectName("diagnostiquer");
        diagnostiquer->setGeometry(QRect(190, 440, 121, 41));
        diagnostiquer->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        q1 = new QPlainTextEdit(tab_4);
        q1->setObjectName("q1");
        q1->setGeometry(QRect(30, 250, 431, 41));
        q1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        Q1_2 = new QLabel(tab_4);
        Q1_2->setObjectName("Q1_2");
        Q1_2->setGeometry(QRect(30, 200, 431, 41));
        Q1_2->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        q2 = new QPlainTextEdit(tab_4);
        q2->setObjectName("q2");
        q2->setGeometry(QRect(510, 250, 431, 41));
        q2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        Q1_3 = new QLabel(tab_4);
        Q1_3->setObjectName("Q1_3");
        Q1_3->setGeometry(QRect(510, 200, 431, 41));
        Q1_3->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        Q1_4 = new QLabel(tab_4);
        Q1_4->setObjectName("Q1_4");
        Q1_4->setGeometry(QRect(30, 320, 431, 41));
        Q1_4->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        q3 = new QPlainTextEdit(tab_4);
        q3->setObjectName("q3");
        q3->setGeometry(QRect(30, 370, 431, 41));
        q3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        aff_diagno = new QLabel(tab_4);
        aff_diagno->setObjectName("aff_diagno");
        aff_diagno->setGeometry(QRect(530, 300, 411, 181));
        aff_diagno->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        tabWidget->addTab(tab_4, QString());
        label_36->raise();
        label_34->raise();
        label_35->raise();
        lineEdit_13->raise();
        pushButton_23->raise();
        diagnostiquer->raise();
        q1->raise();
        Q1_2->raise();
        q2->raise();
        Q1_3->raise();
        Q1_4->raise();
        q3->raise();
        aff_diagno->raise();
        Emotions = new QWidget();
        Emotions->setObjectName("Emotions");
        label_27 = new QLabel(Emotions);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(10, 50, 961, 461));
        label_27->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        label_37 = new QLabel(Emotions);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(300, 30, 341, 41));
        label_37->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        Q1 = new QLabel(Emotions);
        Q1->setObjectName("Q1");
        Q1->setGeometry(QRect(20, 100, 431, 41));
        Q1->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        Q2 = new QLabel(Emotions);
        Q2->setObjectName("Q2");
        Q2->setGeometry(QRect(470, 100, 471, 41));
        Q2->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        rep1 = new QPlainTextEdit(Emotions);
        rep1->setObjectName("rep1");
        rep1->setGeometry(QRect(20, 150, 431, 41));
        rep1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        rep2 = new QPlainTextEdit(Emotions);
        rep2->setObjectName("rep2");
        rep2->setGeometry(QRect(470, 150, 471, 41));
        rep2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        Q3 = new QLabel(Emotions);
        Q3->setObjectName("Q3");
        Q3->setGeometry(QRect(20, 210, 501, 41));
        Q3->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        rep3 = new QPlainTextEdit(Emotions);
        rep3->setObjectName("rep3");
        rep3->setGeometry(QRect(20, 260, 501, 41));
        rep3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        Q4 = new QLabel(Emotions);
        Q4->setObjectName("Q4");
        Q4->setGeometry(QRect(530, 210, 421, 41));
        Q4->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        rep4 = new QPlainTextEdit(Emotions);
        rep4->setObjectName("rep4");
        rep4->setGeometry(QRect(530, 260, 421, 41));
        rep4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        Q5 = new QLabel(Emotions);
        Q5->setObjectName("Q5");
        Q5->setGeometry(QRect(20, 320, 501, 41));
        Q5->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        rep5 = new QPlainTextEdit(Emotions);
        rep5->setObjectName("rep5");
        rep5->setGeometry(QRect(20, 370, 501, 41));
        rep5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        annul_button = new QPushButton(Emotions);
        annul_button->setObjectName("annul_button");
        annul_button->setGeometry(QRect(310, 450, 121, 31));
        annul_button->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        val_button = new QPushButton(Emotions);
        val_button->setObjectName("val_button");
        val_button->setGeometry(QRect(90, 450, 121, 31));
        val_button->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        aff_resul = new QLabel(Emotions);
        aff_resul->setObjectName("aff_resul");
        aff_resul->setGeometry(QRect(540, 310, 411, 181));
        aff_resul->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);  /* Fond blanc */\n"
"color: rgb(0, 0, 0);  /* Texte noir */\n"
""));
        tabWidget->addTab(Emotions, QString());
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 140, 151, 51));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        MainWindowPatient->setCentralWidget(centralwidget);
        label_2->raise();
        label_14->raise();
        pushButton_4->raise();
        pushButton_8->raise();
        pushButton_13->raise();
        pushButton_7->raise();
        pushButton_9->raise();
        label_7->raise();
        pushButton_6->raise();
        label->raise();
        tabWidget->raise();
        label_3->raise();
        menubar = new QMenuBar(MainWindowPatient);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1306, 26));
        MainWindowPatient->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowPatient);
        statusbar->setObjectName("statusbar");
        MainWindowPatient->setStatusBar(statusbar);

        retranslateUi(MainWindowPatient);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindowPatient);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowPatient)
    {
        MainWindowPatient->setWindowTitle(QCoreApplication::translate("MainWindowPatient", "MainWindow", nullptr));
        label_14->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("MainWindowPatient", "Gestion Patients", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindowPatient", "Gestion rendez-vous", nullptr));
        label_2->setText(QString());
        pushButton_13->setText(QCoreApplication::translate("MainWindowPatient", "D\303\251connexion", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindowPatient", "Gestion ressources", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindowPatient", "Gestion Vaccins", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700;\">LAKAHNI</span></p></body></html>", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindowPatient", "Gestion employ\303\251s", nullptr));
        label->setText(QString());
        label_10->setText(QString());
        rechercher_Button->setText(QCoreApplication::translate("MainWindowPatient", "Rechercher", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Tri</span></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Recherche</span></p></body></html>", nullptr));
        tri_button->setText(QCoreApplication::translate("MainWindowPatient", "Trier", nullptr));
        label_19->setText(QString());
        label_20->setText(QString());
        export_Button->setText(QCoreApplication::translate("MainWindowPatient", "Export PDF", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindowPatient", "Ajouter ", nullptr));
        Tri_comboBox->setItemText(0, QCoreApplication::translate("MainWindowPatient", "ID", nullptr));
        Tri_comboBox->setItemText(1, QCoreApplication::translate("MainWindowPatient", "Alphabetique", nullptr));

        recherche_comboBox->setItemText(0, QCoreApplication::translate("MainWindowPatient", "ID", nullptr));
        recherche_comboBox->setItemText(1, QCoreApplication::translate("MainWindowPatient", "NOM", nullptr));
        recherche_comboBox->setItemText(2, QCoreApplication::translate("MainWindowPatient", "Date de naissance", nullptr));

        retour_Button->setText(QCoreApplication::translate("MainWindowPatient", "Retour", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindowPatient", "Affichage Liste Patients", nullptr));
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">AJOUT PATIENT</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">ID</span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">NOM</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">TELEPHONE</span></p></body></html>", nullptr));
        nom_line->setText(QString());
        label_22->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">TYPE</span></p></body></html>", nullptr));
        bouton_valider_ajout->setText(QCoreApplication::translate("MainWindowPatient", "Valider", nullptr));
        pushButton_20->setText(QCoreApplication::translate("MainWindowPatient", "Retour", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">PRENOM</span></p></body></html>", nullptr));
        prenom_line->setText(QString());
        label_29->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">DATE DE NAISSANCE</span></p></body></html>", nullptr));
        type_ch1->setText(QCoreApplication::translate("MainWindowPatient", "human", nullptr));
        type_ch2->setText(QCoreApplication::translate("MainWindowPatient", "animal", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">EMAIL</span></p></body></html>", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">ADRESSE</span></p></body></html>", nullptr));
        adresse_line->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindowPatient", "Ajouter Patient", nullptr));
        label_8->setText(QString());
        label_12->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">MODIFICATION INFORMATION PATIENT</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">ID</span></p></body></html>", nullptr));
        valider_button_modif->setText(QCoreApplication::translate("MainWindowPatient", "Valider", nullptr));
        pushButton_22->setText(QCoreApplication::translate("MainWindowPatient", "Retour", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">NOM</span></p></body></html>", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">PRENOM</span></p></body></html>", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">DATE DE NAISSANCE</span></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">TELEPHONE</span></p></body></html>", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">TYPE</span></p></body></html>", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">EMAIL</span></p></body></html>", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">ADRESSE</span></p></body></html>", nullptr));
        type_ch1_modif->setText(QCoreApplication::translate("MainWindowPatient", "human", nullptr));
        type_ch2_modif->setText(QCoreApplication::translate("MainWindowPatient", "animal", nullptr));
        afficher_button_modif->setText(QCoreApplication::translate("MainWindowPatient", "Afficher", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindowPatient", "Modifier Information Patient", nullptr));
        label_38->setText(QString());
        label_39->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">SUPRESSION PATIENT</span></p></body></html>", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">VEUILLEZ ENTRER L'ID : </span></p></body></html>", nullptr));
        id_supression->setText(QString());
        valider_supression->setText(QCoreApplication::translate("MainWindowPatient", "Valider", nullptr));
        pushButton_24->setText(QCoreApplication::translate("MainWindowPatient", "Retour", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("MainWindowPatient", "Supprimer Patient", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">STATISTIQUES</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(stat), QCoreApplication::translate("MainWindowPatient", "Statistiques", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">DIAGNOSTIQUE</span></p></body></html>", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">Entrez l'ID :</span></p></body></html>", nullptr));
        pushButton_23->setText(QCoreApplication::translate("MainWindowPatient", "Valider", nullptr));
        label_36->setText(QString());
        diagnostiquer->setText(QCoreApplication::translate("MainWindowPatient", "Diagnostiquer", nullptr));
        Q1_2->setText(QCoreApplication::translate("MainWindowPatient", "Quels sont vos sympt\303\264mes principaux ?", nullptr));
        Q1_3->setText(QCoreApplication::translate("MainWindowPatient", "Depuis combien de temps ces sympt\303\264mes sont-ils pr\303\251sents ?", nullptr));
        Q1_4->setText(QCoreApplication::translate("MainWindowPatient", "Avez-vous de la fi\303\250vre ou des douleurs ?", nullptr));
        aff_diagno->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindowPatient", "Diagnostique", nullptr));
        label_27->setText(QString());
        label_37->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">RECONNAISANCE EMOTIONNELLE </span></p></body></html>", nullptr));
        Q1->setText(QCoreApplication::translate("MainWindowPatient", " Comment vous sentez-vous physiquement apr\303\250s la vaccination ?", nullptr));
        Q2->setText(QCoreApplication::translate("MainWindowPatient", " Avez-vous ressenti de l\342\200\231anxi\303\251t\303\251 ou du stress avant ou apr\303\250s l\342\200\231injection ?", nullptr));
        Q3->setText(QCoreApplication::translate("MainWindowPatient", " \303\212tes-vous satisfait(e) de la mani\303\250re dont s\342\200\231est d\303\251roul\303\251 votre rendez-vous ?", nullptr));
        Q4->setText(QCoreApplication::translate("MainWindowPatient", " Avez-vous des inqui\303\251tudes concernant les effets secondaires ?", nullptr));
        Q5->setText(QCoreApplication::translate("MainWindowPatient", " Souhaitez-vous partager quelque chose sur votre exp\303\251rience aujourd\342\200\231hui ?", nullptr));
        annul_button->setText(QCoreApplication::translate("MainWindowPatient", "Annuler", nullptr));
        val_button->setText(QCoreApplication::translate("MainWindowPatient", "Valider", nullptr));
        aff_resul->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Emotions), QCoreApplication::translate("MainWindowPatient", "Reconnaisance Emotionnelle", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindowPatient", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">DASHBOARD</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowPatient: public Ui_MainWindowPatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWPATIENT_H
