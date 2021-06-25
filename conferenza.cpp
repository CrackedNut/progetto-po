#include "conferenza.h"

Conferenza::Conferenza()
{

}

//Getters
QString Conferenza::get_luogo() {return luogo;}
QDate Conferenza::get_data() {return data;}
QVector<std::tuple<QString,QString>> Conferenza::get_organizzatori() {return organizzatori;}
int Conferenza::get_partecipanti() {return partecipanti;}

//Setters
void Conferenza::set_luogo(QString l) {luogo = l;}
void Conferenza::set_data(QDate d) {data = d;}
void Conferenza::set_organizzatori(QVector<QString> o) {organizzatori = o;}
void Conferenza::set_partecipanti(int p) {partecipanti = p;}
