#include "contrast.h"
#include "ui_contrast.h"
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

contrast::contrast(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::contrast)
{
    ui->setupUi(this);
}

//***********************************************************************

int old_max_red = 0, old_min_red = 255, old_max_green = 0, old_min_green = 255, old_max_blue = 0, old_min_blue = 255,
    new_max_red , new_min_red , new_max_green , new_min_green , new_max_blue , new_min_blue ;

//QImage img_first22;


//********************************************************************************************

void contrast::setimage(QImage img)
{
    contrast::_my_img = img;
    QRgb value;
    for(int i =0; i<_my_img.height() ; i++)
    {
        for(int j=0;j<_my_img.width();j++)
        {
            QColor c = QColor::fromRgb (_my_img.pixel(j,i));
            double o = c.red();
            double q = c.blue();
            double p = c.green();
            if (old_max_red < o)
                                    {
                                        old_max_red = o;
                                    }
                                    if (old_min_red > o)
                                    {
                                        old_min_red = o;
                                    }
                                    if (old_max_blue < q)
                                    {
                                        old_max_blue = q;
                                    }
                                    if (old_min_blue > q)
                                    {
                                        old_min_blue = q;
                                    }
                                    if (old_max_green < p)
                                    {
                                        old_max_green = p;
                                    }
                                    if (old_min_green > p)
                                    {
                                        old_min_green = p;
                                    }
            value =  qRgb(c.red() , c.green() , c.blue());
            _my_img.setPixel(j , i, value);
        }
    }
    QPixmap pix2;
    _play_img = _my_img;
    pix2.convertFromImage(_my_img ,0 );
    ui->label->setPixmap(pix2);
}

contrast::~contrast()
{
    delete ui;
}

void contrast::on_verticalSlider_valueChanged(int value)
{
    new_max_red = new_max_green = new_max_blue = 250 - value ;
    new_min_red = new_min_green = new_min_blue =150 - value;
    QRgb value1;
    for(int i =0; i<_my_img.height() ; i++)
    {
        for(int j=0;j<_my_img.width();j++)
        {
            QColor c = QColor::fromRgb (_my_img.pixel(j,i));
            double red = c.red();
            double blue = c.blue();
            double green = c.green();

            int new_val_red = (int)((((red - old_min_red) / (double)(old_max_red - old_min_red)) * (double)(new_max_red - new_min_red)) + new_min_red);

                                int new_val_blue = (int)((((blue - old_min_blue) / (double)(old_max_blue - old_min_blue)) * (double)(new_max_blue - new_min_blue)) + new_min_blue);

                                int new_val_green = (int)((((green - old_min_green) / (double)(old_max_green - old_min_green)) * (double)(new_max_green - new_min_green)) + new_min_green);

                                if (new_val_red > 255)
                                    new_val_red = 255;
                                if (new_val_red < 0)
                                    new_val_red = 0;
                                if (new_val_green > 255)
                                    new_val_green = 255;
                                if (new_val_blue > 255)
                                    new_val_blue = 255;
                                if (new_val_green < 0)
                                    new_val_green = 0;
                                if (new_val_blue < 0)
                                    new_val_blue = 0;

            value1 =  qRgb(new_val_red , new_val_green , new_val_blue);
            _play_img.setPixel(j , i, value1);

        }
    }
    //img_first22 = _my_img;
    QPixmap pix2;
    pix2.convertFromImage(_play_img ,0 );
    ui->label->setPixmap(pix2);
}

void contrast::on_horizontalSlider_valueChanged(int value)
{
    new_min_red = new_min_green = new_min_blue =  200 - value ;
        new_max_red = new_max_green = new_max_blue = 100 -  value ;
    QRgb value1;
    for(int i =0; i<_my_img.height() ; i++)
    {
        for(int j=0;j<_my_img.width();j++)
        {
            QColor c = QColor::fromRgb (_my_img.pixel(j,i));
            double red = c.red();
            double blue = c.blue();
            double green = c.green();

            int new_val_red = (int)((((red - old_min_red) / (double)(old_max_red - old_min_red)) * (double)(new_max_red - new_min_red)) + new_min_red);

                                int new_val_blue = (int)((((blue - old_min_blue) / (double)(old_max_blue - old_min_blue)) * (double)(new_max_blue - new_min_blue)) + new_min_blue);

                                int new_val_green = (int)((((green - old_min_green) / (double)(old_max_green - old_min_green)) * (double)(new_max_green - new_min_green)) + new_min_green);

                                if (new_val_red > 255)
                                    new_val_red = 255;
                                if (new_val_red < 0)
                                    new_val_red = 0;
                                if (new_val_green > 255)
                                    new_val_green = 255;
                                if (new_val_blue > 255)
                                    new_val_blue = 255;
                                if (new_val_green < 0)
                                    new_val_green = 0;
                                if (new_val_blue < 0)
                                    new_val_blue = 0;

            value1 =  qRgb(new_val_red , new_val_green , new_val_blue);
            _play_img.setPixel(j , i, value1);

        }
    }
    //img_first22 = _my_img;
    QPixmap pix2;
    pix2.convertFromImage(_play_img ,0 );
    ui->label->setPixmap(pix2);
}

void contrast::on_pushButton_clicked()
{
    mnwindow = new MainWindow;
    mnwindow->setimage(_play_img);
    mnwindow->show();
    contrast::hide();
}

void contrast::on_pushButton_2_clicked()
{
    QString new_max = ui->lineEdit->text();
    int bright1 =new_max.toDouble(0);
    QString new_min = ui->lineEdit_2->text();
    int bright12 =new_min.toDouble(0);

    new_min_red = new_min_green = new_min_blue =  bright12 ;
        new_max_red = new_max_green = new_max_blue = bright1 ;
    QRgb value1;
    for(int i =0; i<_my_img.height() ; i++)
    {
        for(int j=0;j<_my_img.width();j++)
        {
            QColor c = QColor::fromRgb (_my_img.pixel(j,i));
            double red = c.red();
            double blue = c.blue();
            double green = c.green();

            int new_val_red = (int)((((red - old_min_red) / (double)(old_max_red - old_min_red)) * (double)(new_max_red - new_min_red)) + new_min_red);

                                int new_val_blue = (int)((((blue - old_min_blue) / (double)(old_max_blue - old_min_blue)) * (double)(new_max_blue - new_min_blue)) + new_min_blue);

                                int new_val_green = (int)((((green - old_min_green) / (double)(old_max_green - old_min_green)) * (double)(new_max_green - new_min_green)) + new_min_green);

                                if (new_val_red > 255)
                                    new_val_red = 255;
                                if (new_val_red < 0)
                                    new_val_red = 0;
                                if (new_val_green > 255)
                                    new_val_green = 255;
                                if (new_val_blue > 255)
                                    new_val_blue = 255;
                                if (new_val_green < 0)
                                    new_val_green = 0;
                                if (new_val_blue < 0)
                                    new_val_blue = 0;

            value1 =  qRgb(new_val_red , new_val_green , new_val_blue);
            _play_img.setPixel(j , i, value1);

        }
    }
    //img_first22 = _my_img;
    QPixmap pix2;
    pix2.convertFromImage(_play_img ,0 );
    ui->label->setPixmap(pix2);
}
