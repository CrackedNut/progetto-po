#include "articolo.h"

Articolo::Articolo() {}

//Getters
int Articolo::get_pagine() {return pagine;}
QVector<QString> Articolo::get_autori() {return autori_articolo;}
QVector<QString> Articolo::get_keywords() {return keywords;}
QVector<QString> Articolo::get_correlati() {return aricoli_correlati;}
double Articolo::get_prezzo() {return prezzo;}
bool Articolo::get_origine() {return origine;}

//Setters

void Articolo::set_pagine(int p) {pagine = p;}
void Articolo::set_autori(QVector<QString> a) {autori_articolo = a;}
void Articolo::set_keywords(QVector<QString> k) {keywords = k;}
void Articolo::set_correlati(QVector<QString> c) {aricoli_correlati = c;}
void Articolo::set_prezzo(float p) {prezzo = p;}
void Articolo::set_origine(double o) {origine = o;}
