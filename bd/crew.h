#ifndef CREW_H
#define CREW_H
#include <QString>
#include <QTime>

class crew
{
public:
    explicit crew();
    explicit crew(QString, QString, QString, float, int, int);

    QString getCar() const;
    void setCar(QString);

    QString getModel() const;
    void setModel(QString);

    QString getDrivetrain() const;
    void setDrivetrain(QString);

    float getVol() const;
    void setVol(float);

    int getPower() const;
    void setPower(int);

    int getId() const;
private:
    QString rcar;
    QString rmodel;
    QString rdrivetrain;
    float rvol;
    int rpower;
    int rid;
};

#endif // CREW_H
