#ifndef GENERICLISTDIALOG_H
#define GENERICLISTDIALOG_H

#include <QDialog>

#include "all_data.h"

namespace Ui {
class genericListDialog;
}

class genericListDialog : public QDialog
{
    Q_OBJECT

public:
    explicit genericListDialog(QWidget *parent = nullptr);
    ~genericListDialog();
    void changeUI(QString);

    void fill_articoliAutore_list(Autore a);

    void fill_byKeyword(QString);
    void fill_byRivista(int);
    void fill_byConferenza(int);
    void fill_byAuthorPriceLow(int);
    void fill_byAuthorPriceHigh(int);
    void fill_byAuthorYear(int);
    void fill_filterAuthorYear(int, int);
    void fill_byKeywordPriceHigh();
    void fill_byAuthorSpecial(int);
    void fill_byKeywordRecurrence();
    void fill_lowerPrice(QString);


private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_comboBox_currentIndexChanged(int index);

    void on_dateEdit_dateChanged(const QDate &date);

private:
    Ui::genericListDialog *ui;

    QString arg;

    Autore autore;
    Conferenza conferenza;
    Rivista rivista;
    Articolo articolo;
};

#endif // GENERICLISTDIALOG_H
