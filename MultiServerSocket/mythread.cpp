#include "mythread.h"

MyThread::MyThread(qintptr idUser, QObject *parent):
    QThread(parent)
{
    this->m_SocketDescription = idUser;
}

void MyThread::run()
{
    qDebug() << m_SocketDescription << "Starting thread!!!";

    p_socket = new QTcpSocket();

    if (!p_socket->setSocketDescriptor(this->m_SocketDescription)) {
        emit error(p_socket->error());
        return;
    }

    connect(p_socket, SIGNAL(readyRead()), this, SLOT(readyRead()), Qt::DirectConnection);
    connect(p_socket, SIGNAL(disconnected()), this, SLOT(disconnected()));

    qDebug() << "User " << m_SocketDescription << "connected!!!";

    exec();
}

void MyThread::readyRead()
{
    QByteArray Data = p_socket->readAll();
    qDebug() << m_SocketDescription << "Data in: " << Data;

    p_socket->write(Data);
}

void MyThread::disconnected()
{
    qDebug() << "User " << m_SocketDescription << "Disconnected";
    p_socket->deleteLater();
    exit(0);
}
