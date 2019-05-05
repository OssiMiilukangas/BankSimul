/********************************************************************************
** Form generated from reading UI file 'moottorinostarahaa.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOOTTORINOSTARAHAA_H
#define UI_MOOTTORINOSTARAHAA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MoottoriNostaRahaa
{
public:
    QPushButton *close;
    QPushButton *onetwenty;
    QPushButton *eighty;
    QPushButton *muuSumma;
    QPushButton *twenty;
    QPushButton *fourty;
    QPushButton *sixty;
    QLabel *label_2;

    void setupUi(QDialog *MoottoriNostaRahaa)
    {
        if (MoottoriNostaRahaa->objectName().isEmpty())
            MoottoriNostaRahaa->setObjectName(QLatin1String("MoottoriNostaRahaa"));
        MoottoriNostaRahaa->resize(1920, 1080);
        close = new QPushButton(MoottoriNostaRahaa);
        close->setObjectName(QLatin1String("close"));
        close->setGeometry(QRect(820, 770, 261, 71));
        QFont font;
        font.setPointSize(16);
        close->setFont(font);
        close->setStyleSheet(QLatin1String("background-color: rgb(201, 255, 245);"));
        onetwenty = new QPushButton(MoottoriNostaRahaa);
        onetwenty->setObjectName(QLatin1String("onetwenty"));
        onetwenty->setGeometry(QRect(1040, 500, 201, 71));
        onetwenty->setFont(font);
        onetwenty->setStyleSheet(QLatin1String("background-color: rgb(201, 255, 245);"));
        eighty = new QPushButton(MoottoriNostaRahaa);
        eighty->setObjectName(QLatin1String("eighty"));
        eighty->setGeometry(QRect(1040, 380, 201, 71));
        eighty->setFont(font);
        eighty->setStyleSheet(QLatin1String("background-color: rgb(201, 255, 245);"));
        muuSumma = new QPushButton(MoottoriNostaRahaa);
        muuSumma->setObjectName(QLatin1String("muuSumma"));
        muuSumma->setGeometry(QRect(1040, 620, 201, 71));
        muuSumma->setFont(font);
        muuSumma->setStyleSheet(QLatin1String("background-color: rgb(201, 255, 245);"));
        twenty = new QPushButton(MoottoriNostaRahaa);
        twenty->setObjectName(QLatin1String("twenty"));
        twenty->setGeometry(QRect(650, 380, 201, 71));
        twenty->setFont(font);
        twenty->setStyleSheet(QLatin1String("background-color: rgb(201, 255, 245);"));
        fourty = new QPushButton(MoottoriNostaRahaa);
        fourty->setObjectName(QLatin1String("fourty"));
        fourty->setGeometry(QRect(650, 500, 201, 71));
        fourty->setFont(font);
        fourty->setStyleSheet(QLatin1String("background-color: rgb(201, 255, 245);"));
        sixty = new QPushButton(MoottoriNostaRahaa);
        sixty->setObjectName(QLatin1String("sixty"));
        sixty->setGeometry(QRect(650, 620, 201, 71));
        sixty->setFont(font);
        sixty->setStyleSheet(QLatin1String("background-color: rgb(201, 255, 245);"));
        label_2 = new QLabel(MoottoriNostaRahaa);
        label_2->setObjectName(QLatin1String("label_2"));
        label_2->setGeometry(QRect(650, 200, 611, 91));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setScaledContents(false);

        retranslateUi(MoottoriNostaRahaa);

        QMetaObject::connectSlotsByName(MoottoriNostaRahaa);
    } // setupUi

    void retranslateUi(QDialog *MoottoriNostaRahaa)
    {
        MoottoriNostaRahaa->setWindowTitle(QApplication::translate("MoottoriNostaRahaa", "Dialog", nullptr));
        close->setText(QApplication::translate("MoottoriNostaRahaa", "Palaa", nullptr));
        onetwenty->setText(QApplication::translate("MoottoriNostaRahaa", "120", nullptr));
        eighty->setText(QApplication::translate("MoottoriNostaRahaa", "80", nullptr));
        muuSumma->setText(QApplication::translate("MoottoriNostaRahaa", "Sy\303\266t\303\244 m\303\244\303\244r\303\244", nullptr));
        twenty->setText(QApplication::translate("MoottoriNostaRahaa", "20", nullptr));
        fourty->setText(QApplication::translate("MoottoriNostaRahaa", "40", nullptr));
        sixty->setText(QApplication::translate("MoottoriNostaRahaa", "60", nullptr));
        label_2->setText(QApplication::translate("MoottoriNostaRahaa", "Sy\303\266t\303\244 nostettava m\303\244\303\244r\303\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MoottoriNostaRahaa: public Ui_MoottoriNostaRahaa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOOTTORINOSTARAHAA_H
