#ifndef TIETOKANTAMOOTTORI_H
#define TIETOKANTAMOOTTORI_H

#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QApplication>
#include <QTableView>
#include <QSqlTableModel>
#include <QTableWidget>

class TietokantaMoottori
{
public:
    TietokantaMoottori();

    static bool createConnection();

private:

};

#endif // TIETOKANTAMOOTTORI_H
