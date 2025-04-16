#include "employee.h"
#include <QSqlQuery>
#include <QFileDialog>
#include <QPdfWriter>
#include <QTextDocument>
#include <QPainter>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsTextItem>
#include <QGraphicsPathItem>
#include <QPainterPath>
#include <QBrush>
#include <QSqlQuery>
#include <QMap>
#include <QColor>
#include <QGraphicsEllipseItem>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QFont>


employee::employee() : ID_EMP(1), SALAIRE(0.0), NOM(""), PRENOM(""), POSTE(""), MDP(""), EMAIL(""), IMAGE(QByteArray()), DATE_EMB(QDate()) {}

employee::employee(int id,QString nom, QString prenom, QString poste, float salaire, QString mdp, QString email, QDate date_emb,QByteArray image)
    :ID_EMP(id), NOM(nom), PRENOM(prenom), POSTE(poste), SALAIRE(salaire), MDP(mdp), EMAIL(email), DATE_EMB(date_emb),IMAGE(image) {}


//ajouter
bool employee::ajouter() {
    QSqlQuery query;
    query.prepare("INSERT INTO employés (ID_EMP,NOM, PRENOM, POSTE, SALAIRE, MDP, EMAIL, DATE_EMB,IMAGE) "
                  "VALUES (:ID_EMP, :NOM, :PRENOM, :POSTE, :SALAIRE, :MDP, :EMAIL, :DATE_EMB, :IMAGE)");
    query.bindValue(":ID_EMP", ID_EMP);
    query.bindValue(":NOM", NOM);
    query.bindValue(":PRENOM", PRENOM);
    query.bindValue(":POSTE", POSTE);
    query.bindValue(":SALAIRE", SALAIRE);
    query.bindValue(":MDP", MDP);
    query.bindValue(":IMAGE", IMAGE);
    query.bindValue(":EMAIL", EMAIL);
    query.bindValue(":DATE_EMB", DATE_EMB);
    return query.exec();
}



//affichage
QSqlQueryModel* employee::afficher() {
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM employés");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_EMP"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("POSTE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("SALAIRE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("DATE_EMB"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("EMAIL"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("MDP"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("IMAGE"));
    return model;
}

//supprimer
bool employee::supprimer(int id) {
    QSqlQuery query;
    query.prepare("DELETE FROM employés WHERE ID_EMP = :ID_EMP");
    query.bindValue(":ID_EMP", id);
    return query.exec();
}


//modifier
bool employee::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE employés SET NOM=:NOM, PRENOM=:PRENOM, POSTE=:POSTE, SALAIRE=:SALAIRE, MDP=:MDP, EMAIL=:EMAIL, DATE_EMB=:DATE_EMB, IMAGE=:IMAGE WHERE ID_EMP=:ID_EMP");

    query.bindValue(":ID_EMP", ID_EMP);
    query.bindValue(":NOM", NOM);
    query.bindValue(":PRENOM", PRENOM);
    query.bindValue(":POSTE", POSTE);
    query.bindValue(":SALAIRE", SALAIRE);
    query.bindValue(":MDP", MDP);
    query.bindValue(":EMAIL", EMAIL);
    query.bindValue(":IMAGE", IMAGE);
    query.bindValue(":DATE_EMB", DATE_EMB);

    return query.exec();
}


//recupération pour la modification
bool employee::recuperer(int id)
{
    QSqlQuery query;
    query.prepare("SELECT NOM, PRENOM, POSTE, SALAIRE, MDP, EMAIL, DATE_EMB, IMAGE FROM employés WHERE ID_EMP = :ID_EMP");
    query.bindValue(":ID_EMP", id);

    if (query.exec() && query.next()) {  // Vérifier si on trouve un employé
        NOM = query.value(0).toString();
        PRENOM = query.value(1).toString();
        POSTE = query.value(2).toString();
        SALAIRE = query.value(3).toFloat();
        MDP = query.value(4).toString();
        EMAIL = query.value(5).toString();
        DATE_EMB = query.value(6).toDate();
        IMAGE = query.value(7).toByteArray();

        return true;  // Employé trouvé
    }
    return false;  // Aucun employé trouvé
}


//pdf
bool employee::exportToPDF(const QString& filePath)
{
    // Création du fichier pdf
    QPdfWriter pdfWriter(filePath);
    pdfWriter.setPageSize(QPageSize::A3); // Format de page A4
    pdfWriter.setPageMargins(QMarginsF(15, 15, 15, 15)); // Marges de la page

    QPainter painter(&pdfWriter);
    painter.setFont(QFont("Arial", 12));

    // Titre
    painter.setPen(Qt::red);
    painter.setFont(QFont("Impact", 30));
    painter.drawText(4000, 2000, "Liste des employés");

    //logo mtaa lakahni
    QPixmap logo("C:/Users/VIVOBOOK/Downloads/Vaxhaven__6_-removebg-preview");

    // Dessiner l'image dans le PDF
    if (!logo.isNull()) {
        painter.drawPixmap(-100, -500, 2200, 2200, logo); // (x, y, largeur, hauteur)
    }


    // En-tête du tableau
    painter.setPen(Qt::black);
    painter.setFont(QFont("Impact", 11));
    painter.drawRect(0, 3000, 12000 , 500); // Rectangle pour l'en-tête

    // Positions  des colonnes
    int col1 = 200;   // ID_Emp
    int col2 = 1500;  // Nom
    int col3 = 3000;  // Prenom
    int col4 = 4500;  // Poste
    int col5 = 6000;  // Salaire
    int col6 = 7500;  // MDP
    int col7 = 9000;  // Email
    int col8 = 10500; // Date Embauche

    // Dessiner les en-têtes des colonnes
    painter.drawText(col1, 3300, "ID_Emp");
    painter.drawText(col2, 3300, "Nom");
    painter.drawText(col3, 3300, "Prenom");
    painter.drawText(col4, 3300, "Poste");
    painter.drawText(col5, 3300, "Salaire");
    painter.drawText(col6, 3300, "MDP");
    painter.drawText(col7, 3300, "Email");
    painter.drawText(col8, 3300, "Date Embauche");

    // Récupération des données depuis la base de données
    QSqlQuery query;
    query.prepare("SELECT * FROM employés");
    if (!query.exec())
    {
        return false; // Erreur lors de l'exécution de la requête SQL
    }

    // Écriture des données dans le PDF
    int i = 4000; // Position verticale initiale pour les données
    painter.setFont(QFont("Arial", 9));
    while (query.next())
    {
        painter.drawText(col1, i, query.value("ID_EMP").toString()); // ID_Emp
        painter.drawText(col2, i, query.value("NOM").toString()); // Nom
        painter.drawText(col3, i, query.value("PRENOM").toString()); // Prenom
        painter.drawText(col4, i, query.value("POSTE").toString()); // Poste
        painter.drawText(col5, i, QString::number(query.value("SALAIRE").toDouble(), 'f', 2)); // Salaire
        painter.drawText(col6, i, query.value("MDP").toString()); // MDP
        painter.drawText(col7, i, query.value("EMAIL").toString()); // Email
        painter.drawText(col8, i, query.value("DATE_EMB").toDate().toString("dd/MM/yyyy")); // Date Embauche

        i += 500; // Décalage vertical bch netaadew ll ligne li baadha

        // Si on dépasse la hauteur de la page, on passe à la page suivante
        if (i > 7000)
        {
            pdfWriter.newPage();
            i = 4000; // Réinitialiser la position verticale
        }
    }

    painter.drawRect(0, 3000, 12000, i - 3000);

    painter.end();

    return true;
}

//tri
QSqlQueryModel* employee::trier(int test)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;

    switch (test)
    {
    case 1:
        query.prepare("SELECT * FROM employés ORDER BY ID_EMP ASC"); // Tri par ID
        break;
    case 2:
        query.prepare("SELECT * FROM employés ORDER BY SALAIRE ASC"); // Tri par salaire
        break;
    case 3:
        query.prepare("SELECT * FROM employés  ORDER BY NOM ASC"); // Tri par nom
        break;
    case 4:
        query.prepare("SELECT * FROM employés  ORDER BY DATE_EMB ASC"); // Tri par date d'embauche
        break;
    default:
        query.prepare("SELECT * FROM employés  ORDER BY ID_EMP ASC");
        break;
    }

    if (query.exec())
    {
        model->setQuery(std::move(query));
    }

    return model;
}


//recherche
QSqlQueryModel* employee::recherche(int id)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;


    query.prepare("SELECT * FROM employés WHERE ID_EMP = :id");
    query.bindValue(":id", id);

    if (query.exec())
    {
        model->setQuery(std::move(query));
    }

    return model;
}


//stat
/*QGraphicsView* employee::statistiquesPoste() {
    QGraphicsScene *scene = new QGraphicsScene();

    QSqlQuery query;
    query.prepare("SELECT POSTE, COUNT(*) FROM employés GROUP BY POSTE");

    QMap<QString, int> postes;
    int total = 0;

    if (query.exec()) {
        while (query.next()) {
            QString poste = query.value(0).toString();
            int count = query.value(1).toInt();
            postes[poste] = count;
            total += count;
        }
    }

    if (total == 0) return new QGraphicsView(scene); // Éviter division par zéro

    // Nouvelle palette de couleurs modernes et harmonieuses
    QList<QColor> couleurs = {
        QColor(41, 128, 185),  // Bleu profond
        QColor(231, 76, 60),   // Rouge doux
        QColor(241, 196, 15),  // Jaune doré
        QColor(211, 84, 0)     // Orange chaud
    };

    int couleurIndex = 0;
    int startAngle = 0;

    // Parcours de la QMap
    for (QMap<QString, int>::iterator it = postes.begin(); it != postes.end(); ++it) {
        double percentage = (double(it.value()) / total) * 100.0;
        int spanAngle = int((percentage / 100.0) * 360 * 16);

        // Dessiner un segment de camembert
        QGraphicsEllipseItem *segment = new QGraphicsEllipseItem(0, 0, 200, 200);
        segment->setBrush(QBrush(couleurs[couleurIndex % couleurs.size()])); // Utilisation des nouvelles couleurs
        segment->setStartAngle(startAngle);
        segment->setSpanAngle(spanAngle);
        scene->addItem(segment);

        // Ajouter un carré de couleur à côté du texte
        QGraphicsRectItem *colorSquare = new QGraphicsRectItem(220, couleurIndex * 50, 15, 15); // Carré de 15x15
        colorSquare->setBrush(QBrush(couleurs[couleurIndex % couleurs.size()])); // Même couleur que le segment
        scene->addItem(colorSquare);

        // Ajouter un texte lisible
        QGraphicsTextItem *text = new QGraphicsTextItem(it.key() + QString(" (%1%)").arg(percentage, 0, 'f', 1));
        text->setDefaultTextColor(Qt::black);
        text->setFont(QFont("Arial", 10, QFont::Bold));
        text->setPos(240, couleurIndex * 50); // Ajustement de la position (décalé pour laisser de la place au carré)
        scene->addItem(text);

        startAngle += spanAngle;
        couleurIndex++;
    }

    // Création et retour de la vue
    QGraphicsView *view = new QGraphicsView(scene);
    return view;
}*/


QGraphicsView* employee::statistiquesPoste() {
    QGraphicsScene *scene = new QGraphicsScene();

    QSqlQuery query("SELECT POSTE, COUNT(*) FROM employés GROUP BY POSTE");

    QMap<QString, int> postes;
    int total = 0;

    while (query.next()) {
        QString poste = query.value(0).toString();
        int count = query.value(1).toInt();
        postes[poste] = count;
        total += count;
    }

    if (total == 0)
        return new QGraphicsView(scene);

    QList<QColor> couleurs = {
        QColor("#3498db"), QColor("#e74c3c"), QColor("#f1c40f"),
        QColor("#2ecc71"), QColor("#9b59b6"), QColor("#e67e22")
    };

    int couleurIndex = 0;
    int startAngle = 0;
    int centerX = 100, centerY = 100;
    int radius = 110;

    QList<QGraphicsEllipseItem*> segments;
    QList<QGraphicsTextItem*> legends;

    for (auto it = postes.begin(); it != postes.end(); ++it) {
        double percentage = (double(it.value()) / total) * 100.0;
        int spanAngle = int((percentage / 100.0) * 360 * 16);

        // Segment circulaire
        QGraphicsEllipseItem *segment = new QGraphicsEllipseItem(centerX - radius, centerY - radius, 2 * radius, 2 * radius);
        segment->setStartAngle(startAngle);
        segment->setSpanAngle(spanAngle);
        segment->setBrush(QBrush(couleurs[couleurIndex % couleurs.size()]));
        segment->setPen(Qt::NoPen);
        segment->setOpacity(0); // invisible au début
        scene->addItem(segment);
        segments.append(segment);

        // Légende : petit carré + texte
        int yOffset = couleurIndex * 24;
        QGraphicsRectItem *rect = new QGraphicsRectItem(220, yOffset + 8, 12, 12);
        rect->setBrush(couleurs[couleurIndex % couleurs.size()]);
        scene->addItem(rect);

        QGraphicsTextItem *text = new QGraphicsTextItem(
            QString("%1 (%2%)").arg(it.key()).arg(percentage, 0, 'f', 1));
        text->setDefaultTextColor(Qt::black);
        text->setFont(QFont("Segoe UI", 8, QFont::Bold));
        text->setPos(240, yOffset + 5);
        scene->addItem(text);

        legends.append(text);
        startAngle += spanAngle;
        couleurIndex++;
    }

    // Animation simulée avec QTimer
    QTimer *timer = new QTimer();
    int frameCount = 20;
    int currentFrame = 0;

    QObject::connect(timer, &QTimer::timeout, [=]() mutable {
        double opacity = (double)currentFrame / frameCount;
        for (QGraphicsEllipseItem *seg : segments) {
            seg->setOpacity(opacity);
        }
        currentFrame++;
        if (currentFrame > frameCount)
            timer->stop();
    });

    timer->start(40); // frames toutes les 30ms

    QGraphicsView *view = new QGraphicsView(scene);
    view->setRenderHint(QPainter::Antialiasing);
    view->setStyleSheet("background-color: #f4f6f7; border: none;");
    view->setFixedSize(500, 350);
    return view;
}





//stat b date

QGraphicsView* employee::statistiquesembauche() {
    QGraphicsScene *scene = new QGraphicsScene();

    QSqlQuery query("SELECT DATE_EMB, COUNT(*) FROM employés GROUP BY DATE_EMB");

    QMap<QString, int> embauches;
    int total = 0;

    while (query.next()) {
        QString date = query.value(0).toString();
        int count = query.value(1).toInt();
        embauches[date] = count;
        total += count;
    }

    if (total == 0)
        return new QGraphicsView(scene); // Éviter division par zéro

    QList<QColor> couleurs = {
        QColor("#1F77B4"),  // Bleu classique
        QColor("#2CA02C"),  // Vert élégant
        QColor("#FF7F0E"),  // Orange doux
        QColor("#D62728"),  // Rouge atténué
        QColor("#17BECF"),  // Cyan moderne
        QColor("#BCBD22"),  // Jaune olive
        QColor("#8C564B"),  // Brun doux
        QColor("#E377C2")   // Rose clair (optionnel, tu peux l’enlever si tu veux + neutre)
    };


    int couleurIndex = 0;
    int startAngle = 0;
    int centerX = 100, centerY = 100;
    int radius = 105;

    QList<QGraphicsEllipseItem*> segments;

    for (auto it = embauches.begin(); it != embauches.end(); ++it) {
        double percentage = (double(it.value()) / total) * 100.0;
        int spanAngle = int((percentage / 100.0) * 360 * 16);

        QGraphicsEllipseItem *segment = new QGraphicsEllipseItem(centerX - radius, centerY - radius, 2 * radius, 2 * radius);
        segment->setStartAngle(startAngle);
        segment->setSpanAngle(spanAngle);
        segment->setBrush(QBrush(couleurs[couleurIndex % couleurs.size()]));
        segment->setPen(Qt::NoPen);
        segment->setOpacity(0); // invisible au départ
        scene->addItem(segment);
        segments.append(segment);

        // Légendes : carré + texte
        int yOffset = couleurIndex * 24;
        QGraphicsRectItem *rect = new QGraphicsRectItem(220, yOffset + 8, 12, 12);
        rect->setBrush(couleurs[couleurIndex % couleurs.size()]);
        scene->addItem(rect);

        QGraphicsTextItem *text = new QGraphicsTextItem(
            QString("%1 (%2%)").arg(it.key()).arg(percentage, 0, 'f', 1));
        text->setDefaultTextColor(Qt::black);
        text->setFont(QFont("Segoe UI", 8, QFont::Bold));
        text->setPos(240, yOffset + 5);
        scene->addItem(text);

        startAngle += spanAngle;
        couleurIndex++;
    }

    // Animation fluide (simulée)
    QTimer *timer = new QTimer();
    int frameCount = 20;
    int currentFrame = 0;

    QObject::connect(timer, &QTimer::timeout, [=]() mutable {
        double opacity = (double)currentFrame / frameCount;
        for (QGraphicsEllipseItem *seg : segments) {
            seg->setOpacity(opacity);
        }
        currentFrame++;
        if (currentFrame > frameCount)
            timer->stop();
    });

    timer->start(40); // Apparition fluide toutes les 30 ms

    QGraphicsView *view = new QGraphicsView(scene);
    view->setRenderHint(QPainter::Antialiasing);
    view->setStyleSheet("background-color: #f4f6f7; border: none;");
    view->setFixedSize(500, 350);

    return view;
}

