#include "bilinear_resize.h"
#include "ui_bilinear_resize.h"
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



struct my_color
{
int Red;
int Green;
int Blue;
};

Bilinear_resize::Bilinear_resize(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Bilinear_resize)
{
    ui->setupUi(this);
}

Bilinear_resize::~Bilinear_resize()
{
    delete ui;
}

void Bilinear_resize::on_pushButton_clicked()
{
    mnwindow = new MainWindow;
    mnwindow->setimage(resized_image);
    mnwindow->show();
    Bilinear_resize::hide();
}

void Bilinear_resize::setimage(QImage img)
{
    Bilinear_resize::_my_image_gamma = img;
    QPixmap pix2;
    pix2.convertFromImage(_my_image_gamma ,0 );
    ui->label->setPixmap(pix2);
}

void Bilinear_resize::on_verticalSlider_valueChanged(int value)
{

    int n_width =100;
    int n_hieght = 100;

    Bilinear_resize::resized_image.operator =( *  new QImage(n_hieght,n_width, QImage::Format_RGB16));
    Bilinear_resize::resized_image.fill(0);
    float w_ratio = (float)_my_image_gamma.width() / n_width;
    float h_ratio = (float)_my_image_gamma.height() / n_hieght;

    int X1, X2, Y1, Y2;
    //my_color P1, P2, P3, P4;
    float OldX, OldY, NewX, NewY;

    float XFraction, YFraction;
    float Z1, Z2;


    QColor P1;
    QColor P2;
    QColor P3;
    QColor P4;

QVector <QRgb> myvalues;
    QColor newpixel ;

    int xpp = 0;
      for (int i = 0; i < n_hieght; i++)
          {
            NewY = i;
           for (int j = 0; j < n_width; j++)
           {

               NewX = j;
               OldX = NewX * w_ratio;
               OldY = NewY * h_ratio;

               X1 = (int)qFloor(OldX); X2 = X1 + 1;
               Y1 = (int)qFloor(OldY); Y2 = Y1 + 1;

               if (X2 == _my_image_gamma.width())
                   X2 -= 1;
               if (Y2 == _my_image_gamma.height())
                   Y2 -= 1;
               if (X1 == _my_image_gamma.width())
                   X1 -= 1;
               if (Y1 == _my_image_gamma.height())
                   Y1 -= 1;
                P1 = QColor::fromRgb (_my_image_gamma.pixel(Y1 , X1));
                P2 = QColor::fromRgb (_my_image_gamma.pixel(Y1 , X2));
                P3 = QColor::fromRgb (_my_image_gamma.pixel(Y2 , X1));
                P4 = QColor::fromRgb (_my_image_gamma.pixel(Y2 , X2));

               XFraction = OldX - X1;
               YFraction = OldY - Y1;
               Z1 = (float)(P1.red() * (1 - XFraction) + P2.red() * XFraction);
               Z2 = (float)(P3.red() * (1 - XFraction) + P4.red() * XFraction);
               float Z12 = (Z1 * (1 - YFraction) + Z2 * YFraction);
               int temp1 = (int)(Z12 * 10) % 10;
               if (temp1 > 5)
                   newpixel.setRed((int)qCeil(Z12));
               else
                   newpixel.setRed((int)qFloor(Z12));

                    Z1 = (float)((P1.green() * (1 - XFraction)) + P2.green() * XFraction);
                    Z2 = (float)((P3.green() * (1 - XFraction)) + P4.green() * XFraction);
                    float Z11 = ((Z1 * (1 - YFraction)) + Z2 * YFraction);
                    int temp2 = (int)(Z11 * 10) % 10;
                    if (temp2 > 5)
                        newpixel.setGreen((int)qCeil(Z11));
                    else
                        newpixel.setGreen((int)qFloor(Z11));


                    Z1 = (float)(P1.blue() * (1 - XFraction) + P2.blue() * XFraction);
                    Z2 = (float)(P3.blue() * (1 - XFraction) + P4.blue() * XFraction);
                    float Z13 = (Z1 * (1 - YFraction) + Z2 * YFraction);
                    int temp3 = (int)(Z13 * 10) % 10;
                    if (temp3 > 5)
                    newpixel.setBlue((int)qCeil(Z13));
                    else
                    newpixel.setBlue((int)qFloor(Z13));

                    QRgb new_value;
                    new_value = qRgb(newpixel.red() , newpixel.green() , newpixel.blue());
                    //QRgb nnn = qRgb(0,0,0);
                    Bilinear_resize::resized_image.setPixel(j,i,new_value);
                    myvalues.insert(xpp , new_value);
                                     xpp++;
            }

        }

            QPixmap pix2;
            //QImage _play_img = new QImage();
            //_play_img::scaled( n_width , n_hieght);
            //_play_img = resized_image;

            ui->label->resize(n_width , n_hieght);

            pix2.convertFromImage(Bilinear_resize::resized_image ,Qt::AutoColor );
            QMatrix rm;
            rm.rotate(90);
            pix2 = pix2.transformed(rm);
            Bilinear_resize::resized_image = pix2.toImage();

            _my_image_gamma = resized_image;
            ui->label->setPixmap(pix2);

}

void Bilinear_resize::on_horizontalSlider_valueChanged(int value)
{
    int n_width =100;
    int n_hieght = 100;
    //QImage * resized_image = new QImage(n_width,n_hieght, QImage::Format_RGB888);
    //resized_image->fill(QColor(Qt::white).rgb());

    float w_ratio = (float)_my_image_gamma.width() / n_width;
    float h_ratio = (float)_my_image_gamma.height() / n_hieght;

    int X1, X2, Y1, Y2;
    //my_color P1, P2, P3, P4;
    float OldX, OldY, NewX, NewY;

    float XFraction, YFraction;
    float Z1, Z2;
    //QPainter painter(&_my_image_gamma);
    //QRgb  my_rgb[n_width,n_hieght] ;// = new QRgb;
    QVector <QRgb> myvalues;
    QColor newpixel ;
    int my_x = 0;
            for (int i = 0; i < n_hieght; i++)
                        {
                            NewY = i;
                            for (int j = 0; j < n_width; j++)
                            {

                                NewX = j;
                                OldX = NewX * w_ratio;
                                OldY = NewY * h_ratio;

                                X1 = (int)qFloor(OldX); X2 = X1 + 1;
                                Y1 = (int)qFloor(OldY); Y2 = Y1 + 1;

                                if (X2 == _my_image_gamma.width())
                                    X2 -= 1;
                                if (Y2 == _my_image_gamma.height())
                                    Y2 -= 1;
                                if (X1 == _my_image_gamma.width())
                                    X1 -= 1;
                                if (Y1 == _my_image_gamma.height())
                                    Y1 -= 1;
                                QColor P1 = QColor::fromRgb (_my_image_gamma.pixel(Y1 , X1));
                                QColor P2 = QColor::fromRgb (_my_image_gamma.pixel(Y1 , X2));
                                QColor P3 = QColor::fromRgb (_my_image_gamma.pixel(Y2 , X1));
                                QColor P4 = QColor::fromRgb (_my_image_gamma.pixel(Y2 , X2));

                                XFraction = OldX - X1;
                                YFraction = OldY - Y1;
                                Z1 = (float)(P1.red() * (1 - XFraction) + P2.red() * XFraction);
                                Z2 = (float)(P3.red() * (1 - XFraction) + P4.red() * XFraction);
                                float Z12 = (Z1 * (1 - YFraction) + Z2 * YFraction);
                                int temp1 = (int)(Z12 * 10) % 10;
                                if (temp1 > 5)
                                    newpixel.setRed((int)qCeil(Z12));
                                else
                                    newpixel.setRed((int)qFloor(Z12));

                                     Z1 = (float)(P1.green() * (1 - XFraction) + P2.green() * XFraction);
                                     Z2 = (float)(P3.green() * (1 - XFraction) + P4.green() * XFraction);
                                     float Z11 = (Z1 * (1 - YFraction) + Z2 * YFraction);
                                     int temp2 = (int)(Z11 * 10) % 10;
                                     if (temp2 > 5)
                                         newpixel.setGreen((int)qCeil(Z11));
                                     else
                                         newpixel.setGreen((int)qFloor(Z11));


                                     Z1 = (float)(P1.blue() * (1 - XFraction) + P2.blue() * XFraction);
                                     Z2 = (float)(P3.blue() * (1 - XFraction) + P4.blue() * XFraction);
                                     float Z13 = (Z1 * (1 - YFraction) + Z2 * YFraction);
                                     int temp3 = (int)(Z13 * 10) % 10;
                                     if (temp3 > 5)
                                     newpixel.setBlue((int)qCeil(Z13));
                                     else
                                     newpixel.setBlue((int)qFloor(Z13));
                                     //resized_image->fill(8);
                                     //resized_image->fill(newpixel.green());
                                     //resized_image->fill(newpixel.blue());
                                     QRgb new_value;
                                     new_value = qRgb(newpixel.red() , newpixel.green() , newpixel.blue());
                                     myvalues.insert(my_x , new_value);
                                     my_x++;
                                     //resized_image->setPixel(j,i,new_value);
            }
        }
            /*
            QPixmap pix2;
            //QImage _play_img = new QImage();
            //_play_img::scaled( n_width , n_hieght);
            //_play_img = resized_image;
            ui->label->resize(n_width , n_hieght);
            QImage resized_image = new QImage(myvalues , n_width , n_hieght , QImage::Format_ARGB32);
            pix2.convertFromImage(resized_image ,Qt::AutoColor );
            QMatrix rm;
            rm.rotate(90);
            pix2 = pix2.transformed(rm);
            resized_image = pix2.toImage();
            QImage immmg ;
            immmg = pix2.toImage();
           // immmg.invertPixels(*resized_image::InvertMode);
            pix2.convertFromImage(immmg ,Qt::AutoColor );
            _my_image_gamma = immmg;
            ui->label->setPixmap(pix2);
            */
}

void Bilinear_resize::on_pushButton_2_clicked()
{
    QString new_max = ui->lineEdit->text();
    int bright1 =new_max.toDouble(0);
    QString new_min = ui->lineEdit_2->text();
    int bright12 =new_min.toDouble(0);
    int n_width =bright12;
    int n_hieght = bright1;

    Bilinear_resize::resized_image.operator =( *  new QImage(n_hieght,n_width, QImage::Format_RGB16));
    Bilinear_resize::resized_image.fill(0);
    float w_ratio = (float)_my_image_gamma.width() / n_width;
    float h_ratio = (float)_my_image_gamma.height() / n_hieght;

    int X1, X2, Y1, Y2;
    //my_color P1, P2, P3, P4;
    float OldX, OldY, NewX, NewY;

    float XFraction, YFraction;
    float Z1, Z2;


    QColor P1;
    QColor P2;
    QColor P3;
    QColor P4;

QVector <QRgb> myvalues;
    QColor newpixel ;

    int xpp = 0;
      for (int i = 0; i < n_hieght; i++)
          {
            NewY = i;
           for (int j = 0; j < n_width  ; j++)
           {

               NewX = j;
               OldX = NewX * w_ratio;
               OldY = NewY * h_ratio;

               X1 = (int)qFloor(OldX); X2 = X1 + 1;
               Y1 = (int)qFloor(OldY); Y2 = Y1 + 1;

               if (X2 == _my_image_gamma.width())
                   X2 -= 1;
               if (Y2 == _my_image_gamma.height())
                   Y2 -= 1;
               if (X1 == _my_image_gamma.width())
                   X1 -= 1;
               if (Y1 == _my_image_gamma.height())
                   Y1 -= 1;
                P1 = QColor::fromRgb (_my_image_gamma.pixel( X1 , Y1));
                P2 = QColor::fromRgb (_my_image_gamma.pixel( X2 , Y1 ));
                P3 = QColor::fromRgb (_my_image_gamma.pixel( X1 , Y2 ));
                P4 = QColor::fromRgb (_my_image_gamma.pixel(  X2 , Y2));

               XFraction = OldX - X1;
               YFraction = OldY - Y1;
               Z1 = (float)(P1.red() * (1 - XFraction) + P2.red() * XFraction);
               Z2 = (float)(P3.red() * (1 - XFraction) + P4.red() * XFraction);
               float Z12 = (Z1 * (1 - YFraction) + Z2 * YFraction);
               int temp1 = (int)(Z12 * 10) % 10;
               if (temp1 > 5)
                   newpixel.setRed((int)qCeil(Z12));
               else
                   newpixel.setRed((int)qFloor(Z12));

                    Z1 = (float)((P1.green() * (1 - XFraction)) + P2.green() * XFraction);
                    Z2 = (float)((P3.green() * (1 - XFraction)) + P4.green() * XFraction);
                    float Z11 = ((Z1 * (1 - YFraction)) + Z2 * YFraction);
                    int temp2 = (int)(Z11 * 10) % 10;
                    if (temp2 > 5)
                        newpixel.setGreen((int)qCeil(Z11));
                    else
                        newpixel.setGreen((int)qFloor(Z11));


                    Z1 = (float)(P1.blue() * (1 - XFraction) + P2.blue() * XFraction);
                    Z2 = (float)(P3.blue() * (1 - XFraction) + P4.blue() * XFraction);
                    float Z13 = (Z1 * (1 - YFraction) + Z2 * YFraction);
                    int temp3 = (int)(Z13 * 10) % 10;
                    if (temp3 > 5)
                    newpixel.setBlue((int)qCeil(Z13));
                    else
                    newpixel.setBlue((int)qFloor(Z13));

                    QRgb new_value;
                    new_value = qRgb(newpixel.red() , newpixel.green() , newpixel.blue());
                    //QRgb nnn = qRgb(0,0,0);
                    Bilinear_resize::resized_image.setPixel(j,i,new_value);
                    myvalues.insert(xpp , new_value);
                                     xpp++;
            }

        }

            QPixmap pix2;
            //QImage _play_img = new QImage();
            //_play_img::scaled( n_width , n_hieght);
            //_play_img = resized_image;

            ui->label->resize(n_width , n_hieght);

            pix2.convertFromImage(Bilinear_resize::resized_image ,Qt::AutoColor );
            //QMatrix rm;
            //rm.rotate(90);
            //pix2 = pix2.transformed(rm);
            //Bilinear_resize::resized_image = pix2.toImage();

            _my_image_gamma = resized_image;
            ui->label->setPixmap(pix2);

}
