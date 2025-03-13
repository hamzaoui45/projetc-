#include "patient.h"
#include <QSqlError>
#include <QDebug>

Patient::Patient(QString nom, QString prenom, QDate dateNaissance, QString adresse, QString email, int tel, int type) {
    this->nom = nom;
    this->prenom = prenom;
    this->dateNaissance = dateNaissance;
    this->adresse = adresse;
    this->email = email;
    this->tel = tel;
    this->type = type;
}

bool Patient::ajouter() {
    if (nom.isEmpty() || prenom.isEmpty() || adresse.isEmpty() || email.isEmpty()) {
        qDebug() << "Erreur : Un des champs est vide";
        return false;
    }
    if (!email.contains("@") || !email.contains(".")) {
        qDebug() << "Erreur : Email invalide.";
        return false;
    }
    if (tel < 10000000 || tel > 99999999) {
        qDebug() << "Erreur : Numéro de téléphone invalide.";
        return false;
    }
    if (dateNaissance > QDate::currentDate()) {
        qDebug() << "Erreur : La date de naissance ne peut pas être dans le futur.";
        return false;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO patients (nom, prenom, date_naissance, adresse, email, tel, type) "
                  "VALUES (:nom, :prenom, TO_DATE(:dateNaissance, 'DD/MM/YYYY'), :adresse, :email, :tel, :type)");

    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":dateNaissance", dateNaissance.toString("dd/MM/yyyy"));

    query.bindValue(":adresse", adresse);
    query.bindValue(":email", email);
    query.bindValue(":tel", tel);
    query.bindValue(":type", type);


    if (query.exec()) {
        qDebug() << "Patient ajouté avec succès.";
        return true;
    } else {
        qDebug() << "Erreur lors de l'ajout :" << query.lastError().text();
        return false;
    }
}

QSqlQueryModel* Patient::afficher() {
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery query;
    query.prepare("SELECT id_patient, nom, prenom, email, adresse, "
                  "TO_CHAR(tel) AS tel, "
                  "type, "
                  "TO_CHAR(date_naissance, 'DD/MM/YYYY') AS date_naissance "
                  "FROM patients");

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête : " << query.lastError();
        delete model;
        return nullptr; // Si la requête échoue, on retourne null
    }

    // Utilisation de setQuery directement avec une requête string, qui est la méthode préférée
    model->setQuery(query.executedQuery());

    if (model->rowCount() == 0) {
        qDebug() << "Aucune donnée trouvée.";
    }

    return model;
}

bool Patient::modifier() {
    QSqlQuery query;
    QString updateQuery = "UPDATE patients SET ";

    // Liste pour les valeurs des champs à mettre à jour
    QStringList setClause;

    // Ajouter les champs modifiés
    if (!nom.isEmpty()) setClause.append("nom = :nom");
    if (!prenom.isEmpty()) setClause.append("prenom = :prenom");
    if (dateNaissance.isValid()) setClause.append("date_naissance = TO_DATE(:dateNaissance, 'DD/MM/YYYY')");
    if (!adresse.isEmpty()) setClause.append("adresse = :adresse");
    if (!email.isEmpty()) setClause.append("email = :email");
    if (tel > 0) setClause.append("tel = :tel");
    if (type != -1) setClause.append("type = :type");

    // Joindre toutes les modifications
    updateQuery += setClause.join(", ");
    updateQuery += " WHERE id_patient = :idPatient";

    query.prepare(updateQuery);

    // Lier les valeurs des champs modifiés
    if (!nom.isEmpty()) query.bindValue(":nom", nom);
    if (!prenom.isEmpty()) query.bindValue(":prenom", prenom);
    if (dateNaissance.isValid()) query.bindValue(":dateNaissance", dateNaissance.toString("dd/MM/yyyy"));
    if (!adresse.isEmpty()) query.bindValue(":adresse", adresse);
    if (!email.isEmpty()) query.bindValue(":email", email);
    if (tel > 0) query.bindValue(":tel", tel);
    if (type != -1) query.bindValue(":type", type);

    query.bindValue(":idPatient", idPatient);

    // Exécuter la requête
    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Erreur lors de la mise à jour du patient : " << query.lastError();
        return false;
    }
}




bool Patient::supprimer(int idPatient) {
    QSqlQuery query;

    // Vérifier si l'ID existe avant de supprimer
    query.prepare("SELECT COUNT(*) FROM patients WHERE id_patient = :idPatient");
    query.bindValue(":idPatient", idPatient);

    if (!query.exec()) {
        qDebug() << "Erreur lors de la vérification de l'existence de l'ID : " << query.lastError();
        return false;
    }

    query.next();
    int count = query.value(0).toInt();

    // Si l'ID n'existe pas, afficher un message d'erreur
    if (count == 0) {
        qDebug() << "Erreur : L'ID spécifié n'existe pas.";
        return false;
    }

    // Si l'ID existe, procéder à la suppression
    query.prepare("DELETE FROM patients WHERE id_patient = :idPatient");
    query.bindValue(":idPatient", idPatient);

    if (query.exec()) {
        qDebug() << "Patient supprimé avec succès.";
        return true;
    } else {
        qDebug() << "Erreur lors de la suppression : " << query.lastError();
        return false;
    }
}



