#ifndef CONFERENZA_H
#define CONFERENZA_H

#include "strutturabase.h"

class Conferenza : public StrutturaBase
{
public:
    Conferenza();

    //Getters
    QString get_luogo();
    QDate get_data();
    QVector<std::tuple<QString,QString>> get_organizzatori();
    int get_partecipanti();

    //Setters
    void set_luogo(QString);
    void set_data(QDate);
    void set_organizzatori(QVector<std::tuple<QString,QString>>);
    void set_partecipanti(int);

private:
    QString luogo;
    QDate data;
    QVector<std::tuple<QString,QString>> organizzatori;
    int partecipanti;
};

#endif // CONFERENZA_H
