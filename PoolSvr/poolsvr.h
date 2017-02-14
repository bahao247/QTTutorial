#ifndef POOLSVR_H
#define POOLSVR_H

#include <QObject>
#include <QThreadPool>
#include <QDebug>
#include <QTcpServer>
#include "myrunnable.h"

class PoolSvr : public QTcpServer
{
    Q_OBJECT
public:
    explicit PoolSvr(QObject *parent = 0);
    void StartServer();

protected:
    void incomingConnection(qintptr handle);
signals:

public slots:

private:
    QThreadPool *pool;

};

#endif // POOLSVR_H
