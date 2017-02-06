#include "mythread.h"

MyThread::MyThread(QObject *parent) : QObject(parent)
{

}

void MyThread::DoSetup(QThread &cThread)
{
    connect(&cThread, SIGNAL(started()), this, SLOT(DoWork()));
}

void MyThread::DoWork()
{
    for (int i = 0; i < 100; ++i) {
        qDebug() << i;
    }
}
