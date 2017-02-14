#include <QIODevice>
#include <QCoreApplication>
#include <QtCore>
#include <QFile>
#include <QString>
#include <QMap>
#include <QDebug>

void Save()
{
    int MyNum = 22;
    QMap<qint64, QString> map;
    map.insert(1, "one");
    map.insert(2, "two");
    map.insert(3, "three");

    QFile file("E:/TNA/QT/RootQT/filename1.txt");

    if (!file.open(QIODevice::WriteOnly)) {
        qDebug() << "Could not Open!!!";
        return;
    }

    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_DefaultCompiledVersion);

    out << "q" << "q" << "a" << "z";

    file.flush();
    file.close();
}

void Open()
{
    int MyNum;
    QMap<qint64, QString> map;

    QFile file("E:/TNA/QT/RootQT/filename2.txt");

    if (!file.open(QIODevice::ReadWrite)) {
        qDebug() << "Could not Open!!!";
        return;
    }

    QDataStream in(&file);
    in.setVersion(QDataStream::Qt_4_7);

    in >> MyNum >> map;

    qDebug() << "My Num" << MyNum;

    foreach (QString item, map.values()) {
        qDebug() << "Data" << item;
    }

    file.close();
}

void Write()
{
    QFile file("E:/TNA/QT/RootQT/filename1.txt");

    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {

        QTextStream stream(&file);
        stream << "Hello\r\n";
        stream << "World\r\n";

        file.flush();
        file.close();
        qDebug() << "File Written";
    }
}

void Read()
{
    QFile file("E:/TNA/QT/RootQT/filename1.txt");

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {

        QTextStream stream(&file);

        QString line;
        do {
            line = stream.readLine();
            qDebug() << line;
        } while (!line.isNull());

        file.close();
        qDebug() << "File Read";
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Write();

    Read();

    return a.exec();
}
