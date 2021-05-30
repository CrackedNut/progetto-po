#ifndef STRUTTURABASE_H
#define STRUTTURABASE_H

#include "common.h"

class StrutturaBase
{
private:
    QString id, nome;

public:
    StrutturaBase();

    QString get_id();
    QString get_nome();

    void set_id(QString);
    void set_nome(QString);
};

#endif // STRUTTURABASE_H
