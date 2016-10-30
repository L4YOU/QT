#ifndef DATABASE_H
#define DATABASE_H

#include <QWidget>
#include<login.h>
#include<ui_login.h>
#include <QSqlTableModel>
namespace Ui {
class DataBase;
}

class DataBase : public QWidget
{
    Q_OBJECT

public:
    explicit DataBase(QWidget *parent = 0);
    ~DataBase();

private:
    Ui::DataBase *ui;
    QSqlTableModel* model;
};

#endif // DATABASE_H
