#ifndef CONFERENZADIALOG_H
#define CONFERENZADIALOG_H

#include <QDialog>

#include "all_data.h"

namespace Ui {
class conferenzaDialog;
}

class conferenzaDialog : public QDialog
{
    Q_OBJECT

public:
    explicit conferenzaDialog(QWidget *parent = nullptr);
    ~conferenzaDialog();

    void fill_info(Conferenza);
    void switchUiElements();

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

    void refresh_list(QVector<QString>, QListWidget*);
};

#endif // CONFERENZADIALOG_H
