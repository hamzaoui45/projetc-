#include "Arduino.h"
#include <QDebug>
#include <QThread>

Arduino::Arduino(QObject *parent)
    : QObject(parent), serial(new QSerialPort(this))
{
    arduino_is_available = false;
    arduino_port_name = "";
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

int Arduino::connect_arduino()
{
    qDebug() << "Scanning available serial ports:";
    foreach (const QSerialPortInfo &serial_port_info, QSerialPortInfo::availablePorts())
    {
        qDebug() << "Port:" << serial_port_info.portName()
        << "Vendor ID:" << (serial_port_info.hasVendorIdentifier() ? QString::number(serial_port_info.vendorIdentifier()) : "N/A")
        << "Product ID:" << (serial_port_info.hasProductIdentifier() ? QString::number(serial_port_info.productIdentifier()) : "N/A");

        if (serial_port_info.hasVendorIdentifier() && serial_port_info.hasProductIdentifier())
        {
            if (serial_port_info.vendorIdentifier() == arduino_uno_vendor_id &&
                serial_port_info.productIdentifier() == arduino_uno_product_id)
            {
                arduino_is_available = true;
                arduino_port_name = serial_port_info.portName();
                qDebug() << "Arduino Uno detected on port:" << arduino_port_name;
                break;
            }
        }
    }

    // Fallback to hardcoded port
    if (!arduino_is_available)
    {
        arduino_port_name = "COM5"; // Modify if needed
        arduino_is_available = true;
        qDebug() << "No Arduino detected. Using hardcoded port:" << arduino_port_name;
    }

    if (arduino_is_available)
    {
        serial->setPortName(arduino_port_name);
        bool opened = false;
        for (int attempt = 1; attempt <= 3; ++attempt)
        {
            if (serial->open(QIODevice::ReadWrite))
            {
                serial->setBaudRate(QSerialPort::Baud9600);
                serial->setDataBits(QSerialPort::Data8);
                serial->setParity(QSerialPort::NoParity);
                serial->setStopBits(QSerialPort::OneStop);
                serial->setFlowControl(QSerialPort::NoFlowControl);
                qDebug() << "Serial port opened successfully on attempt" << attempt;
                opened = true;
                break;
            }
            qDebug() << "Attempt" << attempt << "failed. Error:" << serial->errorString();
            serial->clearError();
            QThread::msleep(100); // small delay before retry
        }

        if (opened) return 0;
        qDebug() << "Failed to open serial port after 3 attempts.";
        return 1;
    }

    qDebug() << "No valid Arduino port available.";
    return 1;
}

void Arduino::close_arduino()
{
    if (serial->isOpen())
    {
        serial->close();
        qDebug() << "Serial port closed";
    }
}

void Arduino::write_to_arduino(QByteArray data)
{
    if (serial->isOpen())
    {
        serial->write(data);
        serial->flush();
        qDebug() << "Data written to Arduino:" << data;
    }
    else
    {
        qDebug() << "Cannot write: Serial port is not open";
    }
}

void Arduino::sendResponse(const QString &response)
{
    if (serial->isOpen())
    {
        serial->write(response.toUtf8() + "\n");
        qDebug() << "Response sent to Arduino:" << response;
    }
}

void Arduino::send_vaccine_quantity(int quantity)
{
    QByteArray data = QString::number(quantity).toUtf8() + "\n";
    write_to_arduino(data);
}

QByteArray Arduino::read_from_arduino()
{
    if (serial->isOpen())
    {
        data.clear();
        while (serial->waitForReadyRead(100))
        {
            data.append(serial->readAll());
        }
        if (!data.isEmpty())
        {
            qDebug() << "Data read from Arduino:" << data;
        }
        return data;
    }
    qDebug() << "Cannot read: Serial port is not open";
    return QByteArray();
}

void Arduino::readSerialData()
{
    while (serial->canReadLine())
    {
        QString line = QString::fromUtf8(serial->readLine()).trimmed();
        qDebug() << "Received from Arduino:" << line;

        if (line.startsWith("PASSWORD:"))
        {
            QString password = line.mid(9).trimmed();
            if (!password.isEmpty())
                emit passwordReceived(password);
        }
        else if (line.startsWith("VACCINE ID:"))
        {
            QString vaccineID = line.mid(11).trimmed();
            if (!vaccineID.isEmpty())
                emit vaccineIdReceived(vaccineID);
        }
        else
        {
            emit serialDataReceived(line);
        }
    }
}

QSerialPort* Arduino::getserial()
{
    return serial;
}

QString Arduino::getserial_port_name()
{
    return arduino_port_name;
}
