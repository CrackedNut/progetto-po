#include "articolodialog.h"
#include "ui_articolodialog.h"

articoloDialog::articoloDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::articoloDialog)
{
    ui->setupUi(this);
}

articoloDialog::~articoloDialog()
{
    delete ui;
}



void articoloDialog::on_buttonBox_accepted()
{
    Articolo tmp;
    //tmp.set_id(ui)
}

