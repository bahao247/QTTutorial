#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QtCore>
#include <QtDebug>

class MyThread : public QThread
{
    QString m_NameThread;
public:
    MyThread();
    void run();
    QString NameThread() const;
    void setNameThread(const QString &NameThread);
};

#endif // MYTHREAD_H
