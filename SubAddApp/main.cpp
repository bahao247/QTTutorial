#include <QCoreApplication>

#include "subaddlib.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SubAddLib m_subaddlib;

    return a.exec();
}
