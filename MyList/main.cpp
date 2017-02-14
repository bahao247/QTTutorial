#include <QCoreApplication>
#include <QList>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List;
    int total = 10;
    for (int var = 1; var < total; ++var) {
        List.append(var);
    }

    List.removeOne(0);
    List.removeAt(8);

    foreach (int m_Number, List) {
        qDebug() << m_Number;
    }


    QMutableListIterator<int> Inter(List);

    while (Inter.hasNext()) {
        int i = Inter.next();
        if(i == 5)
        {
            Inter.remove();
        }
    }

    Inter.toFront();

    while (Inter.hasNext()) {
        qDebug() << Inter.next();
    }

    return a.exec();
}
