#ifndef SIGNALSOCKET_H
#define SIGNALSOCKET_H

#include <QObject>
#include <QDebug>
#include <QTcpSocket>

class SignalSocket : public QObject
{
    Q_OBJECT
public:
    explicit SignalSocket(QObject *parent = 0);
    void f_Socket();

signals:

public slots:
    void connected();
    void disconnected();
    void bytesWritten(qint64 bytes);
    void readyRead();
private:
    QTcpSocket *p_socket;
};

#endif // SIGNALSOCKET_H
