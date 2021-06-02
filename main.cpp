#include "mainwindow.h"

#include <QApplication>
#include <fstream>
#include <QVector>
#include "json.hpp"
#include "all_data.h"

using json = nlohmann::json;
using namespace std;

#define JSONDIR "all_data.json"

json load_json() {
  ifstream ifs(JSONDIR);
  json j = json::parse(ifs);
  ifs.close();

  return j;
}

void write_json(json j) {
  ofstream file_write(JSONDIR);
  file_write << j;
  file_write.close();
}

void readfromjson()
{
    json j = load_json();
    Autore tmp;
    QVector<QString> genericQStringVector;

    //Fill inline QVector autori
    for(unsigned int i = 0; i <j["autori"].size(); i++)
    {
        tmp.set_id(QString::fromStdString(j["autori"][i]["id"]));
        tmp.set_nome(QString::fromStdString(j["autori"][i]["nome"]));
        tmp.set_cognome(QString::fromStdString(j["autori"][i]["cognome"]));
        tmp.set_nc();
        for(unsigned int l = 0; l < j["autori"][i]["afferenze"].size(); l++)
            genericQStringVector.append(QString::fromStdString(j["autori"][i]["afferenze"][l]));
        tmp.set_afferenze(genericQStringVector);
        genericQStringVector.clear();
        autori.push_back(tmp);
    }

    Conferenza ctmp;
    for(unsigned int i = 0; i < j["conferenze"].size(); i++)
    {
        ctmp.set_id(QString::fromStdString(j["conferenze"][i]["id"]));
        ctmp.set_nome(QString::fromStdString(j["conferenze"][i]["nome"]));
        ctmp.set_luogo(QString::fromStdString(j["conferenze"][i]["luogo"]));
        for(int l = 0; l < j["conferenze"][i]["organizzatori"]; l++)
            genericQStringVector.append(QString::fromStdString(j["conferenze"][i]["organizzatori"][l]));
        ctmp.set_organizzatori(genericQStringVector);
        genericQStringVector.clear();
        ctmp.set_data(QDate::fromString(QString::fromStdString(j["conferenze"][i]["data"]), "dd-MM-yy"));
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
