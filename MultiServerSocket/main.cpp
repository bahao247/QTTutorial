#include <QCoreApplication>
#include "multiserversocket.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MultiServerSocket m_MultiServerSocket;
    m_MultiServerSocket.StartServer();

    return a.exec();
}
