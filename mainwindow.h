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

    //void on_actionAbout_clicked();

    void on_addAutoreButton_clicked();

    void on_approfondisci_autore_clicked();

    void on_addConferenzaButton_clicked();

    void on_approfondisci_conferenza_clicked();

    void on_addRivistaButton_clicked();

    void on_approfondisci_rivista_clicked();

    void on_addArticoloButton_clicked();

    void on_approfondisci_articolo_clicked();

    void on_articoli_autore_clicked();

    void on_byKeywordButton_clicked();

    void on_byRivistaButton_clicked();

    void on_byConferenza_clicked();

    void on_byAuthorPriceLow_clicked();

    void on_byAuthorPriceHigh_clicked();

    void on_ordinaAutoreAnno_clicked();

    void on_filtraAutoreAnno_clicked();

    void on_keywordPriceHigh_clicked();

    void on_ordina_speciale_clicked();

    void on_keywordRecurrenceButton_clicked();

    void on_lowPriceButton_clicked();

    void actionAbout();

    void removeData();

private:
    Ui::MainWindow *ui;

    QMenu *fileMenu;
    QMenu *aboutMenu;
    QAction *aboutAction;
};
#endif // MAINWINDOW_H
