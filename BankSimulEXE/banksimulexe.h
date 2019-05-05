#ifndef BANKSIMULEXE_H
#define BANKSIMULEXE_H

#include <QWidget>
#include "dllkirjaudusisaan.h"
#include "dllmainmenu.h"

namespace Ui {
class BankSimulEXE;
}

class BankSimulEXE : public QWidget
{
    Q_OBJECT

public:
    explicit BankSimulEXE(QWidget *parent = nullptr);
    ~BankSimulEXE();

private:
    Ui::BankSimulEXE *ui;
    DLLKirjauduSisaan *olioDLLKirjauduSisaan;
};

#endif // BANKSIMULEXE_H
