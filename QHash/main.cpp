#include <QCoreApplication>
#include <QDebug>
#include <QHash>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QHash<QString, QString> Employeess;
    Employeess.insert("mot", "Bob");
    Employeess.insert("hai", "Jam");
    Employeess.insert("ba", "July");

    foreach (QString i, Employeess.keys()) {
        qDebug() << Employeess[i];
    }

    qDebug() << "++Test NV 3: " << Employeess.value("ba");

    QHashIterator<QString, QString> Iter(Employeess);

    while (Iter.hasNext()) {
        Iter.next();
        qDebug() << Iter.key() << " = " << Iter.value();
    }

    //qDebug() << "--Test NV 3: " << Iter.value();

    Employeess.clear();

    return a.exec();
}
