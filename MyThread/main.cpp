#include <QCoreApplication>
#include "mythread.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyThread m_Thread1;
    m_Thread1.setNameThread("Thread 1");
    m_Thread1.start(QThread::HighestPriority);

    MyThread m_Thread2;
    m_Thread2.setNameThread("Thread 2");
    m_Thread2.start(QThread::LowPriority);

    MyThread m_Thread3;
    m_Thread3.setNameThread("Thread 3");
    m_Thread3.start(QThread::LowestPriority);

    return a.exec();
}
