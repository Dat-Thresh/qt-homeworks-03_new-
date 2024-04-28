#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dial_sql_conn.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_call_dial_sql_conn_clicked();

private:
    Ui::MainWindow *ui;
    Dial_SQL_conn *sql_conn_input;
};
#endif // MAINWINDOW_H
