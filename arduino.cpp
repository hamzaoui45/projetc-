#include "arduino.h"
#include <QThread>

Arduino::Arduino(QObject *parent)
    : QObject(parent)
    , serial(new QSerialPort(this))
    , arduinoIsAvailable(false)
    , serialBuffer("")
    , arduinoPortName("")
{
    // Connecter le signal readyRead au slot readSerialData
    connect(serial, &QSerialPort::readyRead, this, &Arduino::readSerialData);
}

Arduino::~Arduino()
{
    closeArduino();
    delete serial;
}

bool Arduino::connectArduino(const QString &portName, qint32 baudRate)
{
    // Étape 1 : Déterminer le nom du port
    if (portName.isEmpty()) {
        // Détection automatique du port Arduino
        foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
            qDebug() << "Port:" << info.portName()
            << "Vendor ID:" << (info.hasVendorIdentifier() ? QString::number(info.vendorIdentifier()) : "N/A")
            << "Product ID:" << (info.hasProductIdentifier() ? QString::number(info.productIdentifier()) : "N/A");
            if (info.hasVendorIdentifier() && info.hasProductIdentifier()) {
                if (info.vendorIdentifier() == arduinoUnoVendorId && info.productIdentifier() == arduinoUnoProductId) {
                    arduinoPortName = info.portName();
                    arduinoIsAvailable = true;
                    qDebug() << "Arduino Uno détecté sur le port :" << arduinoPortName;
                    break;
                }
            }
        }

        // Si aucun port n'est trouvé, essayer un port par défaut (optionnel)
        if (!arduinoIsAvailable) {
            arduinoPortName = "COM5"; // À ajuster selon votre configuration
            qDebug() << "Aucun Arduino Uno trouvé. Essai avec le port par défaut :" << arduinoPortName;
            arduinoIsAvailable = true;
        }
    } else {
        arduinoPortName = portName;
        arduinoIsAvailable = true;
    }

    // Étape 2 : Configurer et ouvrir le port
    if (arduinoIsAvailable) {
        serial->setPortName(arduinoPortName);
        serial->setBaudRate(baudRate);
        serial->setDataBits(QSerialPort::Data8);
        serial->setParity(QSerialPort::NoParity);
        serial->setStopBits(QSerialPort::OneStop);
        serial->setFlowControl(QSerialPort::NoFlowControl);

        // Tenter d'ouvrir le port avec plusieurs essais
        bool opened = false;
        for (int attempt = 1; attempt <= 3; ++attempt) {
            if (serial->open(QIODevice::ReadWrite)) {
                qDebug() << "Port série ouvert avec succès à la tentative" << attempt;
                opened = true;
                break;
            }
            qDebug() << "Tentative" << attempt << "échouée. Erreur :" << serial->errorString();
            serial->clearError();
            QThread::msleep(100); // Attendre avant de réessayer
        }

        if (opened) {
            return true;
        } else {
            qDebug() << "Échec de l'ouverture du port série après toutes les tentatives";
            arduinoIsAvailable = false;
            return false;
        }
    }

    qDebug() << "Aucun Arduino trouvé ou port invalide";
    return false;
}

void Arduino::closeArduino()
{
    if (serial->isOpen()) {
        serial->close();
        arduinoIsAvailable = false;
        qDebug() << "Port série fermé";
    }
}

void Arduino::writeToArduino(const QByteArray &data)
{
    if (serial->isOpen()) {
        serial->write(data);
        serial->flush();
        qDebug() << "Données envoyées à l'Arduino :" << data;
    } else {
        qDebug() << "Erreur : Port série non ouvert";
    }
}

QByteArray Arduino::readFromArduino()
{
    if (serial->isOpen()) {
        QByteArray data;
        while (serial->waitForReadyRead(100)) {
            data.append(serial->readAll());
        }
        if (!data.isEmpty()) {
            qDebug() << "Données lues depuis l'Arduino :" << data;
        }
        return data;
    }
    qDebug() << "Erreur : Port série non ouvert";
    return QByteArray();
}

void Arduino::sendResponse(const QString &response)
{
    if (serial->isOpen()) {
        QByteArray data = response.toUtf8() + "\n";
        writeToArduino(data);
    } else {
        qDebug() << "Erreur : Impossible d'envoyer la réponse, port non ouvert";
    }
}

void Arduino::sendVaccineQuantity(int quantity)
{
    if (serial->isOpen()) {
        QByteArray data = QString::number(quantity).toUtf8() + "\n";
        writeToArduino(data);
    } else {
        qDebug() << "Erreur : Impossible d'envoyer la quantité de vaccin, port non ouvert";
    }
}

QSerialPort* Arduino::getSerial()
{
    return serial;
}

QString Arduino::getSerialPortName()
{
    return arduinoPortName;
}

void Arduino::readSerialData()
{
    while (serial->canReadLine()) {
        QString line = QString::fromUtf8(serial->readLine()).trimmed();
        qDebug() << "Données reçues de l'Arduino :" << line;

        // Émettre les signaux appropriés en fonction des données reçues
        if (line.startsWith("PASSWORD:")) {
            QString password = line.mid(9).trimmed();
            if (!password.isEmpty()) {
                emit passwordReceived(password);
            }
        } else if (line.startsWith("VACCINE:")) {
            QString vaccineId = line.mid(8).trimmed();
            if (!vaccineId.isEmpty()) {
                emit vaccineIdReceived(vaccineId);
            }
        } else {
            emit serialDataReceived(line);
        }

        // Vider le buffer pour éviter l'accumulation
        serialBuffer.clear();
    }
}
