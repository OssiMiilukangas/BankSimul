#include "tilitapahtumatmoottori.h"
#include "ui_tilitapahtumatmoottori.h"

tilitapahtumatMoottori::tilitapahtumatMoottori(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tilitapahtumatMoottori)
{
    ui->setupUi(this);

    QPixmap bkgnd("C:/Data/taustakuva.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    QObject::connect(this, SIGNAL(asiakasnumeroSignal()), this, SLOT(DBSetup()));
}

tilitapahtumatMoottori::~tilitapahtumatMoottori()
{
    model->clear();
    delete ui;
    delete model;
    //delete olioDLLTietokanta;
    delete olioTableWidget;
}

void tilitapahtumatMoottori::DBSetup()
{
    /*olioDLLTietokanta = new DLLTietokanta;
    olioDLLTietokanta->DLLTietokantaRajapintafunktio();*/

    tietokantaAsiakasnumero = QString::number(asiakasnumero + 101);

    model = new QSqlTableModel;
    model->setTable("tilitapahtumat");
    model->setFilter(QString(" idasiakkaat = '%1' ").arg(tietokantaAsiakasnumero));
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    setTable();
}

void tilitapahtumatMoottori::setTable()
{
    olioTableWidget = new QTableWidget(this);
    olioTableWidget->resize(413, 700);
    olioTableWidget->move(500, 200);
    olioTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    olioTableWidget->setStyleSheet("QTableView {selection-background-color: blue;}");
    olioTableWidget->setRowCount(model->rowCount());
    olioTableWidget->setColumnCount(3);
    olioTableWidget->setHorizontalHeaderLabels(headers);
    olioTableWidget->verticalHeader()->setVisible(false);

    setPvm();

    setHinta();

    setSaaja();

    olioTableWidget->show();
}

void tilitapahtumatMoottori::setPvm()
{
    int j = 0;

    for(int i = model->rowCount() - 1; i >= 0; i--)
    {
        QString pvm = model->data(model->index(i,2)).toString();
        QTableWidgetItem *newItem = new QTableWidgetItem(pvm);
        olioTableWidget->setItem(j, 0, newItem);
        j++;
    }
}

void tilitapahtumatMoottori::setHinta()
{
    int j = 0;

    for(int i = model->rowCount() - 1; i >= 0; i--)
    {
        double hinta = model->data(model->index(i,3)).toDouble();
        QTableWidgetItem *newItem = new QTableWidgetItem(QString::number(hinta));
        olioTableWidget->setItem(j, 1, newItem);
        j++;
    }
}

void tilitapahtumatMoottori::setSaaja()
{
    int j = 0;

    for(int i = model->rowCount() - 1; i >= 0; i--)
    {
        QString saaja = model->data(model->index(i,4)).toString();
        QTableWidgetItem *newItem = new QTableWidgetItem(saaja);
        olioTableWidget->setItem(j, 2, newItem);
        j++;
    }
}

void tilitapahtumatMoottori::palautus(int asiakas)
{
    asiakasnumero = asiakas;

    emit asiakasnumeroSignal();
}

void tilitapahtumatMoottori::on_pushButton_clicked()
{
    emit ajastinNollaus();
    this->close();  
}
