#include "conferenzadialog.h"
#include "ui_conferenzadialog.h"

conferenzaDialog::conferenzaDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::conferenzaDialog)
{
    ui->setupUi(this);
    setWindowTitle("Aggiungi Conferenza");
}

conferenzaDialog::~conferenzaDialog()
{
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

    if(id.length() * nome.length() * luogo.length() * organizzatori.size() != 0)
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

void conferenzaDialog::switchUiElements()
{
    ui->acronimo_box->setReadOnly(true);
    ui->nome_box->setReadOnly(true);
    ui->luogo_box->setReadOnly(true);
    ui->data_box->setReadOnly(true);
    ui->buttonBox->setVisible(false);
    ui->plus_button->setVisible(false);
    ui->minus_button->setVisible(false);
    ui->partecipanti_box->setReadOnly(true);
    setWindowTitle("Conferenza");
}

void conferenzaDialog::refresh_list(QVector<QString> v, QListWidget* w)
{
    w->clear();
    foreach(QString a, v)
        w->addItem(a);
}

void conferenzaDialog::fill_info(Conferenza c)
{
    ui->acronimo_box->setText(c.get_id());
    ui->nome_box->setText(c.get_nome());
    ui->luogo_box->setText(c.get_luogo());
    ui->data_box->setDate(c.get_data());
    ui->partecipanti_box->setValue(c.get_partecipanti());
    ui->organizzatori_list->addItems(organizzatori);
}


void conferenzaDialog::on_plus_button_clicked()
{
    lineInputDialog dialog(nullptr, &organizzatori);
    dialog.exec();
    refresh_list(organizzatori, ui->organizzatori_list);
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

