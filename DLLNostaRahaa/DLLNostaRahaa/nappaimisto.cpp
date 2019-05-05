#include "nappaimisto.h"
#include "ui_nappaimisto.h"

nappaimisto::nappaimisto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nappaimisto)
{
    ui->setupUi(this);
    QPixmap bkgnd("C:/Data/taustakuva.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

nappaimisto::~nappaimisto()
{
    delete ui;
}

QString nappaimisto::syottoNosto()
{
    return merkki;
}

void nappaimisto::on_pushButton_1_clicked()
{
    merkki.append("1");
    ui->lineEditSalasana->setText(merkki);

    emit ajastinNollaus();
}

void nappaimisto::on_pushButton_2_clicked()
{
    merkki.append("2");
    ui->lineEditSalasana->setText(merkki);

    emit ajastinNollaus();
}

void nappaimisto::on_pushButton_3_clicked()
{
    merkki.append("3");
    ui->lineEditSalasana->setText(merkki);

    emit ajastinNollaus();
}

void nappaimisto::on_pushButton_4_clicked()
{
    merkki.append("4");
    ui->lineEditSalasana->setText(merkki);

    emit ajastinNollaus();
}

void nappaimisto::on_pushButton_5_clicked()
{
    merkki.append("5");
    ui->lineEditSalasana->setText(merkki);

    emit ajastinNollaus();
}

void nappaimisto::on_pushButton_6_clicked()
{
    merkki.append("6");
    ui->lineEditSalasana->setText(merkki);

    emit ajastinNollaus();
}

void nappaimisto::on_pushButton_7_clicked()
{
    merkki.append("7");
    ui->lineEditSalasana->setText(merkki);

    emit ajastinNollaus();
}

void nappaimisto::on_pushButton_8_clicked()
{
    merkki.append("8");
    ui->lineEditSalasana->setText(merkki);

    emit ajastinNollaus();
}

void nappaimisto::on_pushButton_9_clicked()
{
    merkki.append("9");
    ui->lineEditSalasana->setText(merkki);

    emit ajastinNollaus();
}

void nappaimisto::on_pushButton_0_clicked()
{
    merkki.append("0");
    ui->lineEditSalasana->setText(merkki);

    emit ajastinNollaus();
}

void nappaimisto::on_pushButtonTyhjenna_clicked()
{
    merkki.clear();
    ui->lineEditSalasana->clear();

    emit ajastinNollaus();
}

void nappaimisto::on_pushButtonOK_clicked()
{
    emit ajastinNollaus();

    emit signaaliSyotto();

    ui->lineEditSalasana->clear();
    merkki.clear();

    emit signaaliSulje2();

    this->close();
}

void nappaimisto::on_pushButtonPeruuta_clicked()
{
    merkki.clear();
    this->close();
    ui->lineEditSalasana->clear();

}
