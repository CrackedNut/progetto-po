#ifndef JSON_OPS_H
#define JSON_OPS_H

#include "all_data.h"

#include <sys/stat.h>
#include <unistd.h>
#include <string>
#include <fstream>

namespace json_ops
{
    bool checkexistance();
    void createjson();
    void readfromjson();
    void load_json();
    void write_json();

    void writeautore(Autore a);
    void writeconferenza(Conferenza c);
    void writerivista(Rivista r);
    void writearticolo(Articolo a);
    void writekeywords();
}

#endif // JSON_OPS_H
