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
#ifdef _WIN32
        catch(errno_t){json_ops::createjson(); json_ops::readfromjson();}
#else
        catch(error_t){json_ops::createjson(); json_ops::readfromjson();}
#endif
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
