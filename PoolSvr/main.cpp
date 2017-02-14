#include <QCoreApplication>
#include <poolsvr.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    PoolSvr m_PoolSvr;
    m_PoolSvr.StartServer();

    return a.exec();
}
