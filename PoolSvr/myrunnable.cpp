#include "myrunnable.h"

MyRunnable::MyRunnable()
{

}

void MyRunnable::run()
{
    if (!SocketDescriptor) {
        return;
    }

    QTcpSocket m_socket;
    m_socket.setSocketDescriptor(SocketDescriptor);


    m_socket.write("Hello World");
    m_socket.flush();
    m_socket.waitForBytesWritten();
    m_socket.close();
}
