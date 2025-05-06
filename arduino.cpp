#include "Arduino.h"
#include <QDebug>

Arduino::Arduino(QObject *parent)
    : QObject(parent),
    serial(new QSerialPort(this))
{
    connect(serial, &QSerialPort::readyRead, this, &Arduino::readSerialData);
}

bool Arduino::connectArduino(const QString &portName, qint32 baudRate)
{
    serial->setPortName(portName);
    serial->setBaudRate(baudRate);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    return serial->open(QIODevice::ReadWrite);
}

// Send a response (SUCCESS or DENY) to Arduino
void Arduino::sendResponse(const QString &response)
{
    if (serial->isOpen()) {
        serial->write(response.toUtf8() + "\n");
    }
}

// Handle incoming serial data
void Arduino::readSerialData()
{
    while (serial->canReadLine()) {
        QString line = QString::fromUtf8(serial->readLine()).trimmed();
        qDebug() << "Received from Arduino:" << line;

        if (line.startsWith("PASSWORD:")) {
            QString password = line.mid(9).trimmed();
            if (!password.isEmpty()) emit passwordReceived(password);
        } else if (line.startsWith("VACCINE ID:")) {
            QString vaccineID = line.mid(11).trimmed();
            if (!vaccineID.isEmpty()) emit vaccineIdReceived(vaccineID);
        }/* else if (line.startsWith("TEMP:")) {
            bool ok = false;
            double temp = line.mid(5).trimmed().toDouble(&ok);
            if (ok && !lastVaccineId.isEmpty()) {
                emit vaccineTemperatureReceived(lastVaccineId, temp);
            }
        }*/
    }
}


