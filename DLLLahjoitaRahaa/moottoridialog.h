#ifndef MOOTTORIDIALOG_H
#define MOOTTORIDIALOG_H

#include <QDialog>
#include <QApplication>
#include <QWidget>
#include "popdialog.h"
#include "dlltietokanta.h"
#include <QMessageBox>
#include <QDate>

namespace Ui {
class MoottoriDialog;
}

class MoottoriDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MoottoriDialog(QWidget *parent = nullptr);
    ~MoottoriDialog();

    void palautus(int asiakas);


private slots:
    void on_close_clicked();

    void on_twenty_clicked();

    void on_fourty_clicked();

    void on_sixty_clicked();

    void on_eighty_clicked();

    void on_onetwenty_clicked();

    void on_twotwenty_clicked();

    void slotti();

    void slotClose();

    void lahjoitusFunktio();

signals:
    void ajastinNollaus();

private:
    Ui::MoottoriDialog *ui;
    int lahjoitus = 0;
    double saldo;
    int asiakasnumero;

    PopDialog *olioPopDialog;
    DLLTietokanta *olioDLLTietokanta;
    QSqlTableModel *model;
};

#endif // MOOTTORIDIALOG_H
