#ifndef ARDUINO_H
#define ARDUINO_H

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>

class Arduino
{
public:
    Arduino();
    int connect_arduino(); // Connect PC to Arduino
    void close_arduino(); // Close the connection
    void write_to_arduino(QByteArray data); // Send data to Arduino
    QByteArray read_from_arduino(); // Receive data from Arduino
    QSerialPort* getserial(); // Accessor for serial
    QString getserial_port_name();
    void send_vaccine_quantity(int quantity); // Send updated vaccine quantity to Arduino

private:
    QSerialPort* serial; // Serial port object
    static const quint16 arduino_uno_vendor_id = 9025;
    static const quint16 arduino_uno_product_id = 67; // Correction ici
    QString arduino_port_name;
    bool arduino_is_available;
    QByteArray data; // Data read from Arduino
};

#endif // ARDUINO_H
