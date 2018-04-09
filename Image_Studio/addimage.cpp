#include "addimage.h"
#include "ui_addimage.h"

Addimage::Addimage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Addimage)
{
    ui->setupUi(this);
}

Addimage::~Addimage()
{
    delete ui;
}
