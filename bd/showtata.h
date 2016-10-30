#ifndef SHOWTATA_H
#define SHOWTATA_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QComboBox>
#include <QSqlQuery>
#include <QUdpSocket>
#include "edit.h"
#include "ui_edit.h"
#include "editaud.h"
#include "ui_editaud.h"

namespace Ui {
class showtata;
}

class showtata : public QWidget
{
    Q_OBJECT

public:
    explicit showtata(QWidget *parent = 0);
    edit* edemp;
    EditAud* edaud;
    ~showtata();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_comboBox_currentTextChanged();

    void on_pushButton_3_clicked();
    void sendMessage();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

signals:
    bool closed();

private:
    Ui::showtata *ui;
    QSqlQueryModel* model1;
    QString table;
    int count;
    QSqlQuery query;
    QString name;
    QUdpSocket *socket;
    QHostAddress groupaddress;
    QByteArray send;
};

#endif // SHOWTATA_H
