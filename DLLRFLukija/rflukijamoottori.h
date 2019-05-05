#ifndef RFLUKIJAMOOTTORI_H
#define RFLUKIJAMOOTTORI_H

#include <QString>
#include <QCoreApplication>
#include <iostream>
#include <QSerialPort>
#include <QDebug>
#include <stdio.h>
#include <QObject>


class RFLukijaMoottori : public QObject
{
    Q_OBJECT
public:
    RFLukijaMoottori();
    void RFLukijaMoottoriPalautus();
    QString Palauttaja();
    QSerialPort *serial;
signals:
    void readyRead();
    void testi();
private:
    QString RFID;
    QByteArray lukija;
public slots:
    void read();
};

#endif // RFLUKIJAMOOTTORI_H
