/********************************************************************************
** Form generated from reading UI file 'popdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPDIALOG_H
#define UI_POPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PopDialog
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *kylla;
    QPushButton *ei;

    void setupUi(QDialog *PopDialog)
    {
        if (PopDialog->objectName().isEmpty())
            PopDialog->setObjectName(QLatin1String("PopDialog"));
        PopDialog->resize(500, 350);
        label = new QLabel(PopDialog);
        label->setObjectName(QLatin1String("label"));
        label->setGeometry(QRect(90, 80, 331, 51));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        widget = new QWidget(PopDialog);
        widget->setObjectName(QLatin1String("widget"));
        widget->setGeometry(QRect(110, 210, 261, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QLatin1String("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        kylla = new QPushButton(widget);
        kylla->setObjectName(QLatin1String("kylla"));

        horizontalLayout->addWidget(kylla);

        ei = new QPushButton(widget);
        ei->setObjectName(QLatin1String("ei"));

        horizontalLayout->addWidget(ei);


        retranslateUi(PopDialog);

        QMetaObject::connectSlotsByName(PopDialog);
    } // setupUi

    void retranslateUi(QDialog *PopDialog)
    {
        PopDialog->setWindowTitle(QApplication::translate("PopDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("PopDialog", "Haluatko lahjoittaa?", nullptr));
        kylla->setText(QApplication::translate("PopDialog", "Kyll\303\244", nullptr));
        ei->setText(QApplication::translate("PopDialog", "Ei", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PopDialog: public Ui_PopDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPDIALOG_H
