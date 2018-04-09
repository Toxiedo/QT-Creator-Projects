#ifndef BILINEAR_RESIZE_H
#define BILINEAR_RESIZE_H

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
    class Bilinear_resize;
}
class MainWindow;
class Bilinear_resize : public QWidget
{
    Q_OBJECT

public:
    explicit Bilinear_resize(QWidget *parent = 0);
    void setimage(QImage img);
    ~Bilinear_resize();

private slots:
    void on_pushButton_clicked();

    void on_verticalSlider_valueChanged(int value);

    void on_horizontalSlider_valueChanged(int value);

    void on_pushButton_2_clicked();

private:
    Ui::Bilinear_resize *ui;
    MainWindow *mnwindow;
    QImage _my_image_gamma;
    QImage  resized_image;
};

#endif // BILINEAR_RESIZE_H
