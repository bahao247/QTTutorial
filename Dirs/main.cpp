#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QString m_Path = "E:\\TNA\\QT";
    QDir m_Dirs(m_Path);

//    if (!m_Dirs.exists(m_Path)) {
//        m_Dirs.mkpath(m_Path);
//        qDebug() << "Created";
//    }
//    else {
//        qDebug() << "Already exists";
//    }

//    m_Dirs.setPath(m_Path);

    qintptr i = 0;

    foreach (QFileInfo mitm, m_Dirs.entryInfoList()) {
        qDebug() << i++ << mitm.absoluteFilePath();
    }

    return a.exec();
}
