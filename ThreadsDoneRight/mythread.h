#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QtCore>
#include <QtDebug>
#include <QThread>

class MyThread : public QObject
{
    Q_OBJECT
public:
    explicit MyThread(QObject *parent = 0);
    void DoSetup(QThread &cThread);

signals:

public slots:
    void DoWork();
};

#endif // MYTHREAD_H
