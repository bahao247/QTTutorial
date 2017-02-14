#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if (ui->radioButton->isChecked()) {
        QMessageBox::information(this, "Radio 1 Checked", "Radio button");

    } else if (ui->radioButton_2->isChecked()){
        QMessageBox::information(this, "Radio 2 Checked", "Radio button");
    }else {
        QMessageBox::information(this, "Radio not check", "Radio button");
    }
}
