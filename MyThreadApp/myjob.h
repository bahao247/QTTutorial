#ifndef MYJOB_H
#define MYJOB_H

#include <QObject>
#include <QDebug>
#include <QThread>

class MyJob : public QObject
{
    Q_OBJECT
public:
    explicit MyJob(QObject *parent = 0);
    ~MyJob();
    void start(QString name);
signals:
    void on_Number(QString name, int number);

public slots:
   void stop();

private:
    bool m_Stop;
};

#endif // MYJOB_H
