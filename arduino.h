#ifndef ARDUINO_H
#define ARDUINO_H

#include <QObject>
#include <QSerialPort>

class Arduino : public QObject
{
    Q_OBJECT

public:
    explicit Arduino(QObject *parent = nullptr);
    bool connectArduino(const QString &portName, qint32 baudRate = 9600);
    void sendResponse(const QString &response);
    // Method to send response (SUCCESS/DENY)

signals:
    void passwordReceived(const QString &password);  // Signal to emit when password is received
    void serialDataReceived(const QString &data);
    void vaccineIdReceived(const QString &vaccineID);
    void writeToArduino(const QByteArray &data);

private slots:
    void readSerialData();  // Slot to read data from the serial port

private:
    QSerialPort *serial;
    QString serialBuffer;
};

#endif // ARDUINO_H
