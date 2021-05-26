#include "strutturabase.h"

StrutturaBase::StrutturaBase() {}

QString StrutturaBase::get_id() {return id;}
QString StrutturaBase::get_nome() {return nome;}

void StrutturaBase::set_id(QString i) {id = i;}
void StrutturaBase::set_nome(QString n) {nome = n;}
