#include "rivista.h"

Rivista::Rivista()
{

}

//Getters
QString Rivista::get_editore() {return editore;}
QDate Rivista::get_data() {return data;}
int Rivista::get_volume() {return volume;}

//Setters
void Rivista::set_editore(QString e) {editore = e;}
void Rivista::set_data(QDate d) {data = d;}
void Rivista::set_volume(int v) {volume =v;}
