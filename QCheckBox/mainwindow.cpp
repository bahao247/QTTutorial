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
    if (ui->checkBox->isChecked()) {
        QMessageBox::information(this, "Checked", "Check box");
    } else {
        QMessageBox::information(this, "Not Check", "Check box");
    }
}
