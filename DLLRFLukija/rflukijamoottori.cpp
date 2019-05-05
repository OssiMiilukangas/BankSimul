#include "rflukijamoottori.h"


RFLukijaMoottori::RFLukijaMoottori()
{
    serial = new QSerialPort(this);

    QObject::connect(serial, SIGNAL(readyRead()), this, SLOT(read()));
}

void RFLukijaMoottori::RFLukijaMoottoriPalautus()
{
     serial->setPortName("COM13");
     serial->open(QIODevice::ReadWrite);
     serial->setBaudRate(QSerialPort::Baud9600);
     serial->setDataBits(QSerialPort::Data8);
     serial->setParity(QSerialPort::NoParity);
     serial->setStopBits(QSerialPort::OneStop);
     serial->setFlowControl(QSerialPort::NoFlowControl);

     if (serial->isOpen()){
         qDebug() << "Portti auki";
     }
     else {
         qDebug() << "Portti kiinni";
     }
}

void RFLukijaMoottori::read()
{
        lukija = serial->readAll();
        RFID = QString(lukija);
        qDebug() << RFID;

        emit testi();
        serial->close();
}

QString RFLukijaMoottori::Palauttaja()
{
    return RFID;
}
