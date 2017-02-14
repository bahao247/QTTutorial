#include "poolsvr.h"

PoolSvr::PoolSvr(QObject *parent):
    QTcpServer(parent)
{
    pool = new QThreadPool(this);
    pool->setMaxThreadCount(5);
}

void PoolSvr::StartServer()
{
    if (this->listen(QHostAddress::Any, 1234)) {
        qDebug() << "Server started!!!";
    }
    else {
        qDebug() << "Server did not start!!!";
    }
}

void PoolSvr::incomingConnection(qintptr handle)
{
    MyRunnable *task = new MyRunnable();
    task->setAutoDelete(true);

    task->SocketDescriptor = handle;
    pool->start(task);
}
