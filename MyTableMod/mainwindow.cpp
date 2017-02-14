#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setCentralWidget(ui->tableView);

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

    model = new QSqlTableModel(this);
    model->setTable("People");
    model->select();

    ui->tableView->setModel(model);

//    this->model = new QSqlQueryModel();
//    model->setQuery("SELECT [ID],[FirstName],[LastName]FROM [Test].[dbo].[People]");

//    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    db.close();
    qDebug() << "Closed DB";
    delete ui;
}
