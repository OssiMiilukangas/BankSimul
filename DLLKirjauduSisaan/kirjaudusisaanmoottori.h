#ifndef KIRJAUDUSISAANMOOTTORI_H
#define KIRJAUDUSISAANMOOTTORI_H

#include "dllrflukija.h"
#include "dllmainmenu.h"
#include "dlltietokanta.h"
#include "dlltilitapahtumat.h"
#include <QDialog>
#include <QString>
#include <QLineEdit>
#include <QPushButton>
#include <QObject>
#include <QThread>

namespace Ui {
class KirjauduSisaanMoottori;
}

class KirjauduSisaanMoottori : public QDialog
{
    Q_OBJECT

public:
    explicit KirjauduSisaanMoottori(QWidget *parent = nullptr);
    ~KirjauduSisaanMoottori();
    void rfSetup();
    void dbSetup();

public slots:
    void testi2();

private slots:

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButtonPeru_clicked();

    void on_pushButtonOK_clicked();

private:
    Ui::KirjauduSisaanMoottori *ui;
    DLLRFLukija *olioRFLukija;
    DLLMainMenu *olioDLLMainMenu;
    DLLTietokanta *olioDLLTietokanta;
    DLLTilitapahtumat *olioDLLTilitapahtumat;
    QSqlTableModel *model;
    QString koodi;
    QString merkki;
    QString id;


signals:
    //void testi();
    //void entered(QString password);
};

#endif // KIRJAUDUSISAANMOOTTORI_H
