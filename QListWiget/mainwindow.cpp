#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    for (int var = 0; var < 5; ++var) {
        ui->listWidget->addItem("item" + QString::number(var));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->listWidget->currentItem()->setText("Checked!");
    ui->listWidget->currentItem()->setTextColor(Qt::red);
}
