#ifndef POPDIALOG_H
#define POPDIALOG_H

#include <QDialog>
#include <QString>
#include <QDebug>

namespace Ui {
class PopDialog;
}

class PopDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PopDialog(QWidget *parent = nullptr);
    ~PopDialog();

    void lahjoitusmaara(QString maara);

private slots:
    void on_kylla_clicked();

    void on_ei_clicked();



signals:
    void signaali();

    void signaaliClose();

private:
    Ui::PopDialog *ui;
    QString koodi;

};

#endif // POPDIALOG_H
