#include "arduino.h"

Arduino::Arduino()
{
    serial = new QSerialPort();
    arduino_is_available = false;
    arduino_port_name = "";
}

int Arduino::connect_arduino()
{
    // List all available ports for debugging
    qDebug() << "Scanning available serial ports:";
    foreach (const QSerialPortInfo &serial_port_info, QSerialPortInfo::availablePorts())
    {
        qDebug() << "Port:" << serial_port_info.portName()
        << "Vendor ID:" << (serial_port_info.hasVendorIdentifier() ? QString::number(serial_port_info.vendorIdentifier()) : "N/A")
        << "Product ID:" << (serial_port_info.hasProductIdentifier() ? QString::number(serial_port_info.productIdentifier()) : "N/A");
        if (serial_port_info.hasVendorIdentifier() && serial_port_info.hasProductIdentifier())
        {
            if (serial_port_info.vendorIdentifier() == arduino_uno_vendor_id && serial_port_info.productIdentifier() == arduino_uno_product_id)
            {
                arduino_is_available = true;
                arduino_port_name = serial_port_info.portName();
                qDebug() << "Arduino Uno detected on port:" << arduino_port_name;
            }
        }
    }

    // If no Arduino Uno is found, try a hardcoded port (optional)
    if (!arduino_is_available)
    {
        // Replace with your known port, e.g., "COM3" (Windows) or "/dev/ttyACM0" (Linux)
        arduino_port_name = "COM5"; // Comment out or adjust as needed
        qDebug() << "No Arduino Uno found. Trying hardcoded port:" << arduino_port_name;
        arduino_is_available = true; // Attempt to use hardcoded port
    }
    else
    {
        qDebug() << "Selected Arduino port name is:" << arduino_port_name;
    }

    if (arduino_is_available)
    {
        serial->setPortName(arduino_port_name);
        // Attempt to open the port with retries
        bool opened = false;
        for (int attempt = 1; attempt <= 3; ++attempt)
        {
            if (serial->open(QSerialPort::ReadWrite))
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
            qDebug() << "Attempt" << attempt << "failed to open serial port. Error:" << serial->errorString();
            serial->clearError();

        }

        if (opened)
        {
            return 0; // Successfully connected
        }
        qDebug() << "All attempts to open serial port failed";
        return 1; // Error opening
    }

    qDebug() << "No Arduino found or no valid port selected";
    return 1; // Arduino not available
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

QSerialPort* Arduino::getserial()
{
    return serial;
}

QString Arduino::getserial_port_name()
{
    return arduino_port_name;
}

void Arduino::send_vaccine_quantity(int quantity)
{
    QByteArray data = QString::number(quantity).toUtf8() + "\n";
    write_to_arduino(data);
}
