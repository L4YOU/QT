#ifndef EDIT_H
#define EDIT_H

#include <QDialog>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QString>

namespace Ui {
class edit;
}

class edit : public QDialog
{
    Q_OBJECT

public:
    explicit edit(QWidget *parent = 0);
    ~edit();
    void addemployee();
    void deleteemployee();
    void setuptable();

private:
    Ui::edit *ui;
    QSqlQuery query2;
    QSqlTableModel *model2;
public slots:
private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
};

#endif // EDIT_H
