#include <QCoreApplication>
#include "sockettcp.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    sockettcp m_SocketTCP;
    m_SocketTCP.Connect();

    return a.exec();
}
