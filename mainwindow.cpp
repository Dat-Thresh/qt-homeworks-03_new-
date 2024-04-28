#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //sql_conn_input->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pb_call_dial_sql_conn_clicked()
{
    sql_conn_input=new Dial_SQL_conn(this);
    sql_conn_input->show();
    //hide();
}

