#include <QCoreApplication>
#include "serversocket.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ServerSocket m_ServerSocket;

    return a.exec();
}
