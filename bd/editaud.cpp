#include "editaud.h"
#include "ui_editaud.h"

EditAud::EditAud(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditAud)
{

    ui->setupUi(this);
    setuptable();
    setupcombo();
    ui->lineEdit_3->setText(QString::number(ui->comboBox->currentIndex()));
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

void EditAud::setupcombo()
{
    query3.prepare("SELECT count(id) from Employee");
    query3.exec();
    if(query3.next()) count=query3.value(0).toInt();
    query3.prepare("SELECT name, id from Employee");
    query3.exec();
    while(query3.next())
    {
       name=query3.value(0).toString();
       id=query3.value(1).toInt();
       ui->lineEdit_2->setText(QString::number(id));
       ui->comboBox->addItem(name);
      // ui->comboBox->setCurrentIndex(id);
    }
}

void EditAud::editaud()
{

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

void EditAud::addaud()
{

}

void EditAud::on_pushButton_4_clicked()
{
    deleteaud();
}
