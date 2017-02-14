#include <QCoreApplication>
#include <QDebug>
#include <QStringList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QStringList m_List;

    QString m_Line = "z,b,a,g,e";

    m_List = m_Line.split(",");

    foreach (QString itm, m_List) {
        qDebug() << itm;
    }

    qSort(m_List);

    QString m_Line2 = m_List.join(",");

    qDebug() << m_Line2;

    return a.exec();
}
