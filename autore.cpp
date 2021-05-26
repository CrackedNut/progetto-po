#include "autore.h"

Autore::Autore():StrutturaBase() {}

QString Autore::get_cognome() {return cognome;}
QVector<QString> Autore::get_afferenze() {return afferenze;}

void Autore::set_cognome(QString c) {cognome = c;}
void Autore::set_afferenze(QVector<QString> a) {afferenze = a;}
