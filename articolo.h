#ifndef ARTICOLO_H
#define ARTICOLO_H

#include "strutturabase.h"

class Articolo : public StrutturaBase
{
public:
    Articolo();

    int get_pagine();
    QVector<QString> get_autori();
    QVector<QString> get_keywords();
    QVector<QString> get_correlati();
    double get_prezzo();
    bool get_origine();

    void set_pagine(int);
    void set_autori(QVector<QString>);
    void set_keywords(QVector<QString>);
    void set_correlati(QVector<QString>);
    void set_prezzo(float);
    void set_origine(double);
private:
    int pagine;
    QVector<QString> autori_articolo, keywords, aricoli_correlati;
    double prezzo;
    bool origine; //true = conferenza, false = rivista
};

#endif // ARTICOLO_H
