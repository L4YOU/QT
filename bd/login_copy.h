#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSettings>
#include <QDebug>
#include <QSqlRecord>
#include <QSqlError>
#include "QtSql/QSqlDatabase"
#include <showtata.h>
#include <ui_showtata.h>

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();
    QAction *Setting;
    QMessageBox* mes1;
     showtata* dod;
     Login* main;
    void loadsettings();
    void savesettings();
void setBeginSeting();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void showclosed();

private:
    Ui::Login *ui;
    QSettings* settings;
    QSqlDatabase db;

};

#endif // LOGIN_H
