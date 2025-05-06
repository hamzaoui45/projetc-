#include "keypadreader.h"
#include <QDebug>

KeypadReader::KeypadReader(QObject *parent) : QObject(parent), serialPort(new QSerialPort(this))
{
    // Connect readyRead signal from the serial port to the slot that handles reading
    connect(serialPort, &QSerialPort::readyRead, this, &KeypadReader::readSerialData);
}

KeypadReader::~KeypadReader()
{
    closeSerialPort();
}

bool KeypadReader::openSerialPort(const QString &portName, int baudRate)
{
    serialPort->setPortName(portName);
    serialPort->setBaudRate(baudRate);
    serialPort->setDataBits(QSerialPort::Data8);
    serialPort->setParity(QSerialPort::NoParity);
    serialPort->setStopBits(QSerialPort::OneStop);
    serialPort->setFlowControl(QSerialPort::NoFlowControl);

    if (serialPort->open(QIODevice::ReadOnly)) {
        qDebug() << "Serial port opened";
        return true;
    } else {
        qDebug() << "Failed to open serial port";
        return false;
    }
}

void KeypadReader::closeSerialPort()
{
    if (serialPort->isOpen()) {
        serialPort->close();
        qDebug() << "Serial port closed";
    }
}

void KeypadReader::readSerialData()
{
    QByteArray data = serialPort->readAll();
    QString key = QString::fromUtf8(data).trimmed();
    emit keyPressed(key);  // Emit the keyPressed signal with the key
}
