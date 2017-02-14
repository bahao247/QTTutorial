#include "multiserversocket.h"
#include "mythread.h"

MultiServerSocket::MultiServerSocket(QObject *parent) : QTcpServer(parent)
{

}

void MultiServerSocket::StartServer()
{
    if (!this->listen(QHostAddress::Any, 1234)) {
        qDebug() << "Could not start server.";
    }
    else
    {
        qDebug() << "Listening...";
    }
}

void MultiServerSocket::incomingConnection(qintptr socketDescriptor)
{
    qDebug() << socketDescriptor << "Connecting...";
    MyThread *p_thread = new MyThread(socketDescriptor, this);
    connect(p_thread, SIGNAL(finished()), p_thread, SLOT(deleteLater()));

    p_thread->start();
}
