#include "mythread.h"

QString MyThread::NameThread() const
{
    return m_NameThread;
}

void MyThread::setNameThread(const QString &NameThread)
{
    m_NameThread = NameThread;
}

MyThread::MyThread()
{

}

void MyThread::run()
{
    qDebug() << "Thread run " << this->NameThread() << "...";
    int i = 0;

    while (i  < 100) {
        qDebug() << "Thread run " << this->NameThread() << " count: " << i;
        i++;
        QMutex q_Mutex;

        q_Mutex.lock();
        if (i == 10 && this->NameThread() == "Thread 2") {
            qDebug() << "Thread run " << this->NameThread() << "zZZ";
            sleep(10);
        }
        q_Mutex.unlock();

        sleep(1);
    }
}
