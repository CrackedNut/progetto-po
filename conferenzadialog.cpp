#include "conferenzadialog.h"
#include "ui_conferenzadialog.h"

conferenzaDialog::conferenzaDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::conferenzaDialog)
{
    ui->setupUi(this);
}

conferenzaDialog::~conferenzaDialog()
{
    switchUiElements(true);
    delete ui;
}

void conferenzaDialog::on_buttonBox_accepted()
{
    Conferenza cTemp;
    id = ui->acronimo_box->text();
    nome = ui->nome_box->text();
    luogo = ui->luogo_box->text();
    data = ui->data_box->date();
    partecipanti = ui->partecipanti_box->value();

    if(id.length() > 0 && nome.length() > 0 && luogo.length() > 0 && organizzatori.size() > 0)
    {
        cTemp.set_id(id);
        cTemp.set_nome(nome);
        cTemp.set_luogo(luogo);
        cTemp.set_data(data);
        cTemp.set_organizzatori(organizzatori);
        cTemp.set_partecipanti(partecipanti);
        conferenze.push_back(cTemp);
    }
    else
    {
        fillError fillErrorWindow;
        fillErrorWindow.exec();
    }

}

void conferenzaDialog::switchUiElements(bool b)
{
    ui->acronimo_box->setReadOnly(!b);
    ui->nome_box->setReadOnly(!b);
    ui->luogo_box->setReadOnly(!b);
    ui->data_box->setReadOnly(!b);
    ui->buttonBox->setVisible(b);
    ui->plus_button->setVisible(b);
    ui->minus_button->setVisible(b);
    ui->partecipanti_box->setReadOnly(!b);
    if(!b){setWindowTitle("Conferenza");}
    else{setWindowTitle("Aggiungi Conferenza");}
}

void conferenzaDialog::refresh_org_list()
{
    ui->organizzatori_list->clear();
    foreach(QString s, organizzatori)    {
        ui->organizzatori_list->addItem(s);
    }
}

void conferenzaDialog::fill_info(Conferenza c)
{
    ui->acronimo_box->setText(c.get_id());
    ui->nome_box->setText(c.get_nome());
    ui->luogo_box->setText(c.get_luogo());
    ui->data_box->setDate(c.get_data());
    ui->partecipanti_box->setValue(c.get_partecipanti());
    foreach(QString s, c.get_organizzatori())
    {
        ui->organizzatori_list->addItem(s);
    }
}


void conferenzaDialog::on_plus_button_clicked()
{
    lineInputDialog dialog(nullptr, &organizzatori);
    dialog.exec();
    refresh_org_list();
}


void conferenzaDialog::on_minus_button_clicked()
{
    QList<QListWidgetItem*> items = ui->organizzatori_list->selectedItems();
    foreach(QListWidgetItem * item, items)
    {
        organizzatori.remove(ui->organizzatori_list->row(item));
        delete ui->organizzatori_list->takeItem(ui->organizzatori_list->row(item));
    }
}

