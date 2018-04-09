#ifndef GAMMA_H
#define GAMMA_H

//#include <QWidget>
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
    class Gamma;
}

class MainWindow;

class Gamma : public QWidget
{
    Q_OBJECT

public:
    explicit Gamma(QWidget *parent = 0);
    void setimage(QImage img);
    ~Gamma();

private slots:
    void on_pushButton_clicked();

    void on_verticalSlider_valueChanged(int value);

    void on_pushButton_2_clicked();

private:
    Ui::Gamma *ui;
    MainWindow *mnwindow;
    QImage _my_image_gammaahmedsalah;

};

#endif // GAMMA_H
