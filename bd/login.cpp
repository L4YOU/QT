#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    mes1=new QMessageBox();
    settings = new QSettings("settings.ini", QSettings::IniFormat, this);
    loadsettings();
}

Login::~Login()
{
savesettings();
    delete ui;
}


void Login::savesettings()
{
   settings->setValue("ip", ui->lineEdit->text());
   settings->setValue("bdname", ui->lineEdit_2->text());
   settings->setValue("login", ui->lineEdit_3->text());
   settings->setValue("11APOJlb", ui->lineEdit_4->text());
}

void Login::loadsettings()
{
QString label = settings->value("ip").toString();
 ui->lineEdit->setText(label);
QString label2 = settings->value("bdname").toString();
 ui->lineEdit_2->setText(label2);
QString label3 = settings->value("login").toString();
 ui->lineEdit_3->setText(label3);
QString label4 = settings->value("11APOJlb").toString();
 ui->lineEdit_4->setText(label4);
}
void Login::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
       db.setDatabaseName("Driver={SQL SERVER};Server="+
                          ui->lineEdit->text()+";Database="+ui->lineEdit_2->text()+
                          ";Trusted_Connection=no;");
       db.setUserName(ui->lineEdit_3->text());
       db.setPassword(ui->lineEdit_4->text());
       if(db.open()){
//           mes1->setText("luck");
//           qDebug() << "luck";
//           mes1->show();
           dod = new showtata;
           dod->show();
           this->close();
       }
       else { qDebug() << db.lastError().text();}
//           mes1->show();

       QObject::connect(dod, SIGNAL(closed()), this, SLOT(showclosed()));
}

void Login::on_pushButton_2_clicked()
{

    this->close();
}

void Login::showclosed()
{
        this->show();
}
