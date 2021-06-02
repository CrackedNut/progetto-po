#ifndef ARTICOLODIALOG_H
#define ARTICOLODIALOG_H

#include <QDialog>

#include "all_data.h"


namespace Ui {
class articoloDialog;
}

class articoloDialog : public QDialog
{
    Q_OBJECT

public:
    explicit articoloDialog(QWidget *parent = nullptr);
    ~articoloDialog();

    void fill_info(Articolo);

    void switchUiElements();

private slots:
    void on_buttonBox_accepted();

    void on_autori_plus_clicked();

    void on_keywords_plus_clicked();

    void on_autori_minus_clicked();

    void on_keywords_minus_clicked();

    void on_titolo_box_textEdited(const QString &arg1);

private:
    Ui::articoloDialog *ui;

    void refresh_list(QVector<QString>, QListWidget*);
    void add_correlati();
    void remove_correlati(QString, QString);
    void add_external_correlati();

    QString id, nome, nome_origine;
    int pagine;
    QVector<QString> autoriarticolo, keywords, correlati;
    double prezzo;
    bool origine; //0 rivista 1 conferenza
    QDate data;
};

#endif // ARTICOLODIALOG_H
