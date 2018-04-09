#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <addform.h>
#include <QMainWindow>
#include <contrast.h>
#include <gray.h>
#include <gamma.h>
#include <mean.h>
#include <bilinear_resize.h>
#include <QFileDialog>
#include <QPixmap>
#include "qpixmap.h"

namespace Ui {
    class MainWindow;
}

class mean;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void setimage(QImage img);
    ~MainWindow();

private slots:
    void on_actionAdd_triggered();

    void on_actionOPen_triggered();

    void on_actionSub_triggered();

    void on_actionGray_triggered();

    void on_actionGamma_triggered();

    void on_actionResize_triggered();

    void on_actionMean_triggered();

    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
    //*****************go forms************************
    addform *addformm;
    contrast *contrastform;
    Gray *_my_gray;
    Gamma *_my_gamma;
    Bilinear_resize *_my_resize;
    mean * mean_form;
    //***************************************************
    QImage _main_image;
};

#endif // MAINWINDOW_H


