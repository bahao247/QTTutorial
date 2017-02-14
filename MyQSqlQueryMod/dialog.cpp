#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //String Connect
    QString servername = "BAHAO\\SQLEXPRESS";
    QString dbname = "mydsn32";

    //Add Db
    db = QSqlDatabase::addDatabase("QODBC");

    //Config server DB
    db.setHostName(servername);
    db.setDatabaseName(dbname);

    db.open();
    qDebug() << "Opened DB";

    this->model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM [Test].[dbo].[View_Salary]");

    ui->tableView->setModel(model);
}

Dialog::~Dialog()
{
    db.close();
    qDebug() << "Closed DB";
    delete ui;
}
