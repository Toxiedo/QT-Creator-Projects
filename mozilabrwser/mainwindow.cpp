#include "mainwindow.h"
#include "ui_mainwindow.h"


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

void MainWindow::on_pushButton_clicked()
{
    //ui->webView->back();
}

void MainWindow::on_pushButton_2_clicked()
{
    //ui->webView->forward();
}

void MainWindow::on_pushButton_3_clicked()
{
    //ui->webView->reload();
}

void MainWindow::on_pushButton_4_clicked()
{
    try
    {
            QUrl testsite ;
            testsite.setUrl( "http://" + ui->lineEdit->text());
            ui->webView->load(testsite);
    }
    catch(std::exception &e)
    {

    }
}

void MainWindow::on_lineEdit_returnPressed()
{
    on_pushButton_4_clicked();
}
