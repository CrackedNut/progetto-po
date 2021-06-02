#include "genericlistdialog.h"
#include "ui_genericlistdialog.h"
#include "sorting.h"

genericListDialog::genericListDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::genericListDialog)
{
    ui->setupUi(this);
}

genericListDialog::~genericListDialog()
{
    delete ui;
}

void genericListDialog::fill_articoliAutore_list(Autore a)
{
    foreach(Articolo art, articoli)
    {
        if(art.get_autori().indexOf(a.get_nc()) != -1)
        {
            ui->generic_list->addItem(art.get_nome());
        }
    }
}

void genericListDialog::changeUI(QString a)
{
    arg = a;
    if(arg == "author")
    {
        ui->comboBox->setVisible(false);
        ui->dateEdit->setVisible(false);
        ui->lineEdit->setVisible(false);
        ui->verticalSpacer->invalidate();
    }
    else if(arg == "byKeyword")
    {
        ui->comboBox->setVisible(false);
        ui->dateEdit->setVisible(false);
        ui->lineEdit->setVisible(true);
    }
    else if(arg == "byRivista")
    {
        ui->comboBox->setVisible(true);
        ui->dateEdit->setVisible(false);
        ui->lineEdit->setVisible(false);
        foreach(Rivista r, riviste)
        {
            ui->comboBox->addItem(r.get_nome());
        }
    }
    else if(arg == "byConferenza")
    {
        ui->comboBox->setVisible(true);
        ui->dateEdit->setVisible(false);
        ui->lineEdit->setVisible(false);
        foreach(Conferenza c, conferenze)
        {
            ui->comboBox->addItem(c.get_nome());
        }
    }
    else if(arg == "byAuthorPriceLow")
    {
        ui->comboBox->setVisible(true);
        ui->dateEdit->setVisible(false);
        ui->lineEdit->setVisible(false);
        foreach(Autore a, autori)
        {
            ui->comboBox->addItem(a.get_nc());
        }
    }
    else if(arg == "byAuthorPriceHigh")
    {
        ui->comboBox->setVisible(true);
        ui->dateEdit->setVisible(false);
        ui->lineEdit->setVisible(false);
        foreach(Autore a, autori)
        {
            ui->comboBox->addItem(a.get_nc());
        }
    }
    else if(arg == "byAuthorYear")
    {
        ui->comboBox->setVisible(true);
        ui->dateEdit->setVisible(false);
        ui->lineEdit->setVisible(false);
        foreach(Autore a, autori)
        {
            ui->comboBox->addItem(a.get_nc());
        }
    }
    else if(arg == "filterAuthorYear")
    {
        ui->comboBox->setVisible(true);
        ui->dateEdit->setVisible(true);
        ui->lineEdit->setVisible(false);
        foreach(Autore a, autori)
        {
            ui->comboBox->addItem(a.get_nc());
        }
    }
    else if(arg == "byKeywordPriceHigh")
    {
        ui->comboBox->setVisible(false);
        ui->dateEdit->setVisible(false);
        ui->lineEdit->setVisible(false);
        fill_byKeywordPriceHigh();
    }
    else if(arg == "byAuthorSpecial")
    {
        ui->comboBox->setVisible(true);
        ui->dateEdit->setVisible(false);
        ui->lineEdit->setVisible(false);

        foreach(Autore a, autori)
        {
            ui->comboBox->addItem(a.get_nc());
        }
    }

}

void genericListDialog::fill_byKeyword(QString s)
{
    ui->generic_list->clear();
    qDebug() << s;
    foreach(Articolo a, articoli)
    {
        if(a.get_keywords().indexOf(s) != -1)
        {
            ui->generic_list->addItem(a.get_nome());
        }
    }
}

void genericListDialog::on_lineEdit_textChanged(const QString &arg1)
{
    if(arg == "byKeyword")
    {
        fill_byKeyword(arg1);
    }
}

void genericListDialog::fill_byRivista(int s)
{
    ui->generic_list->clear();
    qDebug() << s;
    foreach(Articolo a, articoli)
    {
        if(a.get_nome_origine() == riviste[s].get_nome() && !a.get_origine())
        {
            ui->generic_list->addItem(a.get_nome());
        }
    }
}

void genericListDialog::fill_byConferenza(int s)
{
    ui->generic_list->clear();
    qDebug() << s;
    foreach(Articolo a, articoli)
    {
        if(a.get_nome_origine() == conferenze[s].get_nome() && a.get_origine())
        {
            ui->generic_list->addItem(a.get_nome());
        }
    }
}

void genericListDialog::fill_byAuthorPriceLow(int s)
{
    ui->generic_list->clear();

    QVector<Articolo> articoliAutore;
    foreach(Articolo a, articoli)
    {
        if(a.get_autori().indexOf(autori[s].get_nc()) != -1)
        {

            articoliAutore.append(a);
        }
    }

    QVector<Articolo> sorted = sorting::bubblesortlowarticolo(articoliAutore);
    foreach(Articolo a, sorted)
    {
        ui->generic_list->addItem(a.get_nome() + " | $" + QString::number(a.get_prezzo()));
    }
}

void genericListDialog::fill_byAuthorPriceHigh(int s)
{
    ui->generic_list->clear();

    QVector<Articolo> articoliAutore;
    foreach(Articolo a, articoli)
    {
        if(a.get_autori().indexOf(autori[s].get_nc()) != -1)
        {

            articoliAutore.append(a);
        }
    }

    QVector<Articolo> sorted = sorting::bubblesorthigharticolo(articoliAutore);

    foreach(Articolo a, sorted)
    {
        ui->generic_list->addItem(a.get_nome() + " | " + QString::number(a.get_data().year()));
    }
}

void genericListDialog::fill_byAuthorYear(int s)
{
    ui->generic_list->clear();

    QVector<Articolo> articoliAutore;
    foreach(Articolo a, articoli)
    {
        if(a.get_autori().indexOf(autori[s].get_nc()) != -1)
        {

            articoliAutore.append(a);
        }
    }

    QVector<Articolo> sorted = sorting::bubblesortyeararticolo(articoliAutore);

    foreach(Articolo a, sorted)
    {
        ui->generic_list->addItem(a.get_nome() + " | $" + QString::number(a.get_prezzo()));
    }
}

void genericListDialog::fill_filterAuthorYear(int s, int year)
{
    ui->generic_list->clear();
    foreach(Articolo a, articoli)
    {
        if(a.get_autori().indexOf(autori[s].get_nc()) != -1 && a.get_data().year() == year)
        {

            ui->generic_list->addItem(a.get_nome() + " | " + QString::number(year));
        }
    }
}

void genericListDialog::fill_byAuthorSpecial(int i)
{
    QVector<Articolo> unordered;
    foreach(Articolo a, articoli)
    {
        if(a.get_autori().indexOf(autori[i].get_nc()) != -1)
            unordered.append(a);
    }
    unordered = sorting::bubblesortyeararticolo(unordered);
    unordered = sorting::specialbypricedec(unordered);
    unordered = sorting::specialbykw(unordered);

    foreach(Articolo a, unordered)
    {
        ui->generic_list->addItem(a.get_nome());
    }
}

void genericListDialog::on_comboBox_currentIndexChanged(int index)
{
    qDebug() <<index;
    if(arg == "byRivista")
    {
        fill_byRivista(index);
    }
    else if(arg == "byConferenza")
    {
        fill_byConferenza(index);
    }
    else if(arg == "byAuthorPriceLow")
    {
        fill_byAuthorPriceLow(index);
    }
    else if(arg == "byAuthorPriceHigh")
    {
        fill_byAuthorPriceHigh(index);
    }
    else if(arg == "byAuthorYear")
    {
        fill_byAuthorYear(index);
    }
    else if(arg == "fillAuthorYear")
    {
        fill_filterAuthorYear(index, ui->dateEdit->date().year());
    }
    else if(arg=="byAuthorSpecial")
    {
        fill_byAuthorSpecial(index);
    }
}

void genericListDialog::on_dateEdit_dateChanged(const QDate &date)
{
    if(arg == "fillAuthorYear")
    {
        fill_filterAuthorYear(ui->comboBox->currentIndex(), date.year());
    }
}

void genericListDialog::fill_byKeywordPriceHigh()
{
    double tmpsum = 0;
    QVector<std::tuple<QString, double>> keywordsbyprice;
    foreach(QString k, all_keywords)
    {
        foreach(Articolo a, articoli)
        {
            if(a.get_keywords().indexOf(k) != -1)
            {
                tmpsum += a.get_prezzo();
            }
        }
        keywordsbyprice.append(std::make_tuple(k, tmpsum));
        tmpsum = 0;
    }
    keywordsbyprice = sorting::bubblesorthighkeyword(keywordsbyprice);
    foreach(std::tuple t, keywordsbyprice)
    {
        ui->generic_list->addItem(std::get<0>(t) + " | " + QString::number(std::get<1>(t)));
    }
}

