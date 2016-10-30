#include "showtata.h"
#include "ui_showtata.h"
#include <QDebug>
#include <QHostAddress>


showtata::showtata(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::showtata)
{
    ui->setupUi(this);
    model1 = new QSqlQueryModel();
    model1->setQuery("SELECT * FROM Info");
    ui->tableView->setModel(model1);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->show();
    socket = new QUdpSocket(this);
    groupaddress = QHostAddress::Broadcast;
}

showtata::~showtata()
{
    delete ui;
}

void showtata::on_pushButton_clicked()
{
    this->close();
}

void showtata::on_pushButton_2_clicked()
{
    this->close();
    emit closed();
}


void showtata::on_pushButton_3_clicked()
{
    model1 = new QSqlQueryModel();
    model1->setQuery(""+ui->lineEdit->text()+"");
    ui->tableView->setModel(model1);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->show();
    QString qs = ui->lineEdit->text();
    std::string convert = qs.toUtf8().constData();
    send = QByteArray::fromStdString(convert);
    this->sendMessage();
}

void showtata::sendMessage()
{
       QByteArray datagram = "Выполняются запросы к БД о_О  \r\n"+send;
    socket->writeDatagram(datagram.data(), datagram.size(),
                             groupaddress, 1337);

}

void showtata::on_pushButton_4_clicked()
{
   edemp = new edit;
   edemp->show();
}

void showtata::on_pushButton_5_clicked()
{
    edaud = new EditAud;
    edaud->show();
}
