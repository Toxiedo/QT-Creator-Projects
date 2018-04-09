#include "mean.h"
#include "ui_mean.h"
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
#include <my_color.h>




mean::mean(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mean)
{
    ui->setupUi(this);
}

//****************************************************



//QColor bb [,] = new QColor[3,3];
int mywidth , myheight;

//*****************************************************

void mean::setimage(QImage img)
{
    mean::_my_image_mean = img;
    QPixmap pix2;
    pix2.convertFromImage(_my_image_mean ,0 );
    ui->label->setPixmap(pix2);
}



void mean::on_pushButton_clicked()
{
    /*
    QString bright_value_textfield = ui->lineEdit->text();
    int bright =bright_value_textfield.toDouble(0);
    int bright_value = bright ;
    QRgb value;
    mywidth = _my_image_mean.width();
    myheight = _my_image_mean.height();
    //my_color image_Buffer [int,int] = new my_color[myheight,mywidth];
    for(int i =0; i<_my_image_mean.height() ; i++)
    {
        for(int j=0;j<_my_image_mean.width();j++)
        {
            QColor c = QColor::fromRgb (_my_image_mean.pixel(j,i));
            double o = c.red();
            double q = c.blue();
            double p = c.green();
            value =  qRgb(c.red() , c.green() , c.blue());
            //_my_image_mean.setPixel(j , i, value);
            image_Buffer[i,j].Red = (int)o;
            image_Buffer[i,j].Green = (int)p;
            image_Buffer[i,j].Blue = (int)q;
        }
    }
*/
}


mean::~mean()
{
    delete ui;
}
