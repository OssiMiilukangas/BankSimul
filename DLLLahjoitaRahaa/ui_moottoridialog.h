/********************************************************************************
** Form generated from reading UI file 'moottoridialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOOTTORIDIALOG_H
#define UI_MOOTTORIDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MoottoriDialog
{
public:
    QPushButton *twotwenty;
    QPushButton *onetwenty;
    QPushButton *close;
    QPushButton *sixty;
    QPushButton *eighty;
    QPushButton *fourty;
    QPushButton *twenty;
    QLabel *label;

    void setupUi(QDialog *MoottoriDialog)
    {
        if (MoottoriDialog->objectName().isEmpty())
            MoottoriDialog->setObjectName(QLatin1String("MoottoriDialog"));
        MoottoriDialog->resize(1920, 1080);
        QFont font;
        font.setPointSize(16);
        MoottoriDialog->setFont(font);
        twotwenty = new QPushButton(MoottoriDialog);
        twotwenty->setObjectName(QLatin1String("twotwenty"));
        twotwenty->setGeometry(QRect(1050, 660, 201, 71));
        twotwenty->setFont(font);
        twotwenty->setStyleSheet(QLatin1String("background-color: rgb(201, 255, 245);"));
        onetwenty = new QPushButton(MoottoriDialog);
        onetwenty->setObjectName(QLatin1String("onetwenty"));
        onetwenty->setGeometry(QRect(1050, 540, 201, 71));
        onetwenty->setFont(font);
        onetwenty->setStyleSheet(QLatin1String("background-color: rgb(201, 255, 245);"));
        close = new QPushButton(MoottoriDialog);
        close->setObjectName(QLatin1String("close"));
        close->setGeometry(QRect(830, 810, 261, 71));
        close->setFont(font);
        close->setStyleSheet(QLatin1String("background-color: rgb(201, 255, 245);"));
        sixty = new QPushButton(MoottoriDialog);
        sixty->setObjectName(QLatin1String("sixty"));
        sixty->setGeometry(QRect(660, 660, 201, 71));
        sixty->setFont(font);
        sixty->setStyleSheet(QLatin1String("background-color: rgb(201, 255, 245);"));
        eighty = new QPushButton(MoottoriDialog);
        eighty->setObjectName(QLatin1String("eighty"));
        eighty->setGeometry(QRect(1050, 420, 201, 71));
        eighty->setFont(font);
        eighty->setStyleSheet(QLatin1String("background-color: rgb(201, 255, 245);"));
        fourty = new QPushButton(MoottoriDialog);
        fourty->setObjectName(QLatin1String("fourty"));
        fourty->setGeometry(QRect(660, 540, 201, 71));
        fourty->setFont(font);
        fourty->setStyleSheet(QLatin1String("background-color: rgb(201, 255, 245);"));
        twenty = new QPushButton(MoottoriDialog);
        twenty->setObjectName(QLatin1String("twenty"));
        twenty->setGeometry(QRect(660, 420, 201, 71));
        twenty->setFont(font);
        twenty->setStyleSheet(QLatin1String("background-color: rgb(201, 255, 245);"));
        label = new QLabel(MoottoriDialog);
        label->setObjectName(QLatin1String("label"));
        label->setGeometry(QRect(660, 240, 611, 91));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setScaledContents(false);

        retranslateUi(MoottoriDialog);

        QMetaObject::connectSlotsByName(MoottoriDialog);
    } // setupUi

    void retranslateUi(QDialog *MoottoriDialog)
    {
        MoottoriDialog->setWindowTitle(QApplication::translate("MoottoriDialog", "Dialog", nullptr));
        twotwenty->setText(QApplication::translate("MoottoriDialog", "240", nullptr));
        onetwenty->setText(QApplication::translate("MoottoriDialog", "120", nullptr));
        close->setText(QApplication::translate("MoottoriDialog", "Palaa", nullptr));
        sixty->setText(QApplication::translate("MoottoriDialog", "60", nullptr));
        eighty->setText(QApplication::translate("MoottoriDialog", "80", nullptr));
        fourty->setText(QApplication::translate("MoottoriDialog", "40", nullptr));
        twenty->setText(QApplication::translate("MoottoriDialog", "20", nullptr));
        label->setText(QApplication::translate("MoottoriDialog", "Sy\303\266t\303\244 nostettava m\303\244\303\244r\303\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MoottoriDialog: public Ui_MoottoriDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOOTTORIDIALOG_H
