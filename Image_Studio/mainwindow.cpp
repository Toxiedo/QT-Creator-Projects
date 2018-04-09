#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addform.h"
#include "mean.h"
#include <QtCore>
#include <QtGui>
#include <QGraphicsAnchorLayout>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsWidget>
#include "qimage.h"
#include <QFileDialog>
#include <QPixmap>
#include "qpixmap.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//*************************

QString fileName;
QImage img;

//*************************************

void MainWindow::on_actionAdd_triggered()
{
    addformm = new addform();
    addformm->setimage(_main_image);
    addformm->show();
    MainWindow::hide();
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::exit(1);
}

void MainWindow::on_actionOPen_triggered()
{
    fileName = QFileDialog::getOpenFileName(this,
        tr("Open Image"), "/elhandasya/Desktop", tr("Image Files (*.png *.jpg *.bmp)"));
    QPixmap pix(fileName);
    //ui->label->
    ui->label->setStyleSheet(fileName);
    //ui->label_3->setPixmap(&pix);
    ui->label->setPixmap(pix);
    img = QImage(fileName);
    _main_image = img;
    //ui->label->resize(800,1000);


}

void MainWindow::on_actionSub_triggered()
{
    contrastform = new contrast();
    contrastform->setimage(_main_image);
    contrastform->show();
    MainWindow::hide();
}

void MainWindow::setimage(QImage import_image)
{
    MainWindow::_main_image = import_image;
    QPixmap _latestimage;
   // ui->label->resize(_main_image.width(),_main_image.height());
    _latestimage.convertFromImage(_main_image,0);
    ui->label->setPixmap(_latestimage);
}

void MainWindow::on_actionGray_triggered()
{
    _my_gray = new Gray();
    _my_gray->setimage(_main_image);
    _my_gray->show();
    MainWindow::hide();
}

void MainWindow::on_actionGamma_triggered()
{
    _my_gamma = new Gamma();
    _my_gamma->setimage(_main_image);
    _my_gamma->show();
    MainWindow::hide();
}

void MainWindow::on_actionResize_triggered()
{
    _my_resize = new Bilinear_resize();
    _my_resize->setimage(_main_image);
    _my_resize->show();
    MainWindow::hide();
}

void MainWindow::on_actionMean_triggered()
{
    mean_form = new mean();
    mean_form->show();
    MainWindow::hide();
}
