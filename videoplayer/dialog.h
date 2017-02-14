#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMediaPlayer>
#include <QDebug>
#include <QVideoWidget>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_sliderProgress_sliderMoved(int position);

    void on_sliderVolume_sliderMoved(int position);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_positionChanged(qint64 position);

    void on_durationChanged(qint64 position);

private:
    Ui::Dialog *ui;
    QMediaPlayer* player;
    QVideoWidget* vw;

};

#endif // DIALOG_H
