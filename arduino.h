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

    // Arduino connection methods
    int connect_arduino();                    // Connect PC to Arduino (auto-detect)
    bool connectArduino(const QString &portName, qint32 baudRate = 9600); // Manual connect
    void close_arduino();                     // Close the serial connection

    // Data communication
    void write_to_arduino(QByteArray data);   // Send raw bytes
    void sendResponse(const QString &response); // Send SUCCESS/DENY
    void send_vaccine_quantity(int quantity); // Send vaccine quantity
    QByteArray read_from_arduino();           // Read data from Arduino

    // Accessors
    QSerialPort* getserial();                 // Return serial port pointer
    QString getserial_port_name();            // Return port name

signals:
    void passwordReceived(const QString &password);   // Emitted when password is received
    void serialDataReceived(const QString &data);     // Emitted when any serial data is received
    void vaccineIdReceived(const QString &vaccineID); // Emitted when vaccine ID is received
    void writeToArduino(const QByteArray &data);      // Signal to request writing to Arduino

private slots:
    void readSerialData(); // Slot called on readyRead()

private:
    QSerialPort *serial;
    QString serialBuffer;
    QByteArray data; // Last read data

    // Constants for vendor/product ID
    static const quint16 arduino_uno_vendor_id = 9025;
    static const quint16 arduino_uno_product_id = 67;
    QString arduino_port_name;
    bool arduino_is_available;
};

#endif // ARDUINO_H
