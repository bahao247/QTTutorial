#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    m_Scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(m_Scene);

    QBrush redBrush(Qt::red);
    QBrush blueBrush(Qt::blue);
    QPen blackPen(Qt::black);

    blackPen.setWidth(6);

    m_Ellipse = m_Scene->addEllipse(10,10,100,100,blackPen, redBrush);

    m_Rect = m_Scene->addRect(-100, -100, 50, 50, blackPen, blueBrush);

    m_Rect->setFlag(QGraphicsItem::ItemIsMovable);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    ui->graphicsView->rotate(-10);
}

void Dialog::on_pushButton_2_clicked()
{
    ui->graphicsView->rotate(10);
}
