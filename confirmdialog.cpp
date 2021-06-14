#include "confirmdialog.h"
#include "ui_confirmdialog.h"

confirmDialog::confirmDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirmDialog)
{
    ui->setupUi(this);
}

confirmDialog::~confirmDialog()
{
    delete ui;
}

void confirmDialog::on_buttonBox_accepted()
{
    all_keywords.clear();
    autori.clear();
    conferenze.clear();
    riviste.clear();
    articoli.clear();

}

