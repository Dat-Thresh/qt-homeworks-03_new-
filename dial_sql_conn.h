#ifndef DIAL_SQL_CONN_H
#define DIAL_SQL_CONN_H

#include <QDialog>

namespace Ui {
class Dial_SQL_conn;
}

class Dial_SQL_conn : public QDialog
{
    Q_OBJECT

public:
    explicit Dial_SQL_conn(QWidget *parent = nullptr);
    ~Dial_SQL_conn();

private:
    Ui::Dial_SQL_conn *ui;
};

#endif // DIAL_SQL_CONN_H
