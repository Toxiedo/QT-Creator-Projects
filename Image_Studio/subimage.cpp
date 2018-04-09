#include "subimage.h"
#include "ui_subimage.h"

Subimage::Subimage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Subimage)
{
    ui->setupUi(this);
}

Subimage::~Subimage()
{
    delete ui;
}
