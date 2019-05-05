/********************************************************************************
** Form generated from reading UI file 'nappaimisto.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAPPAIMISTO_H
#define UI_NAPPAIMISTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_nappaimisto
{
public:
    QPushButton *pushButtonTyhjenna;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QPushButton *pushButtonOK;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QPushButton *pushButton_0;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QLabel *label;
    QPushButton *pushButton_8;
    QLineEdit *lineEditSalasana;
    QPushButton *pushButtonPeruuta;

    void setupUi(QDialog *nappaimisto)
    {
        if (nappaimisto->objectName().isEmpty())
            nappaimisto->setObjectName(QLatin1String("nappaimisto"));
        nappaimisto->resize(1145, 796);
        QFont font;
        font.setPointSize(12);
        nappaimisto->setFont(font);
        pushButtonTyhjenna = new QPushButton(nappaimisto);
        pushButtonTyhjenna->setObjectName(QLatin1String("pushButtonTyhjenna"));
        pushButtonTyhjenna->setGeometry(QRect(320, 620, 91, 51));
        pushButtonTyhjenna->setFont(font);
        pushButtonTyhjenna->setLayoutDirection(Qt::RightToLeft);
        pushButton_6 = new QPushButton(nappaimisto);
        pushButton_6->setObjectName(QLatin1String("pushButton_6"));
        pushButton_6->setGeometry(QRect(530, 480, 61, 51));
        QFont font1;
        font1.setPointSize(18);
        pushButton_6->setFont(font1);
        pushButton_2 = new QPushButton(nappaimisto);
        pushButton_2->setObjectName(QLatin1String("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 410, 61, 51));
        pushButton_2->setFont(font1);
        pushButtonOK = new QPushButton(nappaimisto);
        pushButtonOK->setObjectName(QLatin1String("pushButtonOK"));
        pushButtonOK->setGeometry(QRect(530, 620, 91, 51));
        QFont font2;
        font2.setPointSize(16);
        pushButtonOK->setFont(font2);
        pushButton_4 = new QPushButton(nappaimisto);
        pushButton_4->setObjectName(QLatin1String("pushButton_4"));
        pushButton_4->setGeometry(QRect(350, 480, 61, 51));
        pushButton_4->setFont(font1);
        pushButton_7 = new QPushButton(nappaimisto);
        pushButton_7->setObjectName(QLatin1String("pushButton_7"));
        pushButton_7->setGeometry(QRect(350, 550, 61, 51));
        pushButton_7->setFont(font1);
        pushButton_5 = new QPushButton(nappaimisto);
        pushButton_5->setObjectName(QLatin1String("pushButton_5"));
        pushButton_5->setGeometry(QRect(440, 480, 61, 51));
        pushButton_5->setFont(font1);
        pushButton_0 = new QPushButton(nappaimisto);
        pushButton_0->setObjectName(QLatin1String("pushButton_0"));
        pushButton_0->setGeometry(QRect(440, 620, 61, 51));
        pushButton_0->setFont(font1);
        pushButton_1 = new QPushButton(nappaimisto);
        pushButton_1->setObjectName(QLatin1String("pushButton_1"));
        pushButton_1->setGeometry(QRect(350, 410, 61, 51));
        pushButton_1->setFont(font1);
        pushButton_3 = new QPushButton(nappaimisto);
        pushButton_3->setObjectName(QLatin1String("pushButton_3"));
        pushButton_3->setGeometry(QRect(530, 410, 61, 51));
        pushButton_3->setFont(font1);
        pushButton_9 = new QPushButton(nappaimisto);
        pushButton_9->setObjectName(QLatin1String("pushButton_9"));
        pushButton_9->setGeometry(QRect(530, 550, 61, 51));
        pushButton_9->setFont(font1);
        label = new QLabel(nappaimisto);
        label->setObjectName(QLatin1String("label"));
        label->setGeometry(QRect(300, 210, 351, 61));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(false);
        font3.setWeight(50);
        label->setFont(font3);
        label->setFrameShape(QFrame::Box);
        pushButton_8 = new QPushButton(nappaimisto);
        pushButton_8->setObjectName(QLatin1String("pushButton_8"));
        pushButton_8->setGeometry(QRect(440, 550, 61, 51));
        pushButton_8->setFont(font1);
        lineEditSalasana = new QLineEdit(nappaimisto);
        lineEditSalasana->setObjectName(QLatin1String("lineEditSalasana"));
        lineEditSalasana->setGeometry(QRect(320, 310, 311, 81));
        lineEditSalasana->setFont(font1);
        lineEditSalasana->setLayoutDirection(Qt::LeftToRight);
        lineEditSalasana->setEchoMode(QLineEdit::Normal);
        pushButtonPeruuta = new QPushButton(nappaimisto);
        pushButtonPeruuta->setObjectName(QLatin1String("pushButtonPeruuta"));
        pushButtonPeruuta->setGeometry(QRect(320, 740, 301, 31));
        pushButtonPeruuta->setFont(font2);

        retranslateUi(nappaimisto);

        QMetaObject::connectSlotsByName(nappaimisto);
    } // setupUi

    void retranslateUi(QDialog *nappaimisto)
    {
        nappaimisto->setWindowTitle(QApplication::translate("nappaimisto", "Dialog", nullptr));
        pushButtonTyhjenna->setText(QApplication::translate("nappaimisto", "Tyhjenn\303\244", nullptr));
        pushButton_6->setText(QApplication::translate("nappaimisto", "6", nullptr));
        pushButton_2->setText(QApplication::translate("nappaimisto", "2", nullptr));
        pushButtonOK->setText(QApplication::translate("nappaimisto", "OK", nullptr));
        pushButton_4->setText(QApplication::translate("nappaimisto", "4", nullptr));
        pushButton_7->setText(QApplication::translate("nappaimisto", "7", nullptr));
        pushButton_5->setText(QApplication::translate("nappaimisto", "5", nullptr));
        pushButton_0->setText(QApplication::translate("nappaimisto", "0", nullptr));
        pushButton_1->setText(QApplication::translate("nappaimisto", "1", nullptr));
        pushButton_3->setText(QApplication::translate("nappaimisto", "3", nullptr));
        pushButton_9->setText(QApplication::translate("nappaimisto", "9", nullptr));
        label->setText(QApplication::translate("nappaimisto", "Sy\303\266t\303\244 nostettava m\303\244\303\244r\303\244", nullptr));
        pushButton_8->setText(QApplication::translate("nappaimisto", "8", nullptr));
        pushButtonPeruuta->setText(QApplication::translate("nappaimisto", "Peruuta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nappaimisto: public Ui_nappaimisto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAPPAIMISTO_H
