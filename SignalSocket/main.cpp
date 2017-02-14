#include <QCoreApplication>
#include "signalsocket.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SignalSocket m_SignalSocket;
    m_SignalSocket.f_Socket();

    return a.exec();
}
