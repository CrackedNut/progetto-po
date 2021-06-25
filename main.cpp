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
#if defined(_WIN32) || defined(__APPLE__)
        catch(errno_t){json_ops::createjson(); json_ops::readfromjson();}
#elif defined(__linux__)
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
