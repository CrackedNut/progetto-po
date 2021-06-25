#ifndef LINEINPUTDIALOG_H
#define LINEINPUTDIALOG_H

#include <QDialog>

namespace Ui {
class lineInputDialog;
}

class lineInputDialog : public QDialog
{
    Q_OBJECT

public:
    explicit lineInputDialog(QWidget *parent = nullptr, QVector<QString>* v = nullptr);
    ~lineInputDialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::lineInputDialog *ui;
    QVector<QString>* vs;
    QString tmp, arg;

};

#endif // LINEINPUTDIALOG_H
