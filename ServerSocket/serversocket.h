#ifndef SERVERSOCKET_H
#define SERVERSOCKET_H

#include <QObject>
#include <QTcpSocket>
#include <QTcpServer>
#include <QDebug>

class ServerSocket : public QObject
{
    Q_OBJECT
public:
    explicit ServerSocket(QObject *parent = 0);

signals:

public slots:
    void  f_createConnect();

private:
    QTcpServer *p_TcpServer;
};

#endif // SERVERSOCKET_H
