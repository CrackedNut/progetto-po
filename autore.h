#ifndef AUTORE_H
#define AUTORE_H

#include "strutturabase.h"

class Autore : public StrutturaBase
{
public:
    Autore();
    QString get_cognome();
    QVector<QString> get_afferenze();

    void set_cognome(QString);
    void set_afferenze(QVector<QString>);
private:
    QString cognome;
    QVector<QString> afferenze;
};

#endif // AUTORE_H
