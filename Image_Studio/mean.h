#ifndef MEAN_H
#define MEAN_H

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
#include <mainwindow.h>

namespace Ui {
    class mean;
}

class mean : public QWidget
{
    Q_OBJECT

public:
    explicit mean(QWidget *parent = 0);
    void setimage(QImage img);
    ~mean();

private slots:
    void on_pushButton_clicked();

    //void on_pushButton_2_clicked();

private:
    Ui::mean *ui;
    MainWindow *mnwindow;
    QImage _my_image_mean;
};

#endif // MEAN_H


