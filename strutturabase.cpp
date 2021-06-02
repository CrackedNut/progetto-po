#include "strutturabase.h"

StrutturaBase::StrutturaBase() {}

const QString StrutturaBase::get_id() {return id;}
const QString StrutturaBase::get_nome() {return nome;}

void StrutturaBase::set_id(QString i) {id = i;}
void StrutturaBase::set_nome(QString n) {nome = n;}
