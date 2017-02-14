#include "sockettcp.h"

sockettcp::sockettcp(QObject *parent) : QObject(parent)
{

}

void sockettcp::Connect()
{
    p_socket = new QTcpSocket(this);
    //Connected
    p_socket->connectToHost("voidrealms.com", 80);

    if (p_socket->waitForConnected(3000)) {
        qDebug() << "Connected...";

        //Sent
        p_socket->write("hello server\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n");

        p_socket->waitForBytesWritten(1000);
        p_socket->waitForReadyRead(3000);
        qDebug() << "Reading..." << p_socket->bytesAvailable();

        qDebug() << p_socket->readAll();
        //Got


        //Closed
        p_socket->close();
    }
    else
    {
        qDebug() << "Not Connected!";
    }

}
