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
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    //Text
    painter.drawText(100, 100, "Helllo!");


////////////////////////////////////////////////////////////////
    //QGradients

//    QConicalGradient grad3(QPoint(100, 100), 10);

//    grad3.setColorAt(0.0,Qt::white);
//    grad3.setColorAt(0.2,Qt::green);
//    grad3.setColorAt(1.0,Qt::black);

////    QRadialGradient grad2(QPoint(100, 100), 100);

////    grad2.setColorAt(0.0,Qt::white);
////    grad2.setColorAt(0.2,Qt::green);
////    grad2.setColorAt(1.0,Qt::black);

////    QLinearGradient grad1(25, 100, 150, 175);

////    grad1.setColorAt(0.0,Qt::white);
////    grad1.setColorAt(0.2,Qt::green);
////    grad1.setColorAt(1.0,Qt::black);

//    QRect rect(10, 10, 200, 200);
//    painter.fillRect(rect, grad3);

    //Qpolygon
//    QPolygon poly;
//    poly << QPoint(10,10);
//    poly << QPoint(10,100);
//    poly << QPoint(100,10);
//    poly << QPoint(100,100);


//    QPen linepen;
//    linepen.setWidth(8);
//    linepen.setColor(Qt::red);
//    linepen.setJoinStyle(Qt::RoundJoin);//Bo goc
//    painter.setPen(linepen);

//    QBrush fillbrush;
//    fillbrush.setColor(Qt::green);
//    fillbrush.setStyle(Qt::SolidPattern);

//    QPainterPath path;
//    path.addPolygon(poly);

//    painter.fillPath(path, fillbrush);

//    painter.drawPolygon(poly);
////////////////////////////////////////////////////////////////
//    QRect rec(10,10,100,100);
//    QPen framepen(Qt::red);
//    framepen.setWidth(6);

//    QBrush brush(Qt::blue, Qt::DiagCrossPattern);
//    painter.fillRect(rec, brush);

//    painter.setPen(framepen);
//    painter.drawRect(rec);

//    painter.drawEllipse(rec);
////////////////////////////////////////////////////////////////
//    QPen painterpen(Qt::black);

//    painterpen.setWidth(6);

//    QPen linepen(Qt::red);

//    linepen.setWidth(2);

//    QPoint p1;
//    p1.setX(10);
//    p1.setY(10);

//    QPoint p2;
//    p2.setX(200);
//    p2.setY(300);

//    painter.setPen(linepen);

//    painter.drawLine(p1,p2);


//    QPen pointpen(Qt::black);
//    pointpen.setWidth(6);

//    painter.setPen(pointpen);
//    painter.drawPoint(p1);
//    painter.drawPoint(p2);
}
