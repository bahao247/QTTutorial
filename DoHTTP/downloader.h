#ifndef DOWNLOADER_H
#define DOWNLOADER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QFile>
#include <QDebug>

class downloader : public QObject
{
    Q_OBJECT
public:
    explicit downloader(QObject *parent = 0);

    void Do_Download();
signals:

public slots:
    void stateChanged(int state);
    void responseHeaderReceived(const QHttpResponseHeader& resp);
private:
    QHttp *http;
};

#endif // DOWNLOADER_H
