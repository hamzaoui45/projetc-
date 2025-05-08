#ifndef ARDUINO_H
#define ARDUINO_H

#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>

class Arduino : public QObject
{
    Q_OBJECT

public:
    explicit Arduino(QObject *parent = nullptr);
    ~Arduino();

    // Connexion et déconnexion
    bool connectArduino(const QString &portName = "", qint32 baudRate = 9600);
    void closeArduino();

    // Lecture et écriture
    void writeToArduino(const QByteArray &data);
    QByteArray readFromArduino();
    void sendResponse(const QString &response); // Envoi de SUCCESS/DENY
    void sendVaccineQuantity(int quantity); // Envoi de la quantité de vaccins

    // Accesseurs
    QSerialPort* getSerial();
    QString getSerialPortName();

signals:
    void passwordReceived(const QString &password); // Signal pour mot de passe reçu
    void serialDataReceived(const QString &data);   // Signal pour données série
    void vaccineIdReceived(const QString &vaccineID); // Signal pour ID de vaccin

private slots:
    void readSerialData(); // Slot pour lire les données série

private:
    QSerialPort *serial; // Objet port série
    QString serialBuffer; // Buffer pour accumuler les données série
    QString arduinoPortName; // Nom du port série
    bool arduinoIsAvailable; // Indicateur de disponibilité
    static const quint16 arduinoUnoVendorId = 9025; // ID du vendeur Arduino Uno
    static const quint16 arduinoUnoProductId = 67;  // ID du produit Arduino Uno
};

#endif // ARDUINO_H
