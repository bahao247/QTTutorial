#include <QCoreApplication>
#include <myudp.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyUDP m_Server;
    MyUDP m_Client;
    MyUDP m_Client1;

    m_Client.SayHello();

    return a.exec();
}
