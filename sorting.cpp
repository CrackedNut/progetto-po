#include "sorting.h"

void swaparticolo(Articolo* a, Articolo* b)
{
    Articolo temp = *a;
    *a = *b;
    *b = temp;
}

void swaptuple(std::tuple<QString, double>* a, std::tuple<QString, double>* b)
{
    std::tuple<QString, double> temp = *a;
    *a = *b;
    *b = temp;
}


QVector<Articolo> sorting::bubblesortlowarticolo(QVector<Articolo> qv)
{
    QVector<Articolo> sorted = qv;

    for(int i = 0; i < sorted.size() - 1; i++)
    {
        for(int j = 0; j < sorted.size() - i - 1; j++)
        {
            if(sorted[j].get_prezzo() > sorted[j+1].get_prezzo())
                swaparticolo(&sorted[j], &sorted[j+1]);
        }
    }
    return sorted;
}

QVector<Articolo> sorting::bubblesorthigharticolo(QVector<Articolo> qv)
{
    QVector<Articolo> sorted = qv;

    for(int i = 0; i < sorted.size() - 1; i++)
    {
        for(int j = 0; j < sorted.size() - i - 1; j++)
        {
            if(sorted[j].get_prezzo() < sorted[j+1].get_prezzo())
                swaparticolo(&sorted[j], &sorted[j+1]);
        }
    }
    return sorted;
}

QVector<Articolo> sorting::bubblesortyeararticolo(QVector<Articolo> qv)
{
    QVector<Articolo> sorted = qv;

    for(int i = 0; i < sorted.size() - 1; i++)
    {
        for(int j = 0; j < sorted.size() - i - 1; j++)
        {
            if(sorted[j].get_data().year() > sorted[j+1].get_data().year())
                swaparticolo(&sorted[j], &sorted[j+1]);
        }
    }
    return sorted;
}

QVector<Articolo> sorting::specialbypricedec(QVector<Articolo> qv)
{
    QVector<Articolo> sorted = qv;

    for(int i = 0; i < sorted.size() - 1; i++)
    {
        for(int j = 0; j < sorted.size() - i - 1; j++)
        {
            if(sorted[j].get_data().year() == sorted[j+1].get_data().year() && sorted[j].get_prezzo() > sorted[j].get_prezzo())
                swaparticolo(&sorted[j], &sorted[j+1]);
        }
    }
    return sorted;
}

QVector<Articolo> sorting::specialbykw(QVector<Articolo> qv)
{
    QVector<Articolo> sorted = qv;

    for(int i = 0; i < sorted.size() - 1; i++)
    {
        for(int j = 0; j < sorted.size() - i - 1; j++)
        {
            if(sorted[j].get_data().year() == sorted[j+1].get_data().year() && sorted[j].get_prezzo() == sorted[j].get_prezzo() && sorted[j].get_keywords()[0][0] > sorted[j+1].get_keywords()[0][0])
                swaparticolo(&sorted[j], &sorted[j+1]);
        }
    }
    return sorted;
}

QVector<Articolo> sorting::bubblesortyeararticolodec(QVector<Articolo> qv)
{
    QVector<Articolo> sorted = qv;

    for(int i = 0; i < sorted.size() - 1; i++)
    {
        for(int j = 0; j < sorted.size() - i - 1; j++)
        {
            if(sorted[j].get_data().year() > sorted[j+1].get_data().year())
                swaparticolo(&sorted[j], &sorted[j+1]);
        }
    }
    return sorted;
}

QVector<std::tuple<QString, double>> sorting::bubblesorthighkeyword(QVector<std::tuple<QString, double>> qv)
{
    QVector<std::tuple<QString, double>> sorted = qv;
    for(int i = 0; i < sorted.size() - 1; i++)
    {
        for(int j = 0; j < sorted.size() - i - 1; j++)
        {
            if(std::get<1>(sorted[j]) < std::get<1>(sorted[j+1]))
                swaptuple(&sorted[j], &sorted[j+1]);
        }
    }
    return sorted;
}

