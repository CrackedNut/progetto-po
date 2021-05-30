#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "all_data.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void refresh_autori_list();
    void refresh_conferenze_list();
    void refresh_riviste_list();
    void refresh_articoli_list();

private slots:
    void on_addAutoreButton_clicked();

    void on_approfondisci_autore_clicked();

    void on_addConferenzaButton_clicked();

    void on_approfondisci_conferenza_clicked();

    void on_addRivistaButton_clicked();

    void on_approfondisci_rivista_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
