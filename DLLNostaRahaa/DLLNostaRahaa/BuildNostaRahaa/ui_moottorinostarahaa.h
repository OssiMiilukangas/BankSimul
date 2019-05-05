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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MoottoriNostaRahaa
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *eighty;
    QPushButton *onetwenty;
    QPushButton *muuSumma;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QPushButton *twenty;
    QPushButton *fourty;
    QPushButton *sixty;
    QPushButton *close;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;

    void setupUi(QDialog *MoottoriNostaRahaa)
    {
        if (MoottoriNostaRahaa->objectName().isEmpty())
            MoottoriNostaRahaa->setObjectName(QLatin1String("MoottoriNostaRahaa"));
        MoottoriNostaRahaa->resize(767, 466);
        layoutWidget = new QWidget(MoottoriNostaRahaa);
        layoutWidget->setObjectName(QLatin1String("layoutWidget"));
        layoutWidget->setGeometry(QRect(490, 170, 87, 161));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QLatin1String("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        eighty = new QPushButton(layoutWidget);
        eighty->setObjectName(QLatin1String("eighty"));

        verticalLayout_2->addWidget(eighty);

        onetwenty = new QPushButton(layoutWidget);
        onetwenty->setObjectName(QLatin1String("onetwenty"));

        verticalLayout_2->addWidget(onetwenty);

        muuSumma = new QPushButton(layoutWidget);
        muuSumma->setObjectName(QLatin1String("muuSumma"));

        verticalLayout_2->addWidget(muuSumma);

        layoutWidget_2 = new QWidget(MoottoriNostaRahaa);
        layoutWidget_2->setObjectName(QLatin1String("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(190, 170, 87, 161));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QLatin1String("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        twenty = new QPushButton(layoutWidget_2);
        twenty->setObjectName(QLatin1String("twenty"));

        verticalLayout->addWidget(twenty);

        fourty = new QPushButton(layoutWidget_2);
        fourty->setObjectName(QLatin1String("fourty"));

        verticalLayout->addWidget(fourty);

        sixty = new QPushButton(layoutWidget_2);
        sixty->setObjectName(QLatin1String("sixty"));

        verticalLayout->addWidget(sixty);

        close = new QPushButton(MoottoriNostaRahaa);
        close->setObjectName(QLatin1String("close"));
        close->setGeometry(QRect(250, 360, 285, 26));
        layoutWidget1 = new QWidget(MoottoriNostaRahaa);
        layoutWidget1->setObjectName(QLatin1String("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(240, 80, 287, 63));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QLatin1String("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QLatin1String("label_2"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setScaledContents(false);

        verticalLayout_3->addWidget(label_2);


        retranslateUi(MoottoriNostaRahaa);

        QMetaObject::connectSlotsByName(MoottoriNostaRahaa);
    } // setupUi

    void retranslateUi(QDialog *MoottoriNostaRahaa)
    {
        MoottoriNostaRahaa->setWindowTitle(QApplication::translate("MoottoriNostaRahaa", "Dialog", nullptr));
        eighty->setText(QApplication::translate("MoottoriNostaRahaa", "80", nullptr));
        onetwenty->setText(QApplication::translate("MoottoriNostaRahaa", "120", nullptr));
        muuSumma->setText(QApplication::translate("MoottoriNostaRahaa", "Sy\303\266t\303\244 m\303\244\303\244r\303\244", nullptr));
        twenty->setText(QApplication::translate("MoottoriNostaRahaa", "20", nullptr));
        fourty->setText(QApplication::translate("MoottoriNostaRahaa", "40", nullptr));
        sixty->setText(QApplication::translate("MoottoriNostaRahaa", "60", nullptr));
        close->setText(QApplication::translate("MoottoriNostaRahaa", "Palaa", nullptr));
        label_2->setText(QApplication::translate("MoottoriNostaRahaa", "Sy\303\266t\303\244 nostettava m\303\244\303\244r\303\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MoottoriNostaRahaa: public Ui_MoottoriNostaRahaa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOOTTORINOSTARAHAA_H
