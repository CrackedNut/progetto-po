#ifndef AUTOREDIALOG_H
#define AUTOREDIALOG_H

#include <QDialog>

#include "mainwindow.h"
#include "all_data.h"

#include "fillerror.h"
#include "lineinputdialog.h"

namespace Ui {
class autoreDialog;
}

class autoreDialog : public QDialog
{
    Q_OBJECT

public:
    explicit autoreDialog(QWidget *parent = nullptr);
    ~autoreDialog();

    void refresh_afferenze_list();
    void fill_info(Autore);
    void switchUiElements(bool);

private slots:
    void on_buttonBox_accepted();

    void on_plus_button_clicked();
    void on_minus_button_clicked();

private:
    Ui::autoreDialog *ui;

    QString id, nome, cognome;
    QVector<QString> afferenze;

};

#endif // AUTOREDIALOG_H
