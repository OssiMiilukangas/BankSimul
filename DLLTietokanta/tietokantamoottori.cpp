#include "tietokantamoottori.h"

TietokantaMoottori::TietokantaMoottori()
{
    /*
     *  NÄITÄ RIVEJÄ LAITETAAN SITTE SINNE EXEEN/DLL:ÄÄN
     *
    olioDLLTietokanta = new DLLTietokanta;
    olioDLLTietokanta->DLLTietokantaRajapintafunktio();

    QSqlTableModel *model;                  //määritetään taulu, jotta sitä voidaan käyttää ohjelmassa

    model = new QSqlTableModel;
    model->setTable("asiakkaat");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    QTableView *view = new QTableView;      //Tämä pätkä on vain testi, jolla saadaan taulu näkymään ikkunassa
    view->setModel(model);
    view->setWindowTitle("");
    view->show();

    idasiakas1 = model->data(model->index(0,0)).toString();     //Määritetään arvot käytettäviksi,
    etunimi1 = model->data(model->index(0,1)).toString();       //ei tarvi muita kuin ne joita käytetään.
    sukunimi1 = model->data(model->index(0,2)).toString();
    RFtunnus1 = model->data(model->index(0,3)).toString();
    salasana1 = model->data(model->index(0,4)).toString();

    //Kun päivitetään tietoja, taulu täytyy nollata ja määrittää
    //uudelleen jotta tiedot päivittyvät heti

    QSqlQuery query;
    query.exec("UPDATE asiakkaat SET etunimi = 'Heikki' WHERE idasiakkaat = 101");
    model->QSqlTableModel::clear();

    //Jos haluua käyttää muuttujia

    QsqlQuery query;
    query.prepare("UPDATE tilitiedot SET saldo = saldo - :lahjoitus WHERE idtilitiedot = 101")
    query.bindValue(":lahjoitus", lahjoitusMuuttuja);
    query.exec();
    model->clear();
    */
}

bool TietokantaMoottori::createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("mysli.oamk.fi");
    db.setDatabaseName("opisk_t8mios00");
    db.setUserName("t8mios00");
    db.setPassword("TZUX5TftmfDptgrB");

    if (!db.open()) {
        QMessageBox::critical(nullptr, qApp->tr("Cannot open database"),
        qApp->tr("Unable to establish a database connection.\n"),
        QMessageBox::Cancel);
        return false;
    }
    return true;
}
