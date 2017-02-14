#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    player = new QMediaPlayer(this);

    connect(player, &QMediaPlayer::positionChanged, this, &Dialog::on_positionChanged);
    connect(player, &QMediaPlayer::durationChanged, this, &Dialog::on_durationChanged);

    QVideoWidget* vw = new QVideoWidget;
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_sliderProgress_sliderMoved(int position)
{
    player->setPosition(position);
}

void Dialog::on_sliderVolume_sliderMoved(int position)
{
    player->setVolume(position);
}

void Dialog::on_pushButton_clicked()
{
    //Load the file
    player->setVideoOutput(vw);

    player->setMedia(QUrl::fromLocalFile("D:/git/QT/QTTutorial/videoplayer/samples/m84_1.mpg"));

    vw->setGeometry(100,100,300,400);
    vw->show();

    player->play();

    qDebug() << player->state();
//    player->setMedia(QUrl::fromLocalFile("D:/git/QT/QTTutorial/MyPlayer/test.mp3"));
//    player->play();
//    qDebug() << player->errorString();
    qDebug() << "Played";
}

void Dialog::on_pushButton_2_clicked()
{
    player->stop();
    qDebug() << "Stoped";
}

void Dialog::on_positionChanged(qint64 position)
{
    ui->sliderProgress->setValue(position);
}

void Dialog::on_durationChanged(qint64 position)
{
    ui->sliderProgress->setMaximum(position);
}
