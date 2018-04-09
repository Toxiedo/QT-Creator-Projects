#ifndef GRAY_H
#define GRAY_H

#include <QWidget>
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
    class Gray;
}

class MainWindow;

class Gray : public QWidget
{
    Q_OBJECT

public:
    explicit Gray(QWidget *parent = 0);
    void setimage(QImage img);
    ~Gray();

private slots:
    void on_pushButton_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_pushButton_2_clicked();

private:
    Ui::Gray *ui;
    MainWindow *mnwindow;
    QImage _my_image;
};

#endif // GRAY_H
