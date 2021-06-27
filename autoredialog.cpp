#include "autoredialog.h"
#include "ui_autoredialog.h"

autoreDialog::autoreDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::autoreDialog)
{
    ui->setupUi(this);

    setWindowTitle("Aggiungi Autore");
    ui->media_label->setVisible(false);
    ui->mediabox->setVisible(false);
}

autoreDialog::~autoreDialog()
{
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
        aTemp.set_nc();
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
    refresh_list(afferenze, ui->afferenze_list_2);
}

void autoreDialog::refresh_list(QVector<QString> v, QListWidget* w)
{
    w->clear();
    foreach(QString a, v)
        w->addItem(a);
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

void autoreDialog::switchUiElements()
{
    ui->buttonBox->setVisible(false);
    ui->nome_box->setReadOnly(true);
    ui->cognome_box->setReadOnly(true);
    ui->id_box->setReadOnly(true);
    ui->minus_button->setVisible(false);
    ui->plus_button->setVisible(false);
    setWindowTitle("Autore");
    ui->media_label->setVisible(true);
    ui->mediabox->setVisible(true);
}

void autoreDialog::fill_info(Autore a)
{
    ui->nome_box->setText(a.get_nome());
    ui->cognome_box->setText(a.get_cognome());
    ui->id_box->setText(a.get_id());
    ui->afferenze_list_2->clear();
    ui->afferenze_list_2->addItems(a.get_afferenze());
    ui->mediabox->setText(QString::number(mediaArticoli(a)));
}

double autoreDialog::mediaArticoli(Autore a)
{
    int c = 0;
    double tot = 0;
    foreach(Articolo art, articoli)
    {
        QVector<QString> t;
        foreach(std::tuple n, art.get_autori())
            t.append(std::get<0>(n));
        if(t.indexOf(a.get_nc()) != -1)
        {
            c++;
            tot += art.get_prezzo();
        }
    }
    return (tot/c);
}
