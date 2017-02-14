#include "myjob.h"

MyJob::MyJob(QObject *parent) : QObject(parent)
{
    m_Stop = false;
}

void MyJob::start(QString name)
{
    m_Stop = false;

    for (int var = 0; var < 9999; ++var) {
        if (m_Stop) {
            return;
        }

        qDebug() << "from thread: " << var;
        emit on_Number(name, var);
        QThread::currentThread()->msleep(100);
    }
}

void MyJob::stop()
{
    m_Stop = true;
}
