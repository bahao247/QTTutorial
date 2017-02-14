#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDebug>
#include "myjob.h"
#include <QtConcurrent>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

public slots:
    void newNumber(QString name, int number);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog *ui;
    MyJob mJob;
};

#endif // DIALOG_H
