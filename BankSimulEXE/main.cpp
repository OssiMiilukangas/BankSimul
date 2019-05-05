#include "banksimulexe.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BankSimulEXE w;
    w.show();

    return a.exec();
}
