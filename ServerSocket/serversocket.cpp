#include "serversocket.h"

ServerSocket::ServerSocket(QObject *parent) : QObject(parent)
{
    p_TcpServer = new QTcpServer(this);
    connect(p_TcpServer, SIGNAL(newConnection()), this, SLOT(f_createConnect()));
    if (!p_TcpServer->listen(QHostAddress::Any, 1234)) {
        qDebug() << "Server could not start!";
    }
    else
    {
        qDebug() << "Server started!!";
    }
}

void ServerSocket::f_createConnect()
{
    QTcpSocket *p_Socket = p_TcpServer->nextPendingConnection();

    p_Socket->write("Welcome User \r\n");
    p_Socket->flush();

    p_Socket->waitForBytesWritten(3000);
    p_Socket->close();
}
