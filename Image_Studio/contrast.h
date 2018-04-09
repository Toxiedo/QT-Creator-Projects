#ifndef CONTRAST_H
#define CONTRAST_H


//#include <mainwindow.h>
#include <QWidget>
#include <QtCore>
#include <QtGui>
#include <QGraphicsAnchorLayout>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "qimage.h"
#include <QFileDialog>
#include <QPixmap>
#include "qpixmap.h"


namespace Ui {
    class contrast;
}

class MainWindow;

class contrast : public QWidget
{
    Q_OBJECT

public:
    explicit contrast(QWidget *parent = 0);
    void setimage(QImage img);
    ~contrast();

private slots:
    void on_verticalSlider_valueChanged(int value);

    void on_horizontalSlider_valueChanged(int value);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::contrast *ui;
    MainWindow *mnwindow;
    QImage _my_img;
    QImage _play_img;
};

#endif // CONTRAST_H
