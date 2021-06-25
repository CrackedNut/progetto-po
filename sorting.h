#ifndef SORTING_H
#define SORTING_H

#include "all_data.h"

namespace sorting {
    QVector<Articolo> bubblesortlowarticolo(QVector<Articolo>);
    QVector<Articolo> bubblesorthigharticolo(QVector<Articolo>);
    QVector<Articolo> bubblesortyeararticolo(QVector<Articolo>);
    QVector<Articolo> bubblesortyeararticolodec(QVector<Articolo>);
    QVector<Articolo> specialbypricedec(QVector<Articolo>);
    QVector<Articolo> specialbykw(QVector<Articolo>);
    QVector<std::tuple<QString, double>> bubblesorthighkeyword(QVector<std::tuple<QString, double>>);
    QVector<std::tuple<QString, int>> bubblesortkeywordrecurrence(QVector<std::tuple<QString, int>>);
    QVector<QString> sortKeywordRecurrence();
}

#endif // SORTING_H
