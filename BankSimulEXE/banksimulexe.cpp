#include "banksimulexe.h"
#include "ui_banksimulexe.h"

BankSimulEXE::BankSimulEXE(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BankSimulEXE)
{
    //ui->setupUi(this);
    olioDLLKirjauduSisaan = new DLLKirjauduSisaan;
    olioDLLKirjauduSisaan->rajapintafunktioDLLKirjauduSisaan();
}

BankSimulEXE::~BankSimulEXE()
{
    delete ui;
    delete olioDLLKirjauduSisaan;
}
