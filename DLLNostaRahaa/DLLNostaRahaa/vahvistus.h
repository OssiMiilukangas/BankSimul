#ifndef VAHVISTUS_H
#define VAHVISTUS_H

#include <QDialog>
#include <QString>

namespace Ui {
class Vahvistus;
}

class Vahvistus : public QDialog
{
    Q_OBJECT

public:
    explicit Vahvistus(QWidget *parent = nullptr);
    ~Vahvistus();

    void nostomaara(QString maara);

private slots:
    void on_kylla_clicked();

    void on_ei_clicked();

signals:
    void signaaliNosto();

    void signaaliSulje();

private:
    Ui::Vahvistus *ui;
};

#endif // VAHVISTUS_H
