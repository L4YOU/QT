#include "database.h"
#include "ui_database.h"

DataBase::DataBase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DataBase)
{
    ui->setupUi(this);
    model = new QSqlTableModel();
    model->setTable("Table_1");
    model->select();
//    model->setHeaderData(0,Qt::Horizontal,"NumberI");
//    model->setHeaderData(1,Qt::Horizontal,"ASSSA");
//    model->setHeaderData(1,Qt::Horizontal,"NumberI");
//    model->setHeaderData(1,Qt::Horizontal,"ASSSA");
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->show();
}

DataBase::~DataBase()
{
    delete ui;
}
