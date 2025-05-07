/********************************************************************************
** Form generated from reading UI file 'gressource.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRESSOURCE_H
#define UI_GRESSOURCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gressource
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_9;
    QPushButton *pushButton_4;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton_13;
    QPushButton *pushButton_6;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *recherchetext;
    QLabel *label_10;
    QComboBox *critere_recherche;
    QPushButton *Rechercher;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_19;
    QLabel *label_20;
    QPushButton *export_pdf;
    QPushButton *pushButton_11;
    QTableView *tableView;
    QLabel *label_18;
    QLabel *label_28;
    QLineEdit *suppref;
    QPushButton *supprimer;
    QPushButton *trier;
    QComboBox *critere_tri;
    QComboBox *ordre_tri;
    QPushButton *pushButton_12;
    QWidget *tab_2;
    QRadioButton *hstock;
    QLabel *label_4;
    QRadioButton *dispo;
    QLabel *label_5;
    QLabel *label_21;
    QLabel *label_13;
    QLineEdit *nom;
    QLabel *label_22;
    QLabel *label_23;
    QPushButton *valider_ajout;
    QPushButton *retour_ajout;
    QSpinBox *qteSpinBox;
    QDoubleSpinBox *PrixSpinbox;
    QWidget *tab_5;
    QLabel *label_8;
    QLineEdit *ref;
    QRadioButton *dispom;
    QLabel *label_9;
    QLineEdit *qtem;
    QLabel *label_24;
    QLineEdit *nomm;
    QRadioButton *horsstockm;
    QLineEdit *prixm;
    QLabel *label_25;
    QLabel *label_26;
    QPushButton *pushButton_21;
    QLabel *label_27;
    QPushButton *recherche_modif;
    QLabel *label_12;
    QWidget *tab_ia;
    QLabel *label_17;
    QLabel *label_11;
    QPushButton *pushButton;
    QLabel *imageLabel;
    QPushButton *playAudioButton;
    QLabel *equipmentLabel;
    QLabel *label_14;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gressource)
    {
        if (gressource->objectName().isEmpty())
            gressource->setObjectName("gressource");
        gressource->resize(1201, 733);
        gressource->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 217, 217)"));
        centralwidget = new QWidget(gressource);
        centralwidget->setObjectName("centralwidget");
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(40, 580, 151, 41));
        QFont font;
        font.setBold(true);
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
"color: rgb(255, 255, 255);"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(40, 210, 151, 41));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
"color: rgb(255, 255, 255);"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 60, 101, 20));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 110, 151, 51));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
"color: rgb(255, 255, 255);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 130, 171, 551));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(-10, -30, 1211, 131));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(1030, 40, 131, 29));
        pushButton_13->setFont(font);
        pushButton_13->setStyleSheet(QString::fromUtf8("color : white;\n"
"background-color: rgb(81, 182, 182);"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(40, 310, 151, 41));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
"color: rgb(255, 255, 255);"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(220, 120, 941, 561));
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8("/*background-color: rgb(81, 182, 182);*/\n"
"QTabBar::tab {\n"
"	background-color: #d5f1f0;\n"
"	color: Black;\n"
"    border: 1px solid #C2C7CB; /* Bordure */\n"
"    border-bottom-color: transparent; /* Supprime la bordure inf\303\251rieure */\n"
"    min-width: 8ex;\n"
"    padding: 2px 10px;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background-color: #E0E0E0; /* Couleur de fond de l'onglet s\303\251lectionn\303\251 */\n"
"    border-color: #C2C7CB;\n"
"    border-bottom-color: transparent;\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"    background-color: #F0F0F0; /* Couleur de fond de l'onglet survol\303\251 */\n"
"}\n"
"\n"
"\n"
"\n"
""));
        tab = new QWidget();
        tab->setObjectName("tab");
        recherchetext = new QLineEdit(tab);
        recherchetext->setObjectName("recherchetext");
        recherchetext->setGeometry(QRect(180, 60, 113, 28));
        recherchetext->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: black;"));
        label_10 = new QLabel(tab);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 20, 301, 111));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        critere_recherche = new QComboBox(tab);
        critere_recherche->addItem(QString());
        critere_recherche->addItem(QString());
        critere_recherche->setObjectName("critere_recherche");
        critere_recherche->setGeometry(QRect(20, 60, 111, 28));
        critere_recherche->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Rechercher = new QPushButton(tab);
        Rechercher->setObjectName("Rechercher");
        Rechercher->setGeometry(QRect(100, 90, 101, 31));
        Rechercher->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: lightblue; /* Couleur de fond par d\303\251faut */\n"
"    color: black; /* Couleur du texte par d\303\251faut */\n"
"    border: 1px solid gray; /* Bordure par d\303\251faut */\n"
"    padding: 5px; /* Marge interne par d\303\251faut */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(5, 105, 107); /* Couleur de fond lorsque la souris est dessus */\n"
"    color: white; /* Couleur du texte lorsque la souris est dessus */\n"
"}"));
        label_15 = new QLabel(tab);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(410, 10, 141, 41));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
"color: rgb(255, 255, 255);"));
        label_16 = new QLabel(tab);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(80, 10, 161, 41));
        label_16->setFont(font);
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
"color: rgb(255, 255, 255);"));
        label_19 = new QLabel(tab);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(330, 20, 301, 111));
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        label_20 = new QLabel(tab);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(10, 140, 921, 371));
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        export_pdf = new QPushButton(tab);
        export_pdf->setObjectName("export_pdf");
        export_pdf->setGeometry(QRect(420, 470, 131, 29));
        export_pdf->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: lightblue; /* Couleur de fond par d\303\251faut */\n"
"    color: black; /* Couleur du texte par d\303\251faut */\n"
"    border: 1px solid gray; /* Bordure par d\303\251faut */\n"
"    padding: 5px; /* Marge interne par d\303\251faut */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(5, 105, 107); /* Couleur de fond lorsque la souris est dessus */\n"
"    color: white; /* Couleur du texte lorsque la souris est dessus */\n"
"}"));
        pushButton_11 = new QPushButton(tab);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(160, 470, 131, 29));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: lightblue; /* Couleur de fond par d\303\251faut */\n"
"    color: black; /* Couleur du texte par d\303\251faut */\n"
"    border: 1px solid gray; /* Bordure par d\303\251faut */\n"
"    padding: 5px; /* Marge interne par d\303\251faut */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(5, 105, 107); /* Couleur de fond lorsque la souris est dessus */\n"
"    color: white; /* Couleur du texte lorsque la souris est dessus */\n"
"}"));
        tableView = new QTableView(tab);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(50, 170, 851, 281));
        tableView->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background-color:rgb(5, 105, 107); /* Couleur de fond du tableau */\n"
"    border: 1px solid #C2C7CB; /* Bordure du tableau */\n"
"    gridline-color: #E0E0E0; /* Couleur des lignes de la grille */\n"
"    selection-background-color: #AEC6CF; /* Couleur de fond de la s\303\251lection */\n"
"    selection-color: black; /* Couleur du texte de la s\303\251lection */\n"
"}\n"
"\n"
"QTableView::item {\n"
"    padding: 5px; /* Marge interne des cellules */\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #AEC6CF; /* Couleur de fond de la cellule s\303\251lectionn\303\251e */\n"
"    color: black; /* Couleur du texte de la cellule s\303\251lectionn\303\251e */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #F0F0F0; /* Couleur de fond des en-t\303\252tes */\n"
"	color:black;\n"
"    border: 1px solid #C2C7CB; /* Bordure des en-t\303\252tes */\n"
"    padding: 5px; /* Marge interne des en-t\303\252tes */\n"
"}\n"
"\n"
"QHeaderView::section:checked {\n"
"    bac"
                        "kground-color: #D0D0D0; /* Couleur de fond de l'en-t\303\252te coch\303\251 */\n"
"}\n"
"\n"
"QHeaderView::section:hover {\n"
"    background-color: #E0E0E0; /* Couleur de fond de l'en-t\303\252te survol\303\251 */\n"
"}"));
        label_18 = new QLabel(tab);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(730, 10, 141, 41));
        label_18->setFont(font);
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
"color: rgb(255, 255, 255);"));
        label_28 = new QLabel(tab);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(650, 20, 281, 111));
        label_28->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        suppref = new QLineEdit(tab);
        suppref->setObjectName("suppref");
        suppref->setGeometry(QRect(670, 70, 113, 28));
        suppref->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        supprimer = new QPushButton(tab);
        supprimer->setObjectName("supprimer");
        supprimer->setGeometry(QRect(820, 70, 91, 31));
        supprimer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: lightblue; /* Couleur de fond par d\303\251faut */\n"
"    color: black; /* Couleur du texte par d\303\251faut */\n"
"    border: 1px solid gray; /* Bordure par d\303\251faut */\n"
"    padding: 5px; /* Marge interne par d\303\251faut */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(5, 105, 107); /* Couleur de fond lorsque la souris est dessus */\n"
"    color: white; /* Couleur du texte lorsque la souris est dessus */\n"
"}"));
        trier = new QPushButton(tab);
        trier->setObjectName("trier");
        trier->setGeometry(QRect(440, 90, 91, 31));
        trier->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: lightblue; /* Couleur de fond par d\303\251faut */\n"
"    color: black; /* Couleur du texte par d\303\251faut */\n"
"    border: 1px solid gray; /* Bordure par d\303\251faut */\n"
"    padding: 5px; /* Marge interne par d\303\251faut */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(5, 105, 107); /* Couleur de fond lorsque la souris est dessus */\n"
"    color: white; /* Couleur du texte lorsque la souris est dessus */\n"
"}"));
        critere_tri = new QComboBox(tab);
        critere_tri->addItem(QString());
        critere_tri->addItem(QString());
        critere_tri->addItem(QString());
        critere_tri->addItem(QString());
        critere_tri->addItem(QString());
        critere_tri->setObjectName("critere_tri");
        critere_tri->setEnabled(true);
        critere_tri->setGeometry(QRect(340, 60, 111, 28));
        critere_tri->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;"));
        ordre_tri = new QComboBox(tab);
        ordre_tri->addItem(QString());
        ordre_tri->addItem(QString());
        ordre_tri->setObjectName("ordre_tri");
        ordre_tri->setEnabled(true);
        ordre_tri->setGeometry(QRect(520, 60, 101, 28));
        ordre_tri->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;"));
        pushButton_12 = new QPushButton(tab);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(690, 470, 131, 29));
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: lightblue; /* Couleur de fond par d\303\251faut */\n"
"    color: black; /* Couleur du texte par d\303\251faut */\n"
"    border: 1px solid gray; /* Bordure par d\303\251faut */\n"
"    padding: 5px; /* Marge interne par d\303\251faut */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(5, 105, 107); /* Couleur de fond lorsque la souris est dessus */\n"
"    color: white; /* Couleur du texte lorsque la souris est dessus */\n"
"}"));
        tabWidget->addTab(tab, QString());
        label_28->raise();
        label_20->raise();
        label_19->raise();
        label_10->raise();
        recherchetext->raise();
        critere_recherche->raise();
        Rechercher->raise();
        label_15->raise();
        label_16->raise();
        export_pdf->raise();
        pushButton_11->raise();
        tableView->raise();
        label_18->raise();
        suppref->raise();
        supprimer->raise();
        trier->raise();
        critere_tri->raise();
        ordre_tri->raise();
        pushButton_12->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        hstock = new QRadioButton(tab_2);
        hstock->setObjectName("hstock");
        hstock->setGeometry(QRect(380, 370, 141, 31));
        hstock->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color : black\n"
""));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 50, 921, 471));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        dispo = new QRadioButton(tab_2);
        dispo->setObjectName("dispo");
        dispo->setGeometry(QRect(380, 340, 141, 26));
        dispo->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color : black;\n"
""));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(300, 30, 291, 41));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
"color: rgb(255, 255, 255);"));
        label_21 = new QLabel(tab_2);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(50, 110, 121, 31));
        QFont font1;
        font1.setBold(true);
        font1.setKerning(true);
        label_21->setFont(font1);
        label_21->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
"color: rgb(255, 255, 255);"));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(390, 110, 121, 31));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
"color: rgb(255, 255, 255);"));
        nom = new QLineEdit(tab_2);
        nom->setObjectName("nom");
        nom->setGeometry(QRect(30, 150, 161, 28));
        nom->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0)"));
        label_22 = new QLabel(tab_2);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(40, 300, 121, 31));
        label_22->setFont(font1);
        label_22->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
"color: rgb(255, 255, 255);"));
        label_23 = new QLabel(tab_2);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(390, 290, 121, 31));
        label_23->setFont(font1);
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
"color: rgb(255, 255, 255);"));
        valider_ajout = new QPushButton(tab_2);
        valider_ajout->setObjectName("valider_ajout");
        valider_ajout->setGeometry(QRect(720, 230, 121, 41));
        valider_ajout->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: lightblue; /* Couleur de fond par d\303\251faut */\n"
"    color: black; /* Couleur du texte par d\303\251faut */\n"
"    border: 1px solid gray; /* Bordure par d\303\251faut */\n"
"    padding: 5px; /* Marge interne par d\303\251faut */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(5, 105, 107); /* Couleur de fond lorsque la souris est dessus */\n"
"    color: white; /* Couleur du texte lorsque la souris est dessus */\n"
"}"));
        retour_ajout = new QPushButton(tab_2);
        retour_ajout->setObjectName("retour_ajout");
        retour_ajout->setGeometry(QRect(720, 300, 121, 41));
        retour_ajout->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: lightblue; /* Couleur de fond par d\303\251faut */\n"
"    color: black; /* Couleur du texte par d\303\251faut */\n"
"    border: 1px solid gray; /* Bordure par d\303\251faut */\n"
"    padding: 5px; /* Marge interne par d\303\251faut */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(5, 105, 107); /* Couleur de fond lorsque la souris est dessus */\n"
"    color: white; /* Couleur du texte lorsque la souris est dessus */\n"
"}"));
        qteSpinBox = new QSpinBox(tab_2);
        qteSpinBox->setObjectName("qteSpinBox");
        qteSpinBox->setGeometry(QRect(380, 150, 151, 31));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qteSpinBox->sizePolicy().hasHeightForWidth());
        qteSpinBox->setSizePolicy(sizePolicy);
        qteSpinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0)"));
        PrixSpinbox = new QDoubleSpinBox(tab_2);
        PrixSpinbox->setObjectName("PrixSpinbox");
        PrixSpinbox->setGeometry(QRect(30, 350, 141, 31));
        PrixSpinbox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0)"));
        tabWidget->addTab(tab_2, QString());
        label_4->raise();
        hstock->raise();
        dispo->raise();
        label_5->raise();
        label_21->raise();
        label_13->raise();
        nom->raise();
        label_22->raise();
        label_23->raise();
        valider_ajout->raise();
        retour_ajout->raise();
        qteSpinBox->raise();
        PrixSpinbox->raise();
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        label_8 = new QLabel(tab_5);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 50, 921, 471));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        ref = new QLineEdit(tab_5);
        ref->setObjectName("ref");
        ref->setGeometry(QRect(750, 150, 161, 28));
        ref->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        dispom = new QRadioButton(tab_5);
        dispom->setObjectName("dispom");
        dispom->setGeometry(QRect(420, 150, 121, 26));
        dispom->setFont(font);
        dispom->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);\n"
"color : black;\n"
""));
        label_9 = new QLabel(tab_5);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(770, 110, 121, 31));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
"color: rgb(255, 255, 255);"));
        qtem = new QLineEdit(tab_5);
        qtem->setObjectName("qtem");
        qtem->setGeometry(QRect(30, 340, 161, 31));
        qtem->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0)"));
        label_24 = new QLabel(tab_5);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(60, 120, 121, 31));
        label_24->setFont(font1);
        label_24->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
"color: rgb(255, 255, 255);"));
        nomm = new QLineEdit(tab_5);
        nomm->setObjectName("nomm");
        nomm->setGeometry(QRect(40, 160, 161, 28));
        nomm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0)"));
        horsstockm = new QRadioButton(tab_5);
        horsstockm->setObjectName("horsstockm");
        horsstockm->setGeometry(QRect(420, 180, 121, 31));
        horsstockm->setFont(font);
        horsstockm->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);\n"
"color : black\n"
""));
        prixm = new QLineEdit(tab_5);
        prixm->setObjectName("prixm");
        prixm->setGeometry(QRect(380, 340, 161, 31));
        prixm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0)"));
        label_25 = new QLabel(tab_5);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(420, 110, 121, 31));
        label_25->setFont(font1);
        label_25->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
"color: rgb(255, 255, 255);"));
        label_26 = new QLabel(tab_5);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(400, 300, 121, 31));
        label_26->setFont(font1);
        label_26->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
"color: rgb(255, 255, 255);"));
        pushButton_21 = new QPushButton(tab_5);
        pushButton_21->setObjectName("pushButton_21");
        pushButton_21->setGeometry(QRect(750, 370, 121, 41));
        QFont font2;
        font2.setBold(false);
        pushButton_21->setFont(font2);
        pushButton_21->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: lightblue; /* Couleur de fond par d\303\251faut */\n"
"    color: black; /* Couleur du texte par d\303\251faut */\n"
"    border: 1px solid gray; /* Bordure par d\303\251faut */\n"
"    padding: 5px; /* Marge interne par d\303\251faut */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(5, 105, 107); /* Couleur de fond lorsque la souris est dessus */\n"
"    color: white; /* Couleur du texte lorsque la souris est dessus */\n"
"}QPushButton {\n"
"    background-color: lightblue; /* Couleur de fond par d\303\251faut */\n"
"    color: black; /* Couleur du texte par d\303\251faut */\n"
"    border: 1px solid gray; /* Bordure par d\303\251faut */\n"
"    padding: 5px; /* Marge interne par d\303\251faut */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(5, 105, 107); /* Couleur de fond lorsque la souris est dessus */\n"
"    color: white; /* Couleur du texte lorsque la souris est dessus */\n"
"}"));
        label_27 = new QLabel(tab_5);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(50, 300, 121, 31));
        label_27->setFont(font1);
        label_27->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
"color: rgb(255, 255, 255);"));
        recherche_modif = new QPushButton(tab_5);
        recherche_modif->setObjectName("recherche_modif");
        recherche_modif->setGeometry(QRect(790, 190, 91, 31));
        recherche_modif->setFont(font2);
        recherche_modif->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: lightblue; \n"
"  color: black;\n"
"    border: 1px solid gray; \n"
"    padding: 5px; /* Marge interne par d\303\251faut */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(5, 105, 107); /* Couleur de fond lorsque la souris est dessus */\n"
"    color: white; /* Couleur du texte lorsque la souris est dessus */\n"
"}"));
        label_12 = new QLabel(tab_5);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(300, 30, 291, 41));
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
"color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_5, QString());
        tab_ia = new QWidget();
        tab_ia->setObjectName("tab_ia");
        label_17 = new QLabel(tab_ia);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(290, 30, 291, 41));
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_11 = new QLabel(tab_ia);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 50, 901, 471));
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        pushButton = new QPushButton(tab_ia);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(490, 230, 151, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: lightblue; /* Couleur de fond par d\303\251faut */\n"
"    color: black; /* Couleur du texte par d\303\251faut */\n"
"    border: 1px solid gray; /* Bordure par d\303\251faut */\n"
"    padding: 5px; /* Marge interne par d\303\251faut */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(5, 105, 107); /* Couleur de fond lorsque la souris est dessus */\n"
"    color: white; /* Couleur du texte lorsque la souris est dessus */\n"
"}\n"
""));
        imageLabel = new QLabel(tab_ia);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(60, 90, 311, 281));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(imageLabel->sizePolicy().hasHeightForWidth());
        imageLabel->setSizePolicy(sizePolicy1);
        imageLabel->setScaledContents(true);
        playAudioButton = new QPushButton(tab_ia);
        playAudioButton->setObjectName("playAudioButton");
        playAudioButton->setGeometry(QRect(700, 230, 151, 51));
        playAudioButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: lightblue; /* Couleur de fond par d\303\251faut */\n"
"    color: black; /* Couleur du texte par d\303\251faut */\n"
"    border: 1px solid gray; /* Bordure par d\303\251faut */\n"
"    padding: 5px; /* Marge interne par d\303\251faut */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(5, 105, 107); /* Couleur de fond lorsque la souris est dessus */\n"
"    color: white; /* Couleur du texte lorsque la souris est dessus */\n"
"}\n"
""));
        equipmentLabel = new QLabel(tab_ia);
        equipmentLabel->setObjectName("equipmentLabel");
        equipmentLabel->setGeometry(QRect(120, 400, 191, 41));
        equipmentLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        tabWidget->addTab(tab_ia, QString());
        label_11->raise();
        label_17->raise();
        pushButton->raise();
        imageLabel->raise();
        playAudioButton->raise();
        equipmentLabel->raise();
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(20, -20, 131, 121));
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);"));
        label_14->setTextFormat(Qt::TextFormat::RichText);
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/new/user/imgs/Vaxhaven__6_-removebg-preview (1).png")));
        label_14->setScaledContents(true);
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(40, 500, 151, 41));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
"color: rgb(255, 255, 255);"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(40, 400, 151, 41));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 105, 107);\n"
"color: rgb(255, 255, 255);"));
        gressource->setCentralWidget(centralwidget);
        label->raise();
        label_2->raise();
        pushButton_9->raise();
        pushButton_4->raise();
        pushButton_13->raise();
        pushButton_6->raise();
        tabWidget->raise();
        pushButton_8->raise();
        pushButton_7->raise();
        label_3->raise();
        label_14->raise();
        label_7->raise();
        menubar = new QMenuBar(gressource);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1201, 25));
        gressource->setMenuBar(menubar);
        statusbar = new QStatusBar(gressource);
        statusbar->setObjectName("statusbar");
        gressource->setStatusBar(statusbar);

        retranslateUi(gressource);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gressource);
    } // setupUi

    void retranslateUi(QMainWindow *gressource)
    {
        gressource->setWindowTitle(QCoreApplication::translate("gressource", "MainWindow", nullptr));
        pushButton_9->setText(QCoreApplication::translate("gressource", "Gestion Vaccins", nullptr));
        pushButton_4->setText(QCoreApplication::translate("gressource", "Gestion Patients", nullptr));
        label_7->setText(QCoreApplication::translate("gressource", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700;\">LAKAHNI</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("gressource", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">DASHBOARD</span></p></body></html>", nullptr));
        label_2->setText(QString());
        label->setText(QString());
        pushButton_13->setText(QCoreApplication::translate("gressource", "D\303\251connexion", nullptr));
        pushButton_6->setText(QCoreApplication::translate("gressource", "Gestion employ\303\251s", nullptr));
        label_10->setText(QString());
        critere_recherche->setItemText(0, QCoreApplication::translate("gressource", "REFERENCE", nullptr));
        critere_recherche->setItemText(1, QCoreApplication::translate("gressource", "NOM", nullptr));

        Rechercher->setText(QCoreApplication::translate("gressource", "Rechercher", nullptr));
        label_15->setText(QCoreApplication::translate("gressource", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Tri</span></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("gressource", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Recherche</span></p></body></html>", nullptr));
        label_19->setText(QString());
        label_20->setText(QString());
        export_pdf->setText(QCoreApplication::translate("gressource", "Export PDF", nullptr));
        pushButton_11->setText(QCoreApplication::translate("gressource", "Statistiques", nullptr));
        label_18->setText(QCoreApplication::translate("gressource", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Suppression</span></p></body></html>", nullptr));
        label_28->setText(QString());
        supprimer->setText(QCoreApplication::translate("gressource", "Supprimer", nullptr));
        trier->setText(QCoreApplication::translate("gressource", "Trier", nullptr));
        critere_tri->setItemText(0, QCoreApplication::translate("gressource", "REFERENCE", nullptr));
        critere_tri->setItemText(1, QCoreApplication::translate("gressource", "NOM", nullptr));
        critere_tri->setItemText(2, QCoreApplication::translate("gressource", "ETAT", nullptr));
        critere_tri->setItemText(3, QCoreApplication::translate("gressource", "QUANTITE", nullptr));
        critere_tri->setItemText(4, QCoreApplication::translate("gressource", "PRIX", nullptr));

        ordre_tri->setItemText(0, QCoreApplication::translate("gressource", "ASC", nullptr));
        ordre_tri->setItemText(1, QCoreApplication::translate("gressource", "DESC", nullptr));

        pushButton_12->setText(QCoreApplication::translate("gressource", "Refresh", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("gressource", "Affichage ressource", nullptr));
        hstock->setText(QCoreApplication::translate("gressource", "Hors stock", nullptr));
        label_4->setText(QString());
        dispo->setText(QCoreApplication::translate("gressource", "Disponible", nullptr));
        label_5->setText(QCoreApplication::translate("gressource", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">AJOUT RESSOURCE</span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("gressource", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">Nom</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("gressource", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">Quantit\303\251</span></p></body></html>", nullptr));
        label_22->setText(QCoreApplication::translate("gressource", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700;\">Prix</span></p></body></html>", nullptr));
        label_23->setText(QCoreApplication::translate("gressource", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">Etat</span></p></body></html>", nullptr));
        valider_ajout->setText(QCoreApplication::translate("gressource", "Valider", nullptr));
        retour_ajout->setText(QCoreApplication::translate("gressource", "Retour", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("gressource", "Ajouter ressource", nullptr));
        label_8->setText(QString());
        dispom->setText(QCoreApplication::translate("gressource", "Disponible", nullptr));
        label_9->setText(QCoreApplication::translate("gressource", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">R\303\251f\303\251rence</span></p></body></html>", nullptr));
        label_24->setText(QCoreApplication::translate("gressource", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">Nom</span></p></body></html>", nullptr));
        horsstockm->setText(QCoreApplication::translate("gressource", "Hors stock", nullptr));
        prixm->setText(QString());
        label_25->setText(QCoreApplication::translate("gressource", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">Etat</span></p></body></html>", nullptr));
        label_26->setText(QCoreApplication::translate("gressource", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700;\">Prix</span></p></body></html>", nullptr));
        pushButton_21->setText(QCoreApplication::translate("gressource", "Valider", nullptr));
        label_27->setText(QCoreApplication::translate("gressource", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; font-style:italic;\">Quantit\303\251</span></p></body></html>", nullptr));
        recherche_modif->setText(QCoreApplication::translate("gressource", "Recherche", nullptr));
        label_12->setText(QCoreApplication::translate("gressource", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">MODIFIER RESSOURCE</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("gressource", "Modifier ressource", nullptr));
        label_17->setText(QCoreApplication::translate("gressource", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">RECONNAISSANCE OBJETS </span></p></body></html>", nullptr));
        label_11->setText(QString());
        pushButton->setText(QCoreApplication::translate("gressource", "Donner image", nullptr));
        imageLabel->setText(QString());
        playAudioButton->setText(QCoreApplication::translate("gressource", "Audio", nullptr));
        equipmentLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_ia), QCoreApplication::translate("gressource", "Reconnaissance des  objets", nullptr));
        label_14->setText(QString());
        pushButton_8->setText(QCoreApplication::translate("gressource", "Gestion rendez-vous", nullptr));
        pushButton_7->setText(QCoreApplication::translate("gressource", "Gestion ressources", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gressource: public Ui_gressource {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRESSOURCE_H
