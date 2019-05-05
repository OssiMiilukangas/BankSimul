/********************************************************************************
** Form generated from reading UI file 'vahvistus.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VAHVISTUS_H
#define UI_VAHVISTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Vahvistus
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *kylla;
    QPushButton *ei;

    void setupUi(QDialog *Vahvistus)
    {
        if (Vahvistus->objectName().isEmpty())
            Vahvistus->setObjectName(QLatin1String("Vahvistus"));
        Vahvistus->resize(500, 350);
        label = new QLabel(Vahvistus);
        label->setObjectName(QLatin1String("label"));
        label->setGeometry(QRect(100, 80, 331, 51));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        layoutWidget = new QWidget(Vahvistus);
        layoutWidget->setObjectName(QLatin1String("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 210, 241, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QLatin1String("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        kylla = new QPushButton(layoutWidget);
        kylla->setObjectName(QLatin1String("kylla"));

        horizontalLayout->addWidget(kylla);

        ei = new QPushButton(layoutWidget);
        ei->setObjectName(QLatin1String("ei"));

        horizontalLayout->addWidget(ei);


        retranslateUi(Vahvistus);

        QMetaObject::connectSlotsByName(Vahvistus);
    } // setupUi

    void retranslateUi(QDialog *Vahvistus)
    {
        Vahvistus->setWindowTitle(QApplication::translate("Vahvistus", "Dialog", nullptr));
        label->setText(QApplication::translate("Vahvistus", "Nostom\303\244\303\244r\303\244", nullptr));
        kylla->setText(QApplication::translate("Vahvistus", "Kyll\303\244", nullptr));
        ei->setText(QApplication::translate("Vahvistus", "Ei", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Vahvistus: public Ui_Vahvistus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VAHVISTUS_H
