#include "kirjaudusisaanmoottori.h"
#include "ui_kirjaudusisaanmoottori.h"


KirjauduSisaanMoottori::KirjauduSisaanMoottori(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::KirjauduSisaanMoottori)
{
    ui->setupUi(this);

    QPixmap bkgnd("C:/Data/taustakuva.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    rfSetup();
}

KirjauduSisaanMoottori::~KirjauduSisaanMoottori()
{
    delete ui;
    delete olioRFLukija->olioRFLukijaMoottori->serial;
    delete olioRFLukija->olioRFLukijaMoottori;
    delete olioRFLukija;
    delete model;
    delete olioDLLTietokanta;
}

void KirjauduSisaanMoottori::dbSetup()
{
    olioDLLTietokanta = new DLLTietokanta;
    olioDLLTietokanta->DLLTietokantaRajapintafunktio();

    model = new QSqlTableModel;
    model->setTable("asiakkaat");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
}

void KirjauduSisaanMoottori::rfSetup()
{
    dbSetup();

    olioRFLukija = new DLLRFLukija;
    olioRFLukija->DLLRFRajapintafunktio();

    QObject::connect(olioRFLukija->olioRFLukijaMoottori, SIGNAL(testi()), this, SLOT(testi2()));
}

void KirjauduSisaanMoottori::testi2()
{
    ui->label->setText("Syötä PIN -koodi:");
}

void KirjauduSisaanMoottori::on_pushButtonOK_clicked()
{
    id = olioRFLukija->DLLPalauttavaRajapintafunkio();
    for(int i = 0; i < model->rowCount(); i++)
    {
        if (id.compare(model->data(model->index(i,3)).toString())==0)
        {
            if (koodi.compare(model->data(model->index(i,4)).toString())==0)
            {
                koodi.clear();
                merkki.clear();
                ui->lineEditSalasana->clear();

                olioDLLMainMenu = new DLLMainMenu;
                olioDLLMainMenu->DLLMainMenuRajapintafunktio(i);

                ui->label->setText("Syötä kortti lukijaan");

                koodi.clear();
                merkki.clear();

                rfSetup();
            }
            else
            {
                ui->lineEditSalasana->setText("VÄÄRIN");

                koodi.clear();
                merkki.clear();
            }

            i = model->rowCount();
        }
    }
}

void KirjauduSisaanMoottori::on_pushButtonPeru_clicked()
{
    koodi.clear();
    merkki.clear();
    ui->lineEditSalasana->setText(merkki);
    rfSetup();
    ui->label->setText("Syötä kortti lukijaan");
}

void KirjauduSisaanMoottori::on_pushButton_1_clicked()
{
    koodi.append("1");
    merkki.append("*");
    ui->lineEditSalasana->setText(merkki);
}

void KirjauduSisaanMoottori::on_pushButton_2_clicked()
{
    koodi.append("2");
    merkki.append("*");
    ui->lineEditSalasana->setText(merkki);
}

void KirjauduSisaanMoottori::on_pushButton_3_clicked()
{
    koodi.append("3");
    merkki.append("*");
    ui->lineEditSalasana->setText(merkki);
}

void KirjauduSisaanMoottori::on_pushButton_4_clicked()
{
    koodi.append("4");
    merkki.append("*");
    ui->lineEditSalasana->setText(merkki);
}

void KirjauduSisaanMoottori::on_pushButton_5_clicked()
{
    koodi.append("5");
    merkki.append("*");
    ui->lineEditSalasana->setText(merkki);
}

void KirjauduSisaanMoottori::on_pushButton_6_clicked()
{
    koodi.append("6");
    merkki.append("*");
    ui->lineEditSalasana->setText(merkki);
}

void KirjauduSisaanMoottori::on_pushButton_7_clicked()
{
    koodi.append("7");
    merkki.append("*");
    ui->lineEditSalasana->setText(merkki);
}

void KirjauduSisaanMoottori::on_pushButton_8_clicked()
{
    koodi.append("8");
    merkki.append("*");
    ui->lineEditSalasana->setText(merkki);
}

void KirjauduSisaanMoottori::on_pushButton_9_clicked()
{
    koodi.append("9");
    merkki.append("*");
    ui->lineEditSalasana->setText(merkki);
}

void KirjauduSisaanMoottori::on_pushButton_0_clicked()
{
    koodi.append("0");
    merkki.append("*");
    ui->lineEditSalasana->setText(merkki);
}
