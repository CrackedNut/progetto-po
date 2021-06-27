#include "json_ops.h"


bool json_ops::checkexistance()
{
    std::string s = "./json_data.json";
    struct stat buffer;
    return (stat (s.c_str(), &buffer) == 0);
}

void json_ops::createjson()
{
    std::ofstream file_write("./json_data.json");
    std::string s = "{\"all_keywords\":[],\"autori\":[],\"articoli\":[],\"riviste\":[],\"conferenze\":[]}";
    file_write << s;
    file_write.close();
}

void json_ops::load_json() {

  //ifstream ifs("/home/luis/ProgettoPOv1/all_data.json");
    std::ifstream ifs("./json_data.json");
    json_data = json::parse(ifs);
    ifs.close();
}

void json_ops::write_json() {
  std::ofstream file_write("./json_data.json");
  file_write << json_data;
  file_write.close();
}

void json_ops::readfromjson()
{
    load_json();
    json j = json_data;
    Autore tmp;
    QVector<QString> genericQStringVector;
    QVector<std::tuple<QString,QString>> genericQStringTupleVector;

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

    //Fill inline QVector conferenze
    Conferenza ctmp;
    for(unsigned int i = 0; i < j["conferenze"].size(); i++)
    {
        ctmp.set_id(QString::fromStdString(j["conferenze"][i]["id"]));
        ctmp.set_nome(QString::fromStdString(j["conferenze"][i]["nome"]));
        ctmp.set_luogo(QString::fromStdString(j["conferenze"][i]["luogo"]));
        for(unsigned int l = 0; l < j["conferenze"][i]["organizzatori"].size(); l++)
        {
            genericQStringTupleVector.append(std::make_tuple(QString::fromStdString(j["conferenze"][i]["organizzatori"][l]["id"]), QString::fromStdString(j["conferenze"][i]["organizzatori"][l]["nc"])));
        }
        ctmp.set_organizzatori(genericQStringTupleVector);
        genericQStringTupleVector.clear();
        ctmp.set_data(QDate::fromString(QString::fromStdString(j["conferenze"][i]["data"]), "dd-MM-yyyy"));
        ctmp.set_partecipanti(j["conferenze"][i]["partecipanti"]);
        conferenze.push_back(ctmp);
    }

    //fill inline QVector riviste
    Rivista rtmp;
    for(unsigned int i = 0; i < j["riviste"].size(); i++)
    {
        rtmp.set_id(QString::fromStdString(j["riviste"][i]["id"]));
        rtmp.set_nome(QString::fromStdString(j["riviste"][i]["nome"]));
        rtmp.set_editore(QString::fromStdString(j["riviste"][i]["editore"]));
        rtmp.set_data(QDate::fromString(QString::fromStdString(j["riviste"][i]["data"]), "dd-MM-yyyy"));
        rtmp.set_volume(j["riviste"][i]["volume"]);

        riviste.push_back(rtmp);
    }

    //fill inline QVector articoli
    Articolo atmp;
    for(unsigned int i = 0; i < j["articoli"].size(); i++)
    {
        atmp.set_id(QString::fromStdString(j["articoli"][i]["id"]));
        atmp.set_nome(QString::fromStdString(j["articoli"][i]["nome"]));
        atmp.set_pagine(j["articoli"][i]["pagine"]);
        atmp.set_prezzo(j["articoli"][i]["prezzo"]);

        for(unsigned int l = 0; l < j["articoli"][i]["autori_articolo"].size(); l++)
            genericQStringTupleVector.append(std::make_tuple(QString::fromStdString(j["articoli"][i]["autori_articolo"][l]["id"]), QString::fromStdString(j["articoli"][i]["autori_articolo"][l]["nc"])));
        atmp.set_autori(genericQStringTupleVector);
        genericQStringTupleVector.clear();

        for(unsigned int l = 0; l < j["articoli"][i]["keywords"].size(); l++)
            genericQStringVector.append(QString::fromStdString(j["articoli"][i]["keywords"][l]));
        atmp.set_keywords(genericQStringVector);
        genericQStringVector.clear();

        for(unsigned int l = 0; l < j["articoli"][i]["correlati"].size(); l++)
            genericQStringVector.append(QString::fromStdString(j["articoli"][i]["correlati"][l]));
        atmp.set_correlati(genericQStringVector);
        genericQStringVector.clear();

        if(j["articoli"][i]["origine"] == "conferenza"){atmp.set_origine(true);}
        else {atmp.set_origine(false);}

        atmp.set_nome_origine(QString::fromStdString(j["articoli"][i]["nome_origine"]));
        atmp.set_data(QDate::fromString(QString::fromStdString(j["articoli"][i]["data"]), "dd-MM-yyyy"));

        articoli.push_back(atmp);
    }

    for(unsigned int i = 0; i < j["all_keywords"].size(); i++)
        all_keywords.push_back(QString::fromStdString(j["all_keywords"][i]));
}

void json_ops::writeautore(Autore a)
{
    int i = json_data["autori"].size();
    json_data["autori"][i]["nome"] = a.get_nome().toStdString();
    json_data["autori"][i]["cognome"] = a.get_cognome().toStdString();
    json_data["autori"][i]["id"] = a.get_id().toStdString();

    for(int j = 0; i < a.get_afferenze().size(); i++)
        json_data["autori"][i]["afferenze"][j] = a.get_afferenze()[i].toStdString();
}

void json_ops::writeconferenza(Conferenza c)
{
    int i = json_data["conferenze"].size();
    json_data["conferenze"][i]["id"] = c.get_id().toStdString();
    json_data["conferenze"][i]["nome"] = c.get_nome().toStdString();
    json_data["conferenze"][i]["luogo"] = c.get_luogo().toStdString();
    json_data["conferenze"][i]["partecipanti"] = c.get_partecipanti();

    for(int j = 0; j < c.get_organizzatori().size(); j++)
    {
        json_data["conferenze"][i]["organizzatori"][j]["id"] = std::get<0>(c.get_organizzatori()[j]).toStdString();
        json_data["conferenze"][i]["organizzatori"][j]["nc"] = std::get<1>(c.get_organizzatori()[j]).toStdString();
    }

    json_data["conferenze"][i]["data"] = c.get_data().toString("dd-MM-yyyy").toStdString();    
}

void json_ops::writerivista(Rivista r)
{
    int i = json_data["riviste"].size();
    json_data["riviste"][i]["id"] = r.get_id().toStdString();
    json_data["riviste"][i]["nome"] = r.get_nome().toStdString();
    json_data["riviste"][i]["editore"] = r.get_editore().toStdString();
    json_data["riviste"][i]["volume"] = r.get_volume();
    json_data["riviste"][i]["data"] = r.get_data().toString("dd-MM-yyyy").toStdString();
}

void json_ops::writearticolo(Articolo a)
{
    int i = json_data["articoli"].size();
    json_data["articoli"][i]["id"] = a.get_id().toStdString();
    json_data["articoli"][i]["nome"] = a.get_nome().toStdString();
    if(a.get_origine()){json_data["articoli"][i]["origine"] = "conferenza";} else{json_data["articoli"][i]["origine"] = "rivista";}
    json_data["articoli"][i]["nome_origine"] = a.get_nome_origine().toStdString();

    for(int j = 0; j<a.get_autori().size(); j++)
    {
        json_data["articoli"][i]["autori_articolo"][j]["id"] = std::get<0>(a.get_autori()[j]).toStdString();
        json_data["articoli"][i]["autori_articolo"][j]["nc"] = std::get<1>(a.get_autori()[j]).toStdString();
    }
    for(int j = 0; j < a.get_keywords().size(); j++)
        json_data["articoli"][i]["keywords"][j] = a.get_keywords()[j].toStdString();

    for(int j = 0; j < a.get_correlati().size(); j++)
        json_data["articoli"][i]["correlati"][j] = a.get_correlati()[j].toStdString();

    json_data["articoli"][i]["prezzo"] = a.get_prezzo();
    json_data["articoli"][i]["pagine"] = a.get_pagine();
    json_data["articoli"][i]["data"] = a.get_data().toString("dd-MM-yyyy").toStdString();
}

void json_ops::writekeywords()
{
    for(int i = 0; i < all_keywords.size(); i++)
        json_data["all_keywords"][i] = all_keywords[i].toStdString();
}
