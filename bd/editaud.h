#ifndef EDITAUD_H
#define EDITAUD_H

#include <QDialog>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QString>

namespace Ui {
class EditAud;
}

class EditAud : public QDialog
{
    Q_OBJECT

public:
    explicit EditAud(QWidget *parent = 0);
    ~EditAud();
    void addaud();
    void deleteaud();
    void editaud();
    void setuptable();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::EditAud *ui;
    QSqlQuery query3;
    QSqlQuery query4;
    QSqlQueryModel *model3;
    QString name;
    int id,count;
};

#endif // EDITAUD_H
