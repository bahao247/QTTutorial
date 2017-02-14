#include <QCoreApplication>
#include <QFile>
#include <QDebug>
#include <QString>
#include <QTextStream>
//Write
void Write(QString FileName)
{
    QFile m_File(FileName);

    //Open
    if (!m_File.open(QFile::WriteOnly | QFile::Text)) {
        qDebug() << "Could not open file";
        return;
    }

    //Write
    QTextStream out(&m_File);
    out << "Write content to file!!!";

    //Close
    qDebug() << "Finish Write";
    m_File.flush();
    m_File.close();
}


//Read
void Read(QString FileName)
{
    QFile m_File(FileName);

    //Open
    if (!m_File.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "Could not open file";
        return;
    }

    //Write
    QTextStream in(&m_File);
    QString m_Text = in.readAll();

    qDebug() << "Content is: " << m_Text;

    //Close
    qDebug() << "Finish Read";
    m_File.close();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString m_FileName = "E:\\TNA\\QT\\RootQT\\filename1.txt";
    QString m_ResourceFileName = ":/new/MyFiles/QFile.pro";

    Write(m_FileName);
    Read(m_FileName);

    Read(m_ResourceFileName);

    return a.exec();
}
