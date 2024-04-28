#include "mainwindow.h"

#include <QApplication>
//#include <QSql>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
//    QSqlDatabase sql_obj;
//    sql_obj.connectionName();
    return a.exec();
}
