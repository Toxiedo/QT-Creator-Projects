#include "gray.h"
#include "ui_gray.h"
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
#include "qstring.h"
#include <mainwindow.h>

Gray::Gray(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Gray)
{
    ui->setupUi(this);
}


Gray::~Gray()
{
    delete ui;
}

void Gray::on_pushButton_clicked()
{
    mnwindow = new MainWindow;
    mnwindow->setimage(_my_image);
    mnwindow->show();
    Gray::hide();
}
void Gray::setimage(QImage img)
{
    Gray::_my_image = img;
    QPixmap pix2;
    pix2.convertFromImage(_my_image ,0 );
    ui->label->setPixmap(pix2);
    //ui->horizontalSlider->setMaximumSize(_my_image.width() , 10);
}

void Gray::on_horizontalSlider_valueChanged(int value)
{
    QRgb clr_value1;
    int gray_value;
    for(int i =0; i<_my_image.height() ; i++)
    {
        for(int j=0;j<_my_image.width();j++)
        {
            QColor c = QColor::fromRgb (_my_image.pixel(j,i));
            double red = c.red();
            double blue = c.blue();
            double green = c.green();
            if(j < value)
            {
              gray_value = (int)((red + blue + green)/3);
              clr_value1 =  qRgb(gray_value,gray_value,gray_value);
              _my_image.setPixel(j , i, clr_value1);
            }
            else
            {
              clr_value1 =  qRgb(red , green , blue);
              _my_image.setPixel(j , i, clr_value1);
            }
        }
    }
    QPixmap pix2;
    pix2.convertFromImage(_my_image ,0 );
    ui->label->setPixmap(pix2);
}

void Gray::on_pushButton_2_clicked()
{
    QRgb clr_value1;
    int gray_value;
    for(int i =0; i<_my_image.height() ; i++)
    {
        for(int j=0;j<_my_image.width();j++)
        {
            QColor c = QColor::fromRgb (_my_image.pixel(j,i));
            double red = c.red();
            double blue = c.blue();
            double green = c.green();

            gray_value = (int)((red + blue + green)/3);
            clr_value1 =  qRgb(gray_value,gray_value,gray_value);
            _my_image.setPixel(j , i, clr_value1);

        }
    }
    QPixmap pix2;
    pix2.convertFromImage(_my_image ,0 );
    ui->label->setPixmap(pix2);
}
