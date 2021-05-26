#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "autoredialog.h"
#include "conferenzadialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addAutoreButton_clicked()
{
    autoreDialog dialog(nullptr);
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
    dialog.switchUiElements(false);
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

    conferenzaDialog* dialog = new conferenzaDialog;
    dialog->fill_info(c);
    dialog->switchUiElements(false);
    dialog->exec();
}

