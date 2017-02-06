#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(QObject *parent = 0, bool b = false);
    void run();
    bool m_Stop;
signals:
    void NumberChanged(int);
};

#endif // MYTHREAD_H
