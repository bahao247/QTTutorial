#include <QCoreApplication>
#include <QtSql>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString servername = "BAHAO\\SQLEXPRESS";
    QString dbname = "mydsn32";

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    db.setHostName("BAHAO\\SQLEXPRESS");
    db.setDatabaseName(dbname);

//    db.setConnectOptions();

//    QString dsn = QString("DRIVER={SQL Native Client}; SERVER=%1; DATABASE=%2; Trusted_Connection=Yes;").arg(servername).arg(dbname);

//    db.setDatabaseName(dsn);

    if (db.open()) {

        //Opened
        qDebug() << "Opened!!";
        QSqlQuery qry;
//Select record
//        if (qry.exec("SELECT * FROM [Test].[dbo].[People]")) {
//            while (qry.next()) {
//                qDebug() << qry.value(1).toString();
//            }
//        }else {
//            qDebug() << "Error = " << qry.lastError().text();
//        }

//Insert record
//        QString sQuery = "INSERT INTO [dbo].[People]([ID],[FirstName],[LastName])VALUES(:id,:first,:last)";

//         qry.prepare(sQuery);

//         qry.bindValue(":id", 3);
//         qry.bindValue(":first", "Tuấn");
//         qry.bindValue(":last", "Nguyễn Anh");

//         if (qry.exec()) {
//            qDebug() << "Insert record!!!";
//         }else {
//             qDebug() << "Error = " << qry.lastError().text();
//                 }

        //Close
        qDebug() << "Closed!!";
        db.close();
    }
    else {
        qDebug() << "Error = " << db.lastError().text();
    }
    return a.exec();
}
