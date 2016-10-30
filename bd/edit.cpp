#include "edit.h"
#include "ui_edit.h"

edit::edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit)
{
    ui->setupUi(this);
    setuptable();
}

edit::~edit()
{
    delete ui;
}

void edit::setuptable()
{
    model2 = new QSqlTableModel();
    model2->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model2->setTable("Employee");
    model2->select();
    ui->tableView->setModel(model2);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->show();
}

void edit::addemployee()
{
    QString fio = ui->lineEdit->text();
    QString kaf = ui->lineEdit_2->text();
    int fop = ui->lineEdit_3->text().toInt();
    query2.prepare("INSERT INTO EMPLOYEE VALUES(:fio, :kaf, :fop);");
    query2.bindValue(":fio", fio);
    query2.bindValue(":kaf", kaf);
    query2.bindValue(":fop", fop);
    query2.exec();
    model2->select();
}
void edit::deleteemployee()
{
    if(ui->tableView->currentIndex().isValid())
    {
        int row=ui->tableView->currentIndex().row();
        model2->removeRows(row,1);
        model2->submitAll();
        model2->select();
    }
}


void edit::on_pushButton_2_clicked()
{
    addemployee();
}

void edit::on_pushButton_clicked()
{
    deleteemployee();
}

void edit::on_pushButton_3_clicked()
{
    model2->submitAll();
    this->close();
}

void edit::on_pushButton_4_clicked()
{
    this->close();
}
