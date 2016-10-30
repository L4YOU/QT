#include "editaud.h"
#include "ui_editaud.h"

EditAud::EditAud(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditAud)
{
    ui->setupUi(this);
    setuptable();
}

EditAud::~EditAud()
{
    delete ui;
}
void EditAud::setuptable()
{
    model3 = new QSqlQueryModel();
    model3->setQuery("SELECT Aud.ID,kampus,Number,Employee.Name FROM Aud INNER JOIN Employee ON Aud.employee = Employee.ID");
    ui->tableView->setModel(model3);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->show();
}
void EditAud::editaud()
{
    query3.prepare("SELECT count(id) from Employee");
    query3.exec();
    if(query3.next()) count=query3.value(0).toInt();
    query3.prepare("SELECT name from Employee");
   // query4.prepare("SELECT id from Employee");
    query3.exec();
   // query4.exec();
    while(query3.next())
    {
       name=query3.value(0).toString();
     //   id=query4.value(0).toInt();
        ui->comboBox->addItem(name);
     //   ui->comboBox->setCurrentIndex(id);
    }
}
void EditAud::deleteaud()
{
    if(ui->tableView->currentIndex().isValid())
    {
        int row=ui->tableView->currentIndex().row();
        QString indexdel = QString::number(row);
        model3->setQuery("DelAud(1)");
        setuptable();
    }
}

void EditAud::on_pushButton_4_clicked()
{
    deleteaud();
}
