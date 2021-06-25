#ifndef RIVISTA_H
#define RIVISTA_H

#include "strutturabase.h"


class Rivista : public StrutturaBase
{
public:
    Rivista();

    //Getters
    QString get_editore();
    QDate get_data();
    int get_volume();

    //Setters
    void set_editore(QString);
    void set_data(QDate);
    void set_volume(int);

private:
    QString editore;
    QDate data;
    int volume;
};

#endif // RIVISTA_H
