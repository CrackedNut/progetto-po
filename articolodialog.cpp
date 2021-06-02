#include "articolodialog.h"
#include "ui_articolodialog.h"

articoloDialog::articoloDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::articoloDialog)
{
    ui->setupUi(this);
    setWindowTitle("Aggiungi Articolo");
}

articoloDialog::~articoloDialog()
{
    delete ui;
}

void articoloDialog::on_buttonBox_accepted()
{
    Articolo tmp;
    id = ui->id_box->text();
    nome = ui->titolo_box->text();
    pagine = ui->pagine_box->value();
    prezzo = ui->prezzo_box->value();
    if(ui->conferenza_radio->isChecked()) {origine = true;}
    else {origine = false;}
    nome_origine = ui->nome_origine_box->text();
    data = ui->data_box->date();

    if(id.length() * nome.length() * autoriarticolo.size() * keywords.length() * pagine * nome_origine.length() != 0)
    {
        tmp.set_id(id);
        tmp.set_nome(nome);
        tmp.set_autori(autoriarticolo);
        tmp.set_correlati(correlati);
        tmp.set_keywords(keywords);
        tmp.set_pagine(pagine);
        tmp.set_prezzo(prezzo);
        tmp.set_origine(origine);
        tmp.set_nome_origine(nome_origine);
        tmp.set_data(data);
        add_external_correlati();
        articoli.push_back(tmp);
    }
    else
    {
        fillError fillErrorWindow;
        fillErrorWindow.exec();
    }
}

void articoloDialog::refresh_list(QVector<QString> v, QListWidget* w)
{
    w->clear();
    foreach(QString a, v)
        w->addItem(a);
}

void articoloDialog::on_autori_plus_clicked()
{
    lineInputDialog dialog(nullptr, &autoriarticolo);
    dialog.exec();
    refresh_list(autoriarticolo, ui->autori_box);
}

void articoloDialog::on_keywords_plus_clicked()
{
    lineInputDialog dialog(nullptr, &keywords);
    dialog.exec();
    if(all_keywords.indexOf(keywords.last()) == -1)
        all_keywords.append(keywords.last());

    refresh_list(keywords, ui->keywords_box);
    add_correlati();
    refresh_list(correlati, ui->correlati_box);

    foreach(QString s, all_keywords)
    {
        qDebug() << s;
    }
}

void articoloDialog::add_correlati()
{
    QVector<QString> extKeywords;
    QString extNome;
    foreach(Articolo a, articoli)
    {
        extKeywords = a.get_keywords();
        extNome = a.get_nome();

        foreach(QString c, extKeywords)
        {
            if(keywords.last() == c && correlati.indexOf(extNome) == -1)
            {
                correlati.append(extNome);
                ui->correlati_box->addItem(extNome);
                break;
            }
        }
    }
}

void articoloDialog::add_external_correlati()
{
    for (int i = 0; i < articoli.size(); i++)
    {
        articoli[i].append_correlato(nome);
        qDebug() << articoli[i].get_nome();
    }
}

void articoloDialog::on_autori_minus_clicked()
{
    QList<QListWidgetItem*> items = ui->autori_box->selectedItems();
    foreach(QListWidgetItem * item, items)
    {
        autoriarticolo.remove(ui->autori_box->row(item));
        delete ui->autori_box->takeItem(ui->autori_box->row(item));
    }
}

void articoloDialog::on_keywords_minus_clicked()
{
    QList<QListWidgetItem*> items = ui->keywords_box->selectedItems();
    foreach(QListWidgetItem* item, items)
    {
        keywords.remove(ui->keywords_box->row(item));
        delete ui->keywords_box->takeItem(ui->keywords_box->row(item));
    }

}


void articoloDialog::on_titolo_box_textEdited(const QString &arg1)
{
    if(arg1.length() == 0)
    {
        ui->keywords_plus->setDisabled(true);
    }
    else {ui->keywords_plus->setDisabled(false);}
}

void articoloDialog::fill_info(Articolo a)
{
    ui->id_box->setText(a.get_id());
    ui->titolo_box->setText(a.get_nome());
    ui->pagine_box->setValue(a.get_pagine());
    ui->autori_box->addItems(a.get_autori());
    ui->keywords_box->addItems(a.get_keywords());
    ui->correlati_box->addItems(a.get_correlati());
    ui->conferenza_radio->setCheckable(a.get_origine());
    ui->rivista_radio->setCheckable(!a.get_origine());
    ui->conferenza_radio->setChecked(a.get_origine());
    ui->rivista_radio->setChecked(!a.get_origine());
    ui->prezzo_box->setValue(a.get_prezzo());
    ui->nome_origine_box->setText(a.get_nome_origine());
    ui->data_box->setDate(a.get_data());
}

void articoloDialog::switchUiElements()
{
    ui->buttonBox->setVisible(false);
    ui->id_box->setReadOnly(true);
    ui->titolo_box->setReadOnly(true);
    ui->pagine_box->setReadOnly(true);
    ui->autori_plus->setVisible(false);
    ui->autori_minus->setVisible(false);
    ui->keywords_plus->setVisible(false);
    ui->keywords_minus->setVisible(false);
    ui->prezzo_box->setReadOnly(true);
    ui->nome_origine_box->setReadOnly(true);
    ui->data_box->setReadOnly(true);
    setWindowTitle("Articolo");
}

