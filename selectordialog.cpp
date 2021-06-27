#include "selectordialog.h"
#include "ui_selectordialog.h"

#include "all_data.h"
selectorDialog::selectorDialog(QWidget *parent, QVector<std::tuple<QString, QString>>* v, QString a) :
    QDialog(parent),
    ui(new Ui::selectorDialog)
{
    ui->setupUi(this);
    arg = a;

    if(a == "autori")
    {
        foreach(Autore a, autori)
        {
            ui->comboBox->addItem(a.get_id() + " | " + a.get_nc());
        }
        vst = v;
    }
}

selectorDialog::~selectorDialog()
{
    delete ui;
}

void selectorDialog::on_buttonBox_accepted()
{
    qDebug() << ui->comboBox->currentIndex();
    if(arg == "autori")
    {
        Autore tmp = autori[ui->comboBox->currentIndex()];
        vst->append(std::make_tuple(tmp.get_id(), tmp.get_nc()));
    }
}

