#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::AddRoot(QString name, QString Description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
    itm->setText(0, name);
    itm->setText(1, Description);
    ui->treeWidget->addTopLevelItem(itm);

    AddChild(itm, "one", "hello");
    AddChild(itm, "two", "World");
}

void MainWindow::AddChild(QTreeWidgetItem *parent, QString name, QString Description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    itm->setText(0, name);
    itm->setText(1, Description);
    parent->addChild(itm);
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->treeWidget->setColumnCount(2);
    AddRoot("Hello", "World");
    AddRoot("Hello", "World");
    AddRoot("Hello", "World");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->treeWidget->currentItem()->setBackgroundColor(0, Qt::red);
    ui->treeWidget->currentItem()->setBackgroundColor(1, Qt::blue);
}
