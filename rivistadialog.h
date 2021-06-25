#ifndef RIVISTADIALOG_H
#define RIVISTADIALOG_H

#include <QDialog>

#include "all_data.h"

namespace Ui {
class rivistaDialog;
}

class rivistaDialog : public QDialog
{
    Q_OBJECT

public:
    explicit rivistaDialog(QWidget *parent = nullptr);
    ~rivistaDialog();

    void fill_info(Rivista);
    void switchUiElements();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::rivistaDialog *ui;
    QString id, nome, editore;
    QDate data;
    int volume;
};

#endif // RIVISTADIALOG_H
