#include "addform.h"
#include "ui_addform.h"
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

addform::addform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addform)
{
    ui->setupUi(this);
}

void addform::setimage(QImage img)
{
    addform::_my_img = img;
    QPixmap pix2;
    pix2.convertFromImage(_my_img ,0 );
    ui->label->setPixmap(pix2);
}

addform::~addform()
{
    delete ui;
}

QImage img_first22;

void addform::on_pushButton_clicked()
{
    //time = new QTimer(this);
    //time->start(1000);
    QTime mytime;
    mytime.start();
        //QString bright_value_textfield = new QString();
    //bright_value_textfield = ui->textEdit->QTextEdit::toPlainText();
    //QString fkndsfnf ="dlnfdksnl";
    //int bright_value = bright_value_textfield::toInt();
   // img_first = new QImage(_my_img.width() , _my_img.height() , QByteArray *format);
    //QImage imagee = new QImage(2000,2000,)
    QString bright_value_textfield = ui->lineEdit->text();
    int bright =bright_value_textfield.toDouble(0);
    int bright_value = bright ;
    QRgb value;
    for(int i =0; i<_my_img.height() ; i++)
    {
        for(int j=0;j<_my_img.width();j++)
        {
            QColor c = QColor::fromRgb (_my_img.pixel(j,i));
            double red = c.red();
            double blue = c.blue();
            double green = c.green();
            red = red + bright_value;
            blue = blue + bright_value;
            green = green + bright_value;

            if(red > 255)
            {
               red = 255;
            }
            if(blue > 255)
            {
               blue = 255;
            }
            if(green > 255)
            {
               green = 255;
            }
            value =  qRgb(red , green , blue);
            _my_img.setPixel(j , i, value);

        }
    }
    img_first22 = _my_img;
    QPixmap pix2;
    pix2.convertFromImage(img_first22 ,0 );
    ui->label->setPixmap(pix2);
    int nnn = mytime.elapsed();
    QString mytimee = QString::number(nnn);
    ui->label_3->setText(mytimee);
    //time->stop();

}

void addform::on_horizontalSlider_valueChanged(int value)
{
    time = new QTimer(this);
    time->start();
        //QString bright_value_textfield = new QString();
    //bright_value_textfield = ui->textEdit->QTextEdit::toPlainText();
    //QString fkndsfnf ="dlnfdksnl";
    //int bright_value = bright_value_textfield::toInt();
   // img_first = new QImage(_my_img.width() , _my_img.height() , QByteArray *format);
    int bright_value = value/10;
    QRgb value1;
    for(int i =0; i<_my_img.height() ; i++)
    {
        for(int j=0;j<_my_img.width();j++)
        {
            QColor c = QColor::fromRgb (_my_img.pixel(j,i));
            double red = c.red();
            double blue = c.blue();
            double green = c.green();
            red = red + bright_value;
            blue = blue + bright_value;
            green = green + bright_value;

            if(red > 255)
            {
               red = 255;
            }
            if(blue > 255)
            {
               blue = 255;
            }
            if(green > 255)
            {
               green = 255;
            }
            value1 =  qRgb(red , green , blue);
            _my_img.setPixel(j , i, value1);

        }
    }
    img_first22 = _my_img;
    QPixmap pix2;
    pix2.convertFromImage(img_first22 ,0 );
    ui->label->setPixmap(pix2);
}
