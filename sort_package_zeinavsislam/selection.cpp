#include "selection.h"
#include "ui_selection.h"

int arr2 [20] =  {19,18,17,16,15,14,13,12,11,10,0,1,2,3,4,5,9,8,7,6};


Selection::Selection(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Selection)
{
    ui->setupUi(this);
    for(int i=0;i<20;i++)
    {
        //QString temp = "";
        ui->listWidget->addItem(QString::number(arr2[i]));
    }
}

Selection::~Selection()
{
    delete ui;
}

void Selection::on_pushButton_2_clicked()
{
    MainWindow *Main_win;
    Main_win = new MainWindow();
    Main_win->show();
    this->hide();
}

void Selection::on_pushButton_3_clicked()
{
    QCoreApplication::exit(0);
}

void Selection::on_pushButton_clicked()
{
    int *new_arr;
    new_arr=selection_Sort_class::sort(arr2 , 20);
    for(int i=0;i<20;i++)
    {

        ui->listWidget_2->addItem(QString::number(new_arr[i]));
    }
}
