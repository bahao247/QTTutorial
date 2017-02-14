#include "myudp.h"

MyUDP::MyUDP(QObject *parent) : QObject(parent)
{
    m_socket = new QUdpSocket(this);
    m_socket->bind(QHostAddress::LocalHost,1234);
    connect(m_socket,SIGNAL(readyRead()), this, SLOT(readyRead()));
}

void MyUDP::SayHello()
{
    QByteArray Data;
    Data.append("Hello from UDP Land");
    m_socket->writeDatagram(Data, QHostAddress::LocalHost, 1234);
    //192.168.1.10
    //192.168.1.255
}

void MyUDP::readyRead()
{
    QByteArray Buffer;
    Buffer.resize(m_socket->pendingDatagramSize());

    QHostAddress m_sender;
    quint16 m_senderPort;

    m_socket->readDatagram(Buffer.data(), Buffer.size(), &m_sender, &m_senderPort);

    qDebug() << "Msg from: " << m_sender.toString();
    qDebug() << "Msg port: " << m_senderPort;
    qDebug() << "Msg: " << Buffer;

}
