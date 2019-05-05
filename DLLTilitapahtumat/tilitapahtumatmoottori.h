#ifndef TILITAPAHTUMATMOOTTORI_H
#define TILITAPAHTUMATMOOTTORI_H

#include <QDialog>
#include <QObject>
#include <QHeaderView>
#include <QDebug>
#include "dlltietokanta.h"

namespace Ui {
class tilitapahtumatMoottori;
}

class tilitapahtumatMoottori : public QDialog
{
    Q_OBJECT

public:
    explicit tilitapahtumatMoottori(QWidget *parent = nullptr);
    ~tilitapahtumatMoottori();
    void palautus(int asiakas);
    void setTable();
    void setHinta();
    void setSaaja();
    void setPvm();

private slots:
    void on_pushButton_clicked();
    void DBSetup();

signals:
    void ajastinNollaus();
    void asiakasnumeroSignal();

private:
    Ui::tilitapahtumatMoottori *ui;
    DLLTietokanta *olioDLLTietokanta;
    QSqlTableModel *model;
    QTableWidget *olioTableWidget;

    QStringList headers = { "Päivämäärä", "Hinta", "Tapahtuma" };
    QString tietokantaAsiakasnumero;
    int asiakasnumero;
};

#endif // TILITAPAHTUMATMOOTTORI_H
