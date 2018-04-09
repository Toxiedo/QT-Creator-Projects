#ifndef ADDFORM_H
#define ADDFORM_H

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
    class addform;
}

class addform : public QWidget
{
    Q_OBJECT

public:
    explicit addform(QWidget *parent = 0);
    void setimage(QImage img);
    ~addform();
    QTimer *time;
private slots:
    void on_pushButton_clicked();

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::addform *ui;
    QImage _my_img;
};

#endif // ADDFORM_H
