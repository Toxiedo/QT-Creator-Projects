#include "bubble.h"
#include "ui_bubble.h"

int arr1 [20] =  {19,18,17,16,15,14,13,12,11,10,0,1,2,3,4,5,9,8,7,6};


Bubble::Bubble(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Bubble)
{
    ui->setupUi(this);
    for(int i=0;i<20;i++)
    {
        //QString temp = "";
        ui->listWidget->addItem(QString::number(arr1[i]));
    }
}

Bubble::~Bubble()
{
    delete ui;
}

void Bubble::on_pushButton_3_clicked()
{
    QCoreApplication::exit(0);
}

void Bubble::on_pushButton_2_clicked()
{
    MainWindow *M_W;
    M_W = new MainWindow();
    M_W->show();
    this->hide();
}

void Bubble::on_pushButton_clicked()
{
    int *new_arr;
    new_arr=Bubble_Sort_Class::sort(arr1 , 20);
    for(int i=0;i<20;i++)
    {

        ui->listWidget_2->addItem(QString::number(new_arr[i]));
    }
}
