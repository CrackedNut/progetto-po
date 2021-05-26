#ifndef CONFERENZADIALOG_H
#define CONFERENZADIALOG_H

#include <QDialog>

#include "mainwindow.h"
#include "all_data.h"

#include "fillerror.h"
#include "lineinputdialog.h"

namespace Ui {
class conferenzaDialog;
}

class conferenzaDialog : public QDialog
{
    Q_OBJECT

public:
    explicit conferenzaDialog(QWidget *parent = nullptr);
    ~conferenzaDialog();

    void refresh_org_list();
    void fill_info(Conferenza);
    void switchUiElements(bool);

private slots:
    void on_buttonBox_accepted();

    void on_plus_button_clicked();

    void on_minus_button_clicked();

private:
    Ui::conferenzaDialog *ui;

    QString id, nome, luogo;
    QDate data;
    QVector<QString> organizzatori;
    int partecipanti;
};

#endif // CONFERENZADIALOG_H
