#ifndef NAPPAIMISTO_H
#define NAPPAIMISTO_H

#include <QDialog>
#include "vahvistus.h"

namespace Ui {
class nappaimisto;
}

class nappaimisto : public QDialog
{
    Q_OBJECT

public:
    explicit nappaimisto(QWidget *parent = nullptr);
    ~nappaimisto();

    QString syottoNosto();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButtonTyhjenna_clicked();

    void on_pushButtonOK_clicked();

    void on_pushButtonPeruuta_clicked();

private:
    Ui::nappaimisto *ui;
    QString teksti2;
    QString merkki;

signals:
    void signaaliSyotto();

    void signaaliSulje2();

    void ajastinNollaus();

};

#endif // NAPPAIMISTO_H
