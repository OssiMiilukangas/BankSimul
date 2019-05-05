/********************************************************************************
** Form generated from reading UI file 'mainmenumoottori.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENUMOOTTORI_H
#define UI_MAINMENUMOOTTORI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MainMenuMoottori
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *nostaRahaaButton;
    QPushButton *TilitiedotBitton;
    QPushButton *LahjoitaRahaaButton;
    QLabel *label_2;
    QLabel *saldoLabel;
    QLabel *label_3;
    QPushButton *nostaRahaaButton_2;

    void setupUi(QDialog *MainMenuMoottori)
    {
        if (MainMenuMoottori->objectName().isEmpty())
            MainMenuMoottori->setObjectName(QLatin1String("MainMenuMoottori"));
        MainMenuMoottori->resize(1920, 1080);
        label = new QLabel(MainMenuMoottori);
        label->setObjectName(QLatin1String("label"));
        label->setGeometry(QRect(90, 50, 281, 131));
        QFont font;
        font.setPointSize(34);
        label->setFont(font);
        pushButton = new QPushButton(MainMenuMoottori);
        pushButton->setObjectName(QLatin1String("pushButton"));
        pushButton->setGeometry(QRect(1430, 120, 331, 111));
        QFont font1;
        font1.setPointSize(20);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(201, 255, 245);"));
        nostaRahaaButton = new QPushButton(MainMenuMoottori);
        nostaRahaaButton->setObjectName(QLatin1String("nostaRahaaButton"));
        nostaRahaaButton->setGeometry(QRect(560, 820, 341, 131));
        nostaRahaaButton->setFont(font1);
        nostaRahaaButton->setStyleSheet(QLatin1String("background-color: rgb(201, 255, 245);"));
        TilitiedotBitton = new QPushButton(MainMenuMoottori);
        TilitiedotBitton->setObjectName(QLatin1String("TilitiedotBitton"));
        TilitiedotBitton->setGeometry(QRect(1040, 820, 341, 131));
        TilitiedotBitton->setFont(font1);
        TilitiedotBitton->setStyleSheet(QLatin1String("background-color: rgb(201, 255, 245);"));
        LahjoitaRahaaButton = new QPushButton(MainMenuMoottori);
        LahjoitaRahaaButton->setObjectName(QLatin1String("LahjoitaRahaaButton"));
        LahjoitaRahaaButton->setGeometry(QRect(1520, 820, 341, 131));
        LahjoitaRahaaButton->setFont(font1);
        LahjoitaRahaaButton->setStyleSheet(QLatin1String("background-color: rgb(201, 255, 245);"));
        label_2 = new QLabel(MainMenuMoottori);
        label_2->setObjectName(QLatin1String("label_2"));
        label_2->setGeometry(QRect(160, 320, 121, 51));
        QFont font2;
        font2.setPointSize(28);
        label_2->setFont(font2);
        saldoLabel = new QLabel(MainMenuMoottori);
        saldoLabel->setObjectName(QLatin1String("saldoLabel"));
        saldoLabel->setGeometry(QRect(410, 320, 241, 51));
        saldoLabel->setFont(font2);
        label_3 = new QLabel(MainMenuMoottori);
        label_3->setObjectName(QLatin1String("label_3"));
        label_3->setGeometry(QRect(490, 90, 461, 61));
        label_3->setFont(font2);
        nostaRahaaButton_2 = new QPushButton(MainMenuMoottori);
        nostaRahaaButton_2->setObjectName(QLatin1String("nostaRahaaButton_2"));
        nostaRahaaButton_2->setGeometry(QRect(80, 820, 341, 131));
        nostaRahaaButton_2->setFont(font1);
        nostaRahaaButton_2->setStyleSheet(QLatin1String("background-color: rgb(201, 255, 245);"));
        pushButton->raise();
        label->raise();
        nostaRahaaButton->raise();
        TilitiedotBitton->raise();
        LahjoitaRahaaButton->raise();
        label_2->raise();
        saldoLabel->raise();
        label_3->raise();
        nostaRahaaButton_2->raise();

        retranslateUi(MainMenuMoottori);

        QMetaObject::connectSlotsByName(MainMenuMoottori);
    } // setupUi

    void retranslateUi(QDialog *MainMenuMoottori)
    {
        MainMenuMoottori->setWindowTitle(QApplication::translate("MainMenuMoottori", "Dialog", nullptr));
        label->setText(QApplication::translate("MainMenuMoottori", "P\303\244\303\244valikko", nullptr));
        pushButton->setText(QApplication::translate("MainMenuMoottori", "Kirjaudu ulos", nullptr));
        nostaRahaaButton->setText(QApplication::translate("MainMenuMoottori", "Nosta rahaa", nullptr));
        TilitiedotBitton->setText(QApplication::translate("MainMenuMoottori", "Tilitapahtumat", nullptr));
        LahjoitaRahaaButton->setText(QApplication::translate("MainMenuMoottori", "Lahjoita rahaa", nullptr));
        label_2->setText(QApplication::translate("MainMenuMoottori", "Saldo", nullptr));
        saldoLabel->setText(QApplication::translate("MainMenuMoottori", "*******", nullptr));
        label_3->setText(QApplication::translate("MainMenuMoottori", "TextLabel", nullptr));
        nostaRahaaButton_2->setText(QApplication::translate("MainMenuMoottori", "N\303\244yt\303\244 saldo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenuMoottori: public Ui_MainMenuMoottori {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENUMOOTTORI_H
