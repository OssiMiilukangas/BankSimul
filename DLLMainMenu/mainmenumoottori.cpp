#include "mainmenumoottori.h"
#include "ui_mainmenumoottori.h"

MainMenuMoottori::MainMenuMoottori(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainMenuMoottori)
{
    ui->setupUi(this);

    QPixmap bkgnd("C:/Data/taustakuva.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    setupMenu();
}

MainMenuMoottori::~MainMenuMoottori()
{
    delete ui;
    /*delete olioDLLNostaRahaa;
    delete olioDLLTilitapahtumat;
    delete olioDLLLahjoitaRahaa;*/
}

void MainMenuMoottori::setupMenu()
{
    olioDLLNostaRahaa = new DLLNostaRahaa;
    olioDLLLahjoitaRahaa = new DLLLahjoitaRahaa;
    olioDLLTilitapahtumat = new DLLTilitapahtumat;

    omaAjastin = new QTimer(this);
    omaAjastin->setInterval(1000);
    omaAjastin->start();

    QObject::connect(omaAjastin, SIGNAL(timeout()), this, SLOT(ajastin()));

    QObject::connect(olioDLLNostaRahaa->oliomoottoriNostaRahaa, SIGNAL(ajastinNollaus()), this, SLOT(resetAjastin()));

    QObject::connect(olioDLLNostaRahaa->oliomoottoriNostaRahaa->olioNappaimisto, SIGNAL(ajastinNollaus()), this, SLOT(resetAjastin()));

    QObject::connect(olioDLLLahjoitaRahaa->oliomoottoriDialog, SIGNAL(ajastinNollaus()), this, SLOT(resetAjastin()));

    QObject::connect(olioDLLTilitapahtumat->olioTilitapahtumatMoottori, SIGNAL(ajastinNollaus()), this, SLOT(resetAjastin()));
}

void MainMenuMoottori::on_pushButton_clicked()
{
    this->close();
}

void MainMenuMoottori::naytaSaldo()
{
    /*olioDLLTietokanta = new DLLTietokanta;
    olioDLLTietokanta->DLLTietokantaRajapintafunktio();*/

    QSqlTableModel modelTilitiedot;
    modelTilitiedot.setTable("tilitiedot");
    modelTilitiedot.setEditStrategy(QSqlTableModel::OnManualSubmit);
    modelTilitiedot.select();

    saldo = modelTilitiedot.data(modelTilitiedot.index(asiakasNumero,2)).toInt();
}

void MainMenuMoottori::asiakasPalautus(int asiakas)
{
    asiakasNumero = asiakas;

    QSqlTableModel modelAsiakkaat;
    modelAsiakkaat.setTable("asiakkaat");
    modelAsiakkaat.setEditStrategy(QSqlTableModel::OnManualSubmit);
    modelAsiakkaat.select();

    etunimi = modelAsiakkaat.data(modelAsiakkaat.index(asiakasNumero,1)).toString();
    sukunimi = modelAsiakkaat.data(modelAsiakkaat.index(asiakasNumero,2)).toString();

    ui->label_3->setText(etunimi + " " + sukunimi);
}

void MainMenuMoottori::on_TilitiedotBitton_clicked()
{
    olioDLLTilitapahtumat = new DLLTilitapahtumat;
    olioDLLTilitapahtumat->DLLTilitapahtumatRajapintaFunktio(asiakasNumero);

    ui->saldoLabel->setText("*******");
    ui->nostaRahaaButton_2->setText("Näytä saldo");
    saldoState = 0;

    resetAjastin();
}

void MainMenuMoottori::on_LahjoitaRahaaButton_clicked()
{
    olioDLLLahjoitaRahaa = new DLLLahjoitaRahaa;
    olioDLLLahjoitaRahaa->rajapintafunktioDLLLahjoita(asiakasNumero);

    ui->saldoLabel->setText("*******");
    ui->nostaRahaaButton_2->setText("Näytä saldo");
    saldoState = 0;
    paivitysState = 1;

    resetAjastin();
}

void MainMenuMoottori::on_nostaRahaaButton_clicked()
{
    olioDLLNostaRahaa = new DLLNostaRahaa;
    olioDLLNostaRahaa->rajapintafunktioDLLNosta(asiakasNumero);

    ui->saldoLabel->setText("*******");
    ui->nostaRahaaButton_2->setText("Näytä saldo");
    saldoState = 0;
    paivitysState = 1;

    resetAjastin();
}

void MainMenuMoottori::on_nostaRahaaButton_2_clicked()
{
    if(paivitysState == 1)
    {
        QSqlTableModel modelTilitiedot;
        modelTilitiedot.setTable("tilitiedot");
        modelTilitiedot.setEditStrategy(QSqlTableModel::OnManualSubmit);
        modelTilitiedot.select();

        saldo = modelTilitiedot.data(modelTilitiedot.index(asiakasNumero,2)).toInt();
        paivitysState = 0;
    }

    if(saldoState == 0)
    {
        ui->saldoLabel->setText(QString::number(saldo) + " €");
        ui->nostaRahaaButton_2->setText("Piilota saldo");
        saldoState = 1;
    }
    else if(saldoState == 1)
    {
        ui->saldoLabel->setText("*******");
        ui->nostaRahaaButton_2->setText("Näytä saldo");
        saldoState = 0;
    }
    resetAjastin();
}

void MainMenuMoottori::ajastin()
{
    aika--;
    if (aika == 0)
    {
        omaAjastin->stop();
        close();
        olioDLLNostaRahaa->oliomoottoriNostaRahaa->close();
        olioDLLNostaRahaa->oliomoottoriNostaRahaa->olioNappaimisto->close();
        olioDLLLahjoitaRahaa->oliomoottoriDialog->close();
        olioDLLTilitapahtumat->olioTilitapahtumatMoottori->close();
    }
}

void MainMenuMoottori::resetAjastin()
{
    aika = 30;
    omaAjastin->setInterval(1000);
    omaAjastin->start();
}

