#include "vahvistus.h"
#include "ui_vahvistus.h"

Vahvistus::Vahvistus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Vahvistus)
{
    ui->setupUi(this);

}

Vahvistus::~Vahvistus()
{
    delete ui;
}

void Vahvistus::nostomaara(QString maara)
{
    ui->label->setText("Haluatko nostaa " + maara + "€?");
}

void Vahvistus::on_kylla_clicked()
{
    emit signaaliNosto();
    this->close();
    emit signaaliSulje();
}

void Vahvistus::on_ei_clicked()
{
    this->close();
}
