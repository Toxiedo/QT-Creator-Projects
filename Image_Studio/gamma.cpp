#include "gamma.h"
#include "ui_gamma.h"
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

Gamma::Gamma(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Gamma)
{
    ui->setupUi(this);
}

//*********************************************************************

int old_max_redgamma = 0 , old_min_redgamma = 255 , old_max_greengamma= 0 , old_min_greengamma= 255 , old_max_bluegamma = 0 , old_min_bluegamma= 255 ;


//**********************************************************************


Gamma::~Gamma()
{
    delete ui;
}
void Gamma::setimage(QImage img)
{
    Gamma::_my_image_gammaahmedsalah = img;
    QRgb Clr_value;
    for(int i =0; i<_my_image_gammaahmedsalah.height() ; i++)
    {
        for(int j=0;j<_my_image_gammaahmedsalah.width();j++)
        {
            QColor c = QColor::fromRgb (_my_image_gammaahmedsalah.pixel(j,i));
            double o = c.red();
            double q = c.blue();
            double p = c.green();
            if (old_max_redgamma < o)
                                    {
                                        old_max_redgamma = o;
                                    }
                                    if (old_min_redgamma > o)
                                    {
                                        old_min_redgamma = o;
                                    }
                                    if (old_max_bluegamma < q)
                                    {
                                        old_max_bluegamma = q;
                                    }
                                    if (old_min_bluegamma > q)
                                    {
                                        old_min_bluegamma = q;
                                    }
                                    if (old_max_greengamma < p)
                                    {
                                        old_max_greengamma = p;
                                    }
                                    if (old_min_greengamma > p)
                                    {
                                        old_min_greengamma = p;
                                    }
            Clr_value =  qRgb(c.red() , c.green() , c.blue());
            //_my_image_gamma.setPixel(j , i, Clr_value);
        }
    }
    QPixmap pix2;
    pix2.convertFromImage(_my_image_gammaahmedsalah ,0 );
    ui->label->setPixmap(pix2);
    //ui->horizontalSlider->setMaximumSize(_my_image.width() , 10);
}


void Gamma::on_pushButton_clicked()
{
    mnwindow = new MainWindow;
    mnwindow->setimage(_my_image_gammaahmedsalah);
    mnwindow->show();
    Gamma::hide();
}

void Gamma::on_verticalSlider_valueChanged(int value)
{
    int new_min_red1 = qPow(old_min_redgamma , value);
    int new_min_blue1 = qPow(old_min_bluegamma , value);
    int new_min_green1 = qPow(old_min_greengamma , value);

    int new_max_red1 = qPow(old_max_redgamma , value);
    int new_max_blue1 = qPow(old_max_bluegamma , value);
    int new_max_green1 = qPow(old_max_greengamma , value);
    QRgb Clr_value;
    for(int i =0; i<_my_image_gammaahmedsalah.height() ; i++)
    {
        for(int j=0;j<_my_image_gammaahmedsalah.width();j++)
        {
            QColor c = QColor::fromRgb (_my_image_gammaahmedsalah.pixel(j,i));
            double o = qPow(c.red(),value);
            double q = qPow(c.blue(),value);
            double p = qPow(c.green(),value);

            double valred = ((double)((double)(o - new_min_red1)/(double)(new_max_red1-new_min_red1)))*255;
            double valblue = ((double)((double)(q-new_min_blue1)/(double)(new_max_blue1 - new_min_blue1))) * 255;
            double valgreen = ((double)((double)(p - new_min_green1)/(double)(new_max_green1 - new_min_green1))) * 255;

            if (valred > 255)
            {
                valred = 255;
            }
            else if (valred < 0)
            {
                valred = 0;
            }
            if (valblue > 255)
            {
                valblue = 255;
            }
            else if (valblue < 0)
            {
                valblue = 0;
            }
            if (valgreen > 255)
            {
                valgreen = 255;
            }
            else if (valgreen < 0)
            {
                valgreen = 0;
            }

            Clr_value =  qRgb(valred , valgreen , valblue);
            _my_image_gammaahmedsalah.setPixel(j , i, Clr_value);

        }
    }
    QPixmap pix2;
    pix2.convertFromImage(_my_image_gammaahmedsalah ,0 );
    ui->label->setPixmap(pix2);

}

void Gamma::on_pushButton_2_clicked()
{
    QString new_max = ui->lineEdit->text();
    double value =new_max.toDouble(0);
    int new_min_red1 = qPow(old_min_redgamma , value);
    int new_min_blue1 = qPow(old_min_bluegamma , value);
    int new_min_green1 = qPow(old_min_greengamma , value);

    int new_max_red1 = qPow(old_max_redgamma , value);
    int new_max_blue1 = qPow(old_max_bluegamma , value);
    int new_max_green1 = qPow(old_max_greengamma , value);
    QRgb Clr_value;
    for(int i =0; i<_my_image_gammaahmedsalah.height()-1 ; i++)
    {
        for(int j=0;j<_my_image_gammaahmedsalah.width()-1;j++)
        {
            QColor c = QColor::fromRgb (_my_image_gammaahmedsalah.pixel(j,i));
            double o = qPow(c.red(),value);
            double q = qPow(c.blue(),value);
            double p = qPow(c.green(),value);

            double valred = (((double)((double)(o - new_min_red1)/(double)(new_max_red1-new_min_red1)))*255);
            double valblue = (((double)((double)(q-new_min_blue1)/(double)(new_max_blue1 - new_min_blue1))) * 255);
            double valgreen = (((double)((double)(p - new_min_green1)/(double)(new_max_green1 - new_min_green1))) * 255);

            if (valred > 255)
            {
                valred = 255;
            }
            else if (valred < 0)
            {
                valred = 0;
            }
            if (valblue > 255)
            {
                valblue = 255;
            }
            else if (valblue < 0)
            {
                valblue = 0;
            }
            if (valgreen > 255)
            {
                valgreen = 255;
            }
            else if (valgreen < 0)
            {
                valgreen = 0;
            }

            Clr_value =  qRgb((int)valred , (int)valgreen ,(int) valblue);
            _my_image_gammaahmedsalah.setPixel(j , i, Clr_value);
        }
    }
    QPixmap pix2;
    pix2.convertFromImage(_my_image_gammaahmedsalah ,0 );
    ui->label->setPixmap(pix2);
}
