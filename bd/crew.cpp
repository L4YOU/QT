#include "crew.h"
#include <QString>
#include <QTime>

crew::crew()
{

}

crew::crew(QString car, QString model, QString drvtrn, float vol, int power, int id)
{
    rcar = car;
    rmodel = model;
    rdrivetrain = drvtrn;
    rvol = vol;
    rpower = power;
    rid = id;
}

QString crew::getCar() const
{
    return rcar;
}

void crew::setCar(QString car)
{
   rcar = car;
}

QString crew::getModel() const
{
    return rmodel;
}

void crew::setModel(QString model)
{
    rmodel = model;
}

QString crew::getDrivetrain() const
{
    return rdrivetrain;
}

void crew::setDrivetrain(QString drvtrn)
{
    rdrivetrain = drvtrn;
}

float crew::getVol() const
{
    return rvol;
}

void crew::setVol(float vol)
{
    rvol = vol;
}

int crew::getPower() const
{
    return rpower;
}

void crew::setPower(int power)
{
    rpower = power;
}

int crew::getId() const
{
    return rid;
}
