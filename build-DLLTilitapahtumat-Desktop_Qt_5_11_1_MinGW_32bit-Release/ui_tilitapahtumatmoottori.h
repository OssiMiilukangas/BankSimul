/********************************************************************************
** Form generated from reading UI file 'tilitapahtumatmoottori.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILITAPAHTUMATMOOTTORI_H
#define UI_TILITAPAHTUMATMOOTTORI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tilitapahtumatMoottori
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *tilitapahtumatMoottori)
    {
        if (tilitapahtumatMoottori->objectName().isEmpty())
            tilitapahtumatMoottori->setObjectName(QLatin1String("tilitapahtumatMoottori"));
        tilitapahtumatMoottori->resize(1920, 1080);
        label = new QLabel(tilitapahtumatMoottori);
        label->setObjectName(QLatin1String("label"));
        label->setGeometry(QRect(80, 60, 371, 121));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        pushButton = new QPushButton(tilitapahtumatMoottori);
        pushButton->setObjectName(QLatin1String("pushButton"));
        pushButton->setGeometry(QRect(1510, 50, 331, 111));
        QFont font1;
        font1.setPointSize(24);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(201, 255, 245);"));

        retranslateUi(tilitapahtumatMoottori);

        QMetaObject::connectSlotsByName(tilitapahtumatMoottori);
    } // setupUi

    void retranslateUi(QDialog *tilitapahtumatMoottori)
    {
        tilitapahtumatMoottori->setWindowTitle(QApplication::translate("tilitapahtumatMoottori", "Dialog", nullptr));
        label->setText(QApplication::translate("tilitapahtumatMoottori", "Tilitapahtumat", nullptr));
        pushButton->setText(QApplication::translate("tilitapahtumatMoottori", "Takaisin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tilitapahtumatMoottori: public Ui_tilitapahtumatMoottori {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILITAPAHTUMATMOOTTORI_H
