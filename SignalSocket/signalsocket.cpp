#include "signalsocket.h"

SignalSocket::SignalSocket(QObject *parent) : QObject(parent)
{

}
////////////////////////////////////////////////////////////////
void SignalSocket::f_Socket()
{
    p_socket = new QTcpSocket(this);

    connect(p_socket, SIGNAL(connected()), this, SLOT(connected()));
    connect(p_socket, SIGNAL(disconnected()), this, SLOT(disconnected()));
    connect(p_socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
    connect(p_socket, SIGNAL(bytesWritten(qint64)), this, SLOT(bytesWritten(qint64)));

    qDebug() << "Connecting...";

    p_socket->connectToHost("voidrealms.com", 80);

    if (!p_socket->waitForConnected(1000)) {
        qDebug() << "Error!" << p_socket->errorString();
    }
}
////////////////////////////////////////////////////////////////
void SignalSocket::connected()
{
    qDebug() << "Connected!";
    p_socket->write("HEAD / HTTP/1.0\r\n\r\n\r\n");
}
////////////////////////////////////////////////////////////////
void SignalSocket::disconnected()
{
    qDebug() << "Disconected!";
}
////////////////////////////////////////////////////////////////
void SignalSocket::bytesWritten(qint64 bytes)
{
    qDebug() << "Write!" << bytes;
}
////////////////////////////////////////////////////////////////
void SignalSocket::readyRead()
{
    qDebug() << "Reading...";
    qDebug() << p_socket->readAll();
}
