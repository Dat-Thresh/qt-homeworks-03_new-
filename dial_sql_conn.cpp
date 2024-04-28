#include "dial_sql_conn.h"
#include "ui_dial_sql_conn.h"
//#include <qvariant.h>

Dial_SQL_conn::Dial_SQL_conn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dial_SQL_conn)
{
    ui->setupUi(this);
}

Dial_SQL_conn::~Dial_SQL_conn()
{
    qDebug() << "dialog deleted";
    delete ui;

}
