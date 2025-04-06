#include "log.h"
#include "ui_log.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include "mainwindow.h"


log::log(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::log)
{
    ui->setupUi(this);
}

log::~log()
{
    delete ui;
}

void log::on_connect_clicked()
{
    QString id = ui->user->text();      // Récupérer l'ID entré
    QString mdp = ui->pswd->text();     // Récupérer le mot de passe entré

    // Vérifier si les champs ne sont pas vides
    if (id.isEmpty() || mdp.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs !");
        return;
    }

    // Connexion à la base de données et vérification de l'authentification
    QSqlQuery query;
    query.prepare("SELECT * FROM employés WHERE ID_EMP = :id AND MDP = :mdp");
    query.bindValue(":id", id);
    query.bindValue(":mdp", mdp);

    if (query.exec() && query.next()) { // `query.next()` vérifie si un résultat existe
        QMessageBox::information(this, "Connexion réussie", "Bienvenue !");

        // Ouvrir MainWindow dynamiquement pour éviter la destruction immédiate
        MainWindow *m = new MainWindow();
        m->show();

        // Fermer la fenêtre actuelle
        this->close();
    } else {
        QMessageBox::critical(this, "Échec", "ID ou mot de passe incorrect !");
    }
}

