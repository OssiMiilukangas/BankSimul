#ifndef MAINMENUMOOTTORI_H
#define MAINMENUMOOTTORI_H

#include <QDialog>
#include <QObject>
#include <QString>
#include <qtimer.h>

#include "dlltietokanta.h"
#include "dlltilitapahtumat.h"
#include "dlllahjoitarahaa.h"
#include "dllnostarahaa.h"

namespace Ui {
class MainMenuMoottori;
}

class MainMenuMoottori : public QDialog
{
    Q_OBJECT

public:
    explicit MainMenuMoottori(QWidget *parent = nullptr);
    ~MainMenuMoottori();
    void asiakasPalautus(int asiakas);
    void setupMenu();

private slots:
    void on_pushButton_clicked();

    void on_TilitiedotBitton_clicked();

    void on_nostaRahaaButton_2_clicked();

    void ajastin();

    void resetAjastin();

    void on_LahjoitaRahaaButton_clicked();

    void on_nostaRahaaButton_clicked();

public slots:
    void naytaSaldo();

signals:
    void ajastinNollaus();

private:
    Ui::MainMenuMoottori *ui;
    DLLTietokanta *olioDLLTietokanta;
    DLLTilitapahtumat *olioDLLTilitapahtumat;
    DLLLahjoitaRahaa *olioDLLLahjoitaRahaa;
    DLLNostaRahaa *olioDLLNostaRahaa;
    QTimer *omaAjastin;

    int aika = 30;
    int saldo = 0;
    int asiakasNumero;
    int saldoState = 0;
    int paivitysState = 0;
    QString etunimi;
    QString sukunimi;
};

#endif // MAINMENUMOOTTORI_H
