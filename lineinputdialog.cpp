#include "lineinputdialog.h"
#include "ui_lineinputdialog.h"

lineInputDialog::lineInputDialog(QWidget *parent, QVector<QString>* v) :
    QDialog(parent),
    ui(new Ui::lineInputDialog)
{
    ui->setupUi(this);
    //parentDialog = p;
    vs = v;
}

lineInputDialog::~lineInputDialog()
{
    delete ui;
}



void lineInputDialog::on_buttonBox_accepted()
{
    tmp = ui->lineEdit->text();
    if(ui->lineEdit->text().length() > 0 && vs->indexOf(tmp)==-1)
        vs->push_back(tmp);
}

