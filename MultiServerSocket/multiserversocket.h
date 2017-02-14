#ifndef MULTISERVERSOCKET_H
#define MULTISERVERSOCKET_H

#include <QTcpServer>
#include <QDebug>
#include "mythread.h"

class MultiServerSocket : public QTcpServer
{
    Q_OBJECT
public:
    explicit MultiServerSocket(QObject *parent = 0);
    void StartServer();
signals:

public slots:

protected:
    void incomingConnection(qintptr socketDescriptor);
};

#endif // MULTISERVERSOCKET_H
