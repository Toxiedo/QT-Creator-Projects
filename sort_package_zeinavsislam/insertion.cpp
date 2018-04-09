#include "insertion.h"
#include "ui_insertion.h"


int arr [20] =  {19,18,17,16,15,14,13,12,11,10,0,1,2,3,4,5,9,8,7,6};

insertion::insertion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::insertion)
{
    ui->setupUi(this);

    for(int i=0;i<20;i++)
    {
        //QString temp = "";
        ui->listWidget->addItem(QString::number(arr[i]));
    }

}

insertion::~insertion()
{
    delete ui;
}

void insertion::on_pushButton_3_clicked()
{
    QCoreApplication::exit(0);
}

void insertion::on_pushButton_2_clicked()
{
    MainWindow *Main_win;
    Main_win = new MainWindow();
    Main_win->show();
    this->hide();
}

void insertion::on_pushButton_clicked()
{
    int *a;
    a=insertion_sort_class::sort(arr , 20);
    for(int i=0;i<20;i++)
    {
        ui->listWidget_2->addItem(QString::number(a[i]));
    }

}
