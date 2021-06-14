#ifndef CONFIRMDIALOG_H
#define CONFIRMDIALOG_H

#include <QDialog>
#include "all_data.h"

namespace Ui {
class confirmDialog;
}

class confirmDialog : public QDialog
{
    Q_OBJECT

public:
    explicit confirmDialog(QWidget *parent = nullptr);
    ~confirmDialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::confirmDialog *ui;
};

#endif // CONFIRMDIALOG_H
