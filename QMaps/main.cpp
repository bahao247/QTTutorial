#include <QCoreApplication>
#include <QMap>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QMap<int, QString> Employees;
    Employees.insert(1, "Bob");
    Employees.insert(2, "Jam");
    Employees.insert(3, "July");

    foreach (int i, Employees.keys()) {
        qDebug() << Employees[i];
    }

    QMapIterator<int, QString> Iter(Employees);
    while (Iter.hasNext()) {
        Iter.next();
        qDebug() << Iter.key() << " = " << Iter.value();
    }

    return a.exec();
}
