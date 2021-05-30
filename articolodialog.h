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
    void refresh_correlati_list();
    void refresh_keywords_list();
    void refresh_autori_list();
    void switchUiElements();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::articoloDialog *ui;
};

#endif // ARTICOLODIALOG_H
