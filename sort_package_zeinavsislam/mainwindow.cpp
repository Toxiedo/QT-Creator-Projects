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

void MainWindow::on_actionExit_triggered()
{
    QCoreApplication::exit(1);
}

void MainWindow::on_actionInsertion_Sort_triggered()
{
    insertion * insert_sort;
    insert_sort = new insertion();
    insert_sort->show();
    this->hide();
}

void MainWindow::on_actionBubble_Sort_triggered()
{
    Bubble * bub;
    bub = new Bubble(0);
    bub->show();
    this->hide();
}

void MainWindow::on_actionSelection_Sort_triggered()
{
    Selection * sel ;
    sel = new Selection(0);
    sel->show();
    this->hide();
}
