#ifndef KEYPADREADER_H
#define KEYPADREADER_H

#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>

class KeypadReader : public QObject
{
    Q_OBJECT

public:
    explicit KeypadReader(QObject *parent = nullptr);
    ~KeypadReader();

    bool openSerialPort(const QString &portName, int baudRate);
    void closeSerialPort();

signals:
    void keyPressed(const QString &key);  // Signal to emit the key pressed

private slots:
    void readSerialData();  // Slot to read serial data

private:
    QSerialPort *serialPort;
};

#endif // KEYPADREADER_H
