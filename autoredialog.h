#ifndef AUTOREDIALOG_H
#define AUTOREDIALOG_H

#include <QDialog>

#include "all_data.h"

//#include "json_ops.h"


namespace Ui {
class autoreDialog;
}

class autoreDialog : public QDialog
{
    Q_OBJECT

public:
    explicit autoreDialog(QWidget *parent = nullptr);
    ~autoreDialog();

    void refresh_list(QVector<QString>, QListWidget*);
    void fill_info(Autore);
    void switchUiElements();

private slots:
    void on_buttonBox_accepted();

    void on_plus_button_clicked();
    void on_minus_button_clicked();

private:
    Ui::autoreDialog *ui;

    double mediaArticoli(Autore a);

    QString id, nome, cognome;
    QVector<QString> afferenze;

};

#endif // AUTOREDIALOG_H
