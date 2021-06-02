#include "autore.h"

Autore::Autore() {}

QString Autore::get_cognome() {return cognome;}
QVector<QString> Autore::get_afferenze() {return afferenze;}
QString Autore::get_nc() {return nc;}

void Autore::set_cognome(QString c) {cognome = c;}
void Autore::set_afferenze(QVector<QString> a) {afferenze = a;}
void Autore::set_nc() {nc = nome + " " + cognome;}
