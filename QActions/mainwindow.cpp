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

void MainWindow::on_actionOpen_triggered()
{
    QMessageBox::information(this, "Hel", "Open");
    ui->statusBar->showMessage("Open");
}

void MainWindow::on_actionSave_triggered()
{
    QMessageBox::information(this, "Hel", "Save", QMessageBox::YesToAll);
    ui->statusBar->showMessage("Save");
}

void MainWindow::on_actionExit_triggered()
{
    QMessageBox::information(this, "Hel", "Exit");
    ui->statusBar->showMessage("Exit");
}
