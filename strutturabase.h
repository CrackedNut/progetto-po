#ifndef STRUTTURABASE_H
#define STRUTTURABASE_H

#include "common.h"

class StrutturaBase
{
protected:
    QString id, nome;

public:
    StrutturaBase();

    const QString get_id();
    const QString get_nome();

    void set_id(QString);
    void set_nome(QString);
};

#endif // STRUTTURABASE_H
