#include "mainwindow.h"

#include <QApplication>
#include "all_data.h"
#include "json_ops.h"

int main(int argc, char *argv[])
{

    if(json_ops::checkexistance())
    {
        qDebug() << "exists";
        try{json_ops::readfromjson();}
        catch(error_t){json_ops::createjson(); json_ops::readfromjson();}
    }
    else
    {
        json_ops::createjson();
        json_ops::readfromjson();
    }
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
