#ifndef SELECTORDIALOG_H
#define SELECTORDIALOG_H

#include <QDialog>

namespace Ui {
class selectorDialog;
}

class selectorDialog : public QDialog
{
    Q_OBJECT

public:
    explicit selectorDialog(QWidget *parent = nullptr, QVector<std::tuple<QString, QString>>* v = nullptr, QString a = "");
    ~selectorDialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::selectorDialog *ui;
    QVector<QString>* vs;
    QVector<std::tuple<QString, QString>>* vst;
    QString arg;
};

#endif // SELECTORDIALOG_H
