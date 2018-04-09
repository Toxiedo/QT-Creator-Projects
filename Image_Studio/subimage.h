#ifndef SUBIMAGE_H
#define SUBIMAGE_H

#include <QWidget>

namespace Ui {
    class Subimage;
}

class Subimage : public QWidget
{
    Q_OBJECT

public:
    explicit Subimage(QWidget *parent = 0);
    ~Subimage();

private:
    Ui::Subimage *ui;
};

#endif // SUBIMAGE_H
