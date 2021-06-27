#ifndef ARTICOLO_H
#define ARTICOLO_H

#include "strutturabase.h"

class Articolo : public StrutturaBase
{
public:
    Articolo();

    int get_pagine();
    QVector<std::tuple<QString, QString>> get_autori();
    QVector<QString> get_keywords();
    QVector<QString> get_correlati();
    double get_prezzo();
    bool get_origine();
    QString get_nome_origine();
    QDate get_data();

    void set_pagine(int);
    void set_autori(QVector<std::tuple<QString, QString>>);
    void set_keywords(QVector<QString>);
    void set_correlati(QVector<QString>);
    void set_prezzo(float);
    void set_origine(double);
    void set_nome_origine(QString);
    void append_correlato(QString);
    void set_data(QDate);
private:
    int pagine;
    QVector<QString> keywords, correlati;
    QVector<std::tuple<QString, QString>> autori_articolo;
    double prezzo;
    bool origine; //true = conferenza, false = rivista
    QString nome_origine;
    QDate data;
};

#endif // ARTICOLO_H
