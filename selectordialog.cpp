#include "selectordialog.h"
#include "ui_selectordialog.h"

#include "all_data.h"

selectorDialog::selectorDialog(QWidget *parent, QVector<QString>* v, QString a) :
    QDialog(parent),
    ui(new Ui::selectorDialog)
{
    ui->setupUi(this);
    vs = v;
    arg = a;

    if(a == "autori")
    {
        foreach(Autore a, autori)
        {
            ui->comboBox->addItem(a.get_id() + " | " + a.get_nc());
        }
    }
}

selectorDialog::~selectorDialog()
{
    delete ui;
}

void selectorDialog::on_buttonBox_accepted()
{
    qDebug() << ui->comboBox->currentIndex();
    if(arg == "autore")
    {
        vs
    }
}

