#include "autoredialog.h"
#include "ui_autoredialog.h"


autoreDialog::autoreDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::autoreDialog)
{
    ui->setupUi(this);
}

autoreDialog::~autoreDialog()
{
    switchUiElements(true);
    delete ui;
}

void autoreDialog::on_buttonBox_accepted()
{
    Autore aTemp;
    id = ui->id_box->text();
    nome = ui->nome_box->text();
    cognome = ui->cognome_box->text();

    if (id.length() > 0 && nome.length() > 0 && cognome.length() > 0)
    {
        aTemp.set_id(id);
        aTemp.set_nome(nome);
        aTemp.set_cognome(cognome);
        aTemp.set_afferenze(afferenze);
        autori.push_back(aTemp);
    }
    else
    {
        fillError fillErrorWindow;
        fillErrorWindow.exec();
    }

}


void autoreDialog::on_plus_button_clicked()
{
    lineInputDialog dialog(nullptr, &afferenze);
    dialog.exec();
    refresh_afferenze_list();
}

void autoreDialog::refresh_afferenze_list()
{
    ui->afferenze_list_2->clear();
    foreach(QString s, afferenze)    {
        ui->afferenze_list_2->addItem(s);
    }
}


void autoreDialog::on_minus_button_clicked()
{
    QList<QListWidgetItem*> items = ui->afferenze_list_2->selectedItems();
    foreach(QListWidgetItem * item, items)
    {
        afferenze.remove(ui->afferenze_list_2->row(item));
        delete ui->afferenze_list_2->takeItem(ui->afferenze_list_2->row(item));
    }

}

void autoreDialog::switchUiElements(bool b)
{
    ui->buttonBox->setVisible(b);
    ui->nome_box->setReadOnly(!b);
    ui->cognome_box->setReadOnly(!b);
    ui->id_box->setReadOnly(!b);
    ui->minus_button->setVisible(b);
    ui->plus_button->setVisible(b);
    if(!b){setWindowTitle("Autore");}
    else{setWindowTitle("Aggiungi Autore");}
}

void autoreDialog::fill_info(Autore a)
{

    ui->nome_box->setText(a.get_nome());
    ui->cognome_box->setText(a.get_cognome());
    ui->id_box->setText(a.get_id());
    ui->afferenze_list_2->clear();
    foreach(QString s, a.get_afferenze())
    {
        ui->afferenze_list_2->addItem(s);
    }

}
