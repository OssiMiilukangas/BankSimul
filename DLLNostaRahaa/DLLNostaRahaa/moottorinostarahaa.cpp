#include "moottorinostarahaa.h"
#include "ui_moottorinostarahaa.h"

MoottoriNostaRahaa::MoottoriNostaRahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MoottoriNostaRahaa)
{
    ui->setupUi(this);

    QPixmap bkgnd("C:/Data/taustakuva.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    olioVahvistus = new Vahvistus(this);
    olioNappaimisto = new nappaimisto (this);

    //olioDLLTietokanta = new DLLTietokanta;
    //olioDLLTietokanta->DLLTietokantaRajapintafunktio();

    model = new QSqlTableModel;
    model->setTable("tilitiedot"); //tarvitaan, että saadaan saldo nostota varten tietokannasta
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    QObject::connect(olioVahvistus, SIGNAL(signaaliNosto()), this, SLOT(slottiNosto()));

    QObject::connect(olioVahvistus, SIGNAL(signaaliSulje()), this, SLOT(slottiSulje()));

    QObject::connect(olioNappaimisto, SIGNAL(signaaliSyotto()), this, SLOT(slottiSyotto()));

    QObject::connect(olioNappaimisto, SIGNAL(signaaliSulje2()), this, SLOT(slottiSulje2()));
}

MoottoriNostaRahaa::~MoottoriNostaRahaa()
{
    delete model;
    delete olioNappaimisto;
    delete ui;
    delete olioVahvistus;
    //delete olioDLLTietokanta;
}

void MoottoriNostaRahaa::nostoFunktio()
{
    if (nosto > saldo)
    {
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setText("Tilillä ei ole katetta");
        msgBox.exec();
    }
    else
    {
        olioVahvistus->nostomaara(QString::number(nosto));

        olioVahvistus->setModal(true);
        olioVahvistus->exec();
    }
}

void MoottoriNostaRahaa::on_twenty_clicked()
{
    nosto = 20;

    nostoFunktio();

    emit ajastinNollaus();
}

void MoottoriNostaRahaa::on_fourty_clicked()
{
    nosto = 40;

    nostoFunktio();

    emit ajastinNollaus();
}

void MoottoriNostaRahaa::on_sixty_clicked()
{
    nosto = 60;

    nostoFunktio();

    emit ajastinNollaus();
}

void MoottoriNostaRahaa::on_eighty_clicked()
{
    nosto = 80;

    nostoFunktio();

    emit ajastinNollaus();
}

void MoottoriNostaRahaa::on_onetwenty_clicked()
{
    nosto = 120;

    nostoFunktio();

    emit ajastinNollaus();
}


void MoottoriNostaRahaa::on_muuSumma_clicked()
{
    olioNappaimisto->exec();

    emit ajastinNollaus();
}

void MoottoriNostaRahaa::on_close_clicked()
{
    this->close();

    emit ajastinNollaus();
}

void MoottoriNostaRahaa::slottiNosto()
{
    QSqlQuery query;
    query.prepare("UPDATE tilitiedot SET saldo = saldo - :nosto  WHERE idTili = :asiakas");
    query.bindValue(":nosto", nosto);
    query.bindValue(":asiakas", asiakasnumero + 101);
    query.exec();
    model->clear();

    QSqlTableModel model;
    model.setTable("tilitapahtumat");
    model.setEditStrategy(QSqlTableModel::OnManualSubmit);
    model.select();

    int LastId = model.data(model.index(model.rowCount() - 1,0)).toInt();

    QDate date = QDate::currentDate();
    QSqlQuery query1;
    query1.prepare("INSERT INTO tilitapahtumat (idtilitapahtuma, idasiakkaat, paivamaara, hinta, saaja) "
                   "VALUES (:idtilitapahtuma, :idasiakkaat, :paivamaara, :hinta, :saaja)");
    query1.addBindValue(LastId + 1);
    query1.addBindValue(asiakasnumero + 101);
    query1.addBindValue(date.toString("yyyy.MM.dd"));
    query1.addBindValue(nosto);
    query1.addBindValue("Käteisen nosto");
    query1.exec();
}

void MoottoriNostaRahaa::slottiSulje()
{
    this->close();
}

void MoottoriNostaRahaa::slottiSyotto()
{
    QString asd = olioNappaimisto-> syottoNosto();
    nosto = asd.toInt();

    if (nosto > saldo)
    {
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setText("Tilillä ei ole katetta");
        msgBox.exec();

    }
    else if (nosto > 500)
    {
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        msgBox.setText("Haluatko varmasti nostaa yli 500 €?");
        int ret = msgBox.exec();

        switch (ret)
        {
          case QMessageBox::Ok:
              slottiNosto();
              break;

          case QMessageBox::Cancel: // Cancel was clicked
              break;
        }
    }
    else
    {
        slottiNosto();
    }
}

void MoottoriNostaRahaa::slottiSulje2()
{
    this->close();
}

void MoottoriNostaRahaa::palautus(int asiakas)
{
    asiakasnumero = asiakas;
    saldo = model->data(model->index(asiakasnumero,2)).toDouble();
}
