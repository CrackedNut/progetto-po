#ifndef ALL_DATA_H
#define ALL_DATA_H

#include "autore.h"
#include "conferenza.h"
#include "rivista.h"
#include "articolo.h"
#include "common.h"

#include "json.hpp"
#include "json_ops.h"

#include <tuple>

using json=nlohmann::json;
//using namespace std;

inline QVector<Autore> autori;
inline QVector<Conferenza> conferenze;
inline QVector<Rivista> riviste;
inline QVector<Articolo> articoli;

inline QVector<QString> all_keywords;

inline json json_data;

#endif // ALL_DATA_H
