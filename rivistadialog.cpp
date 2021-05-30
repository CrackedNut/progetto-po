#include "rivistadialog.h"
#include "ui_rivistadialog.h"

rivistaDialog::rivistaDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rivistaDialog)
{
    ui->setupUi(this);
    setWindowTitle("Aggiungi Rivista");
}

rivistaDialog::~rivistaDialog()
{
    delete ui;
}



void rivistaDialog::on_buttonBox_accepted()
{
    Rivista rTemp;
    id = ui->acronimo_box->text();
    nome = ui->nome_box->text();
    editore = ui->editore_box->text();
    data = ui->data_box->date();
    volume = ui->volume_box->value();

    if(id.length()*nome.length()*editore.length() > 0)
    {
        rTemp.set_id(id);
        rTemp.set_nome(nome);
        rTemp.set_editore(editore);
        rTemp.set_data(data);
        rTemp.set_volume(volume);
        riviste.push_back(rTemp);
    }
    else
    {
        fillError fillErrorWindow;
        fillErrorWindow.exec();
    }
}

void rivistaDialog::fill_info(Rivista r)
{
    ui->acronimo_box->setText(r.get_id());
    ui->nome_box->setText(r.get_nome());
    ui->editore_box->setText(r.get_editore());
    ui->data_box->setDate(r.get_data());
    ui->volume_box->setValue(r.get_volume());
}

void rivistaDialog::switchUiElements()
{
    ui->buttonBox->setVisible(false);
    ui->acronimo_box->setReadOnly(true);
    ui->data_box->setReadOnly(true);
    ui->nome_box->setReadOnly(true);
    ui->editore_box->setReadOnly(true);
    ui->volume_box->setReadOnly(true);
        setWindowTitle("Rivista");
}
