#ifndef COMMON_H
#define COMMON_H

#include <QVector>
#include <QString>
#include <QListWidget>
#include <QDate>

struct helper_functions {
    virtual void refresh_list(QListWidget*) {}
};

#endif // COMMON_H
