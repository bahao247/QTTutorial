#ifndef SOCKETTCP_H
#define SOCKETTCP_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>

class sockettcp : public QObject
{
    Q_OBJECT
public:
    explicit sockettcp(QObject *parent = 0);
    void Connect();
signals:

public slots:

private:
    QTcpSocket *p_socket;
};

#endif // SOCKETTCP_H
