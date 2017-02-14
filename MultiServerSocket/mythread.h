#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QtCore>
#include <QDebug>

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(qintptr idUser, QObject *parent = 0);
    void run();

signals:
    void error(QTcpSocket::SocketError socketerror);

public slots:
    void readyRead();
    void disconnected();
private:
    QTcpSocket *p_socket;
    qintptr m_SocketDescription;
};

#endif // MYTHREAD_H
