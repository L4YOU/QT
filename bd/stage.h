#ifndef STAGE_H
#define STAGE_H
#include <QString>
#include <QTime>

class stage
{
public:
    explicit stage();
    explicit stage(QString, float, QTime, int);

    QString getName() const;
    void setName(QString);

    float getLength() const;
    void setLength(float);

    QTime getTime() const;
    void setTime(QTime);

    int getId() const;
private:
    QString sname;
    float slength;
    QTime stime;
    int sid;
};

#endif // STAGE_H
