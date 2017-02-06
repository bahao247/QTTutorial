#include <QCoreApplication>
#include "mythread.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QThread cThread;
    MyThread cObject;

    cObject.DoSetup(cThread);

    cObject.moveToThread(&cThread);

    cThread.start();

    return a.exec();
}
