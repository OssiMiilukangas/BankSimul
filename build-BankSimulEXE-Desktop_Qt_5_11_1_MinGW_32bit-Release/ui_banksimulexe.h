/********************************************************************************
** Form generated from reading UI file 'banksimulexe.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANKSIMULEXE_H
#define UI_BANKSIMULEXE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BankSimulEXE
{
public:
    QLabel *label;

    void setupUi(QWidget *BankSimulEXE)
    {
        if (BankSimulEXE->objectName().isEmpty())
            BankSimulEXE->setObjectName(QStringLiteral("BankSimulEXE"));
        BankSimulEXE->resize(968, 510);
        label = new QLabel(BankSimulEXE);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(400, 200, 291, 101));
        QFont font;
        font.setPointSize(28);
        label->setFont(font);

        retranslateUi(BankSimulEXE);

        QMetaObject::connectSlotsByName(BankSimulEXE);
    } // setupUi

    void retranslateUi(QWidget *BankSimulEXE)
    {
        BankSimulEXE->setWindowTitle(QApplication::translate("BankSimulEXE", "BankSimulEXE", nullptr));
        label->setText(QApplication::translate("BankSimulEXE", "Ladataan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BankSimulEXE: public Ui_BankSimulEXE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANKSIMULEXE_H
