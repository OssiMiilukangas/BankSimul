#ifndef MOOTTORINOSTARAHAA_H
#define MOOTTORINOSTARAHAA_H

#include <QDialog>
#include "dlltietokanta.h"
#include <QMessageBox>
#include <vahvistus.h>
#include <nappaimisto.h>
#include <QDebug>
#include <QDate>

namespace Ui {
class MoottoriNostaRahaa;
}

class MoottoriNostaRahaa : public QDialog
{
    Q_OBJECT

public:
    explicit MoottoriNostaRahaa(QWidget *parent = nullptr);
    ~MoottoriNostaRahaa();

    void palautus(int asiakas);

    nappaimisto *olioNappaimisto;

private slots:

    void nostoFunktio();

    void on_twenty_clicked();

    void on_fourty_clicked();

    void on_sixty_clicked();

    void on_eighty_clicked();

    void on_onetwenty_clicked();

    void on_muuSumma_clicked();

    void on_close_clicked();

    void slottiNosto();

    void slottiSulje();

    void slottiSyotto();

    void slottiSulje2();

signals:
    void ajastinNollaus();

private:
    Ui::MoottoriNostaRahaa *ui;

    int nosto = 0;
    double saldo;
    int syotettyNosto = 0;
    int asiakasnumero;

    DLLTietokanta *olioDLLTietokanta;
    QSqlTableModel *model;
    Vahvistus *olioVahvistus;


};

#endif // MOOTTORINOSTARAHAA_H
