#include "stage.h"
#include <QString>
#include <QTime>

stage::stage()
{

}

stage::stage(QString name, float length, QTime time, int id)
{
    sname = name;
    slength = length;
    stime = time;
    sid = id;
}

QString stage::getName() const
{
    return sname;
}

void stage::setName(QString name)
{
   sname = name;
}

float stage::getLength() const
{
    return slength;
}

void stage::setLength(float length)
{
    slength = length;
}

QTime stage::getTime() const
{
    return stime;
}

void stage::setTime(QTime time)
{
    stime = time;
}

int stage::getId() const
{
    return sid;
}
