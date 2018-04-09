#ifndef ADDIMAGE_H
#define ADDIMAGE_H

#include <QWidget>

namespace Ui {
    class Addimage;
}

class Addimage : public QWidget
{
    Q_OBJECT

public:
    explicit Addimage(QWidget *parent = 0);
    ~Addimage();

private:
    Ui::Addimage *ui;
};

#endif // ADDIMAGE_H
