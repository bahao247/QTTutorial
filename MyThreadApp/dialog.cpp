#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    emit on_stop
    delete ui;
}

void Dialog::newNumber(QString name, int number)
{
    qDebug() << "From Dialog: " << name << " " << number;
}

void Dialog::on_pushButton_clicked()
{
    connect(&mJob, &MyJob::on_Number, this, &Dialog::newNumber);
    //connect(this, &Dialog::stop, &mJob, &MyJob::stop);

    QFuture<void> test = QtConcurrent::run(&this->mJob, &MyJob::start,QString ("kitten"));
}

void Dialog::on_pushButton_2_clicked()
{
    emit stop();
}
