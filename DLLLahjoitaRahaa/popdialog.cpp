#include "popdialog.h"
#include "ui_popdialog.h"
//#include "moottoridialog.h"

PopDialog::PopDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PopDialog)
{
    ui->setupUi(this);  
}

PopDialog::~PopDialog()
{
    delete ui;
}

void PopDialog::on_kylla_clicked()
{
    emit signaali();
    this->close();
    emit signaaliClose();
}

void PopDialog::on_ei_clicked()
{
    koodi.clear();
    this->close();
}

void PopDialog::lahjoitusmaara(QString maara)
{
    //ui->label->setNum (maara);
    koodi.append("Haluatko lahjoittaa ");
    QString localAppend = koodi.append(maara);
    koodi.append("€?");
    ui->label->setText(koodi);
}
