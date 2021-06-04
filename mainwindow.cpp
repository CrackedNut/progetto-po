#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "autoredialog.h"
#include "conferenzadialog.h"
#include "rivistadialog.h"
#include "articolodialog.h"
#include "genericlistdialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    refresh_articoli_list();
    refresh_autori_list();
    refresh_conferenze_list();
    refresh_riviste_list();
}

MainWindow::~MainWindow()
{
    json_data.clear();
    foreach(Autore a, autori)
    {
        json_ops::writeautore(a);
    }
    foreach(Conferenza c, conferenze)
    {
        json_ops::writeconferenza(c);
    }
    foreach(Rivista r, riviste)
    {
        json_ops::writerivista(r);
    }
    foreach(Articolo a, articoli)
    {
        json_ops::writearticolo(a);
    }
    json_ops::write_json();

    delete ui;
}


void MainWindow::on_addAutoreButton_clicked()
{
    autoreDialog dialog;
    //dialog.switchUiElements(true);
    dialog.exec();
    refresh_autori_list();
}

void MainWindow::refresh_autori_list()
{
    ui->autori_list->clear();
    foreach (Autore a, autori)
    {
        ui->autori_list->addItem(a.get_id() + " | " + a.get_nome() + " " + a.get_cognome());
    }
}


void MainWindow::on_approfondisci_autore_clicked()
{
    Autore a;
    QList<QListWidgetItem*> items = ui->autori_list->selectedItems();
    foreach(QListWidgetItem * item, items)
    {
        a = autori[ui->autori_list->row(item)];
    }

    autoreDialog dialog;
    dialog.fill_info(a);
    dialog.switchUiElements();
    dialog.exec();

}


void MainWindow::on_addConferenzaButton_clicked()
{
    conferenzaDialog dialog;
    dialog.exec();
    refresh_conferenze_list();
}


void MainWindow::refresh_conferenze_list()
{
    ui->conferenze_list->clear();
    foreach(Conferenza c, conferenze)
    {
        ui->conferenze_list->addItem(c.get_nome());
    }
}

void MainWindow::on_approfondisci_conferenza_clicked()
{
    Conferenza c;
    QList<QListWidgetItem*> items = ui->conferenze_list->selectedItems();
    foreach(QListWidgetItem * item, items)
    {
        c = conferenze[ui->conferenze_list->row(item)];
    }

    conferenzaDialog dialog;
    dialog.fill_info(c);
    dialog.switchUiElements();
    dialog.exec();
}


void MainWindow::on_addRivistaButton_clicked()
{
    rivistaDialog dialog;
    dialog.exec();
    refresh_riviste_list();

}

void MainWindow::refresh_riviste_list()
{
    ui->riviste_list->clear();
    foreach(Rivista r, riviste)
        ui->riviste_list->addItem(r.get_nome());
}

void MainWindow::on_approfondisci_rivista_clicked()
{
    Rivista r;
    QList<QListWidgetItem*> items = ui->riviste_list->selectedItems();
    foreach(QListWidgetItem* item, items)
    {
        r = riviste[ui->riviste_list->row(item)];
    }

    rivistaDialog dialog;
    dialog.fill_info(r);
    dialog.switchUiElements();
    dialog.exec();
}


void MainWindow::on_addArticoloButton_clicked()
{
    articoloDialog dialog;
    dialog.exec();
    refresh_articoli_list();
}

void MainWindow::refresh_articoli_list()

{
    ui->articoli_list->clear();
    foreach(Articolo a, articoli)
        ui->articoli_list->addItem(a.get_nome());
}

void MainWindow::on_approfondisci_articolo_clicked()
{
    Articolo a;
    QList<QListWidgetItem*> items = ui->articoli_list->selectedItems();
    foreach(QListWidgetItem* item, items)
    {
        a = articoli[ui->articoli_list->row(item)];
    }
    articoloDialog dialog;

    dialog.fill_info(a);
    dialog.switchUiElements();
    dialog.exec();

}


void MainWindow::on_articoli_autore_clicked()
{
    Autore a;

    QList<QListWidgetItem*> items = ui->autori_list->selectedItems();
    foreach(QListWidgetItem* item, items)
    {
        a = autori[ui->autori_list->row(item)];
    }

    genericListDialog dialog;
    dialog.changeUI("author");
    dialog.fill_articoliAutore_list(a);
    dialog.exec();
}

void MainWindow::on_byKeywordButton_clicked()
{
    genericListDialog dialog;
    dialog.changeUI("byKeyword");
    dialog.exec();
}


void MainWindow::on_byRivistaButton_clicked()
{
    genericListDialog dialog;
    dialog.changeUI("byRivista");
    dialog.exec();

}


void MainWindow::on_byConferenza_clicked()
{
    genericListDialog dialog;
    dialog.changeUI("byConferenza");
    dialog.exec();
}


void MainWindow::on_byConferenza_2_clicked()
{
    genericListDialog dialog;
    dialog.changeUI("byAuthorPriceLow");
    dialog.exec();
}


void MainWindow::on_byConferenza_3_clicked()
{
    genericListDialog dialog;
    dialog.changeUI("byAuthorPriceHigh");
    dialog.exec();
}


void MainWindow::on_ordinaAutoreAnno_clicked()
{
    genericListDialog dialog;
    dialog.changeUI("byAuthorYear");
    dialog.exec();
}




void MainWindow::on_filtraAutoreAnno_clicked()
{
    genericListDialog dialog;
    dialog.changeUI("filterAuthorYear");
    dialog.exec();
}


void MainWindow::on_ordinaAutoreAnno_2_clicked()
{
    genericListDialog dialog;
    dialog.changeUI("byKeywordPriceHigh");
    dialog.exec();
}


void MainWindow::on_ordina_speciale_clicked()
{
    genericListDialog dialog;
    dialog.changeUI("byAuthorSpecial");
    dialog.exec();
}


void MainWindow::on_pushButton_clicked()
{
    genericListDialog dialog;
    dialog.changeUI("byKeywordRecurrence");
    dialog.exec();
}

