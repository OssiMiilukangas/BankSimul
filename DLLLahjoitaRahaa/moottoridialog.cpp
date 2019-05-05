#include "moottoridialog.h"
#include "ui_moottoridialog.h"

MoottoriDialog::MoottoriDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MoottoriDialog)
{
    ui->setupUi(this);

    olioPopDialog = new PopDialog(this);

    QPixmap bkgnd("C:/Data/taustakuva.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    /*olioDLLTietokanta = new DLLTietokanta; //tietokantaDLL olio
    olioDLLTietokanta->DLLTietokantaRajapintafunktio(); //toisen DDL:n kutsu*/

    //QSqlTableModel *model;     tämä headeriin
    //määritetään taulu, jotta sitä voidaan käyttää ohjelmassa
    model = new QSqlTableModel;
    model->setTable("tilitiedot"); //tarvitaan, että saadaan saldo lahjoitusta varten tietokannasta
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    QObject::connect(olioPopDialog, SIGNAL(signaali()), this, SLOT(slotti()));

    QObject::connect(olioPopDialog, SIGNAL(signaaliClose()), this, SLOT(slotClose()));
}

MoottoriDialog::~MoottoriDialog()
{
    delete ui;
    delete model;
    delete olioPopDialog;
    //delete olioDLLTietokanta;
}

void MoottoriDialog::on_close_clicked()
{
    this->close();
}

void MoottoriDialog::lahjoitusFunktio()
{
    if (lahjoitus > saldo)
    {
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setText("Tilillä ei ole katetta");
        msgBox.exec();
    }
    else
    {
        olioPopDialog->lahjoitusmaara(QString::number(lahjoitus));

        olioPopDialog->setModal(true);
        olioPopDialog->exec();
    }
}

void MoottoriDialog::on_twenty_clicked()
{
    lahjoitus = 20;

    lahjoitusFunktio();

    emit ajastinNollaus();
}

void MoottoriDialog::on_fourty_clicked()
{
    lahjoitus = 40;

    lahjoitusFunktio();

    emit ajastinNollaus();
}

void MoottoriDialog::on_sixty_clicked()
{
    lahjoitus = 60;

    lahjoitusFunktio();

    emit ajastinNollaus();
}

void MoottoriDialog::on_eighty_clicked()
{
    lahjoitus = 80;

    lahjoitusFunktio();

    emit ajastinNollaus();
}

void MoottoriDialog::on_onetwenty_clicked()
{
    lahjoitus = 120;

    lahjoitusFunktio();

    emit ajastinNollaus();
}

void MoottoriDialog::on_twotwenty_clicked()
{
    //ui->label->setText(QString::number(saldo1)); //testi

    lahjoitus = 240;

    lahjoitusFunktio();

    emit ajastinNollaus();
}

void MoottoriDialog::slotClose()
{
    this->close();
}

void MoottoriDialog::slotti()
{
    QSqlQuery query;
    query.prepare("UPDATE tilitiedot SET saldo = saldo - :lahjoitus  WHERE idTili = :asiakas");
    query.bindValue(":lahjoitus", lahjoitus);
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
    query1.addBindValue(lahjoitus);
    query1.addBindValue("Lahjoitus");
    query1.exec();
}

void MoottoriDialog::palautus(int asiakas)
{
    asiakasnumero = asiakas;
    saldo = model->data(model->index(asiakasnumero,2)).toDouble();
}
