#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_Thread = new MyThread(this);
    connect(m_Thread, SIGNAL(NumberChanged(int)), this, SLOT(onNumberChanged(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onNumberChanged(int Number)
{
    ui->label->setText(QString::number(Number));
}
void MainWindow::on_pushButton_clicked()
{
    m_Thread->start();
}

void MainWindow::on_pushButton_2_clicked()
{
    m_Thread->m_Stop = true;
}
