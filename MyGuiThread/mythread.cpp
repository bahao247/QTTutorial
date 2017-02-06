#include "mythread.h"
#include <QtCore>

MyThread::MyThread(QObject *parent, bool b) :
    QThread(parent), m_Stop(b)
{

}

void MyThread::run()
{
    for (int i = 0; i < 10000; ++i) {
        QMutex mutex;
        mutex.lock();
        if (this->m_Stop) {
            break;
        }
        mutex.unlock();
        emit NumberChanged(i);

        // slowdown the count change, msec
        this->msleep(500);
    }
}
