#ifndef BUBBLE_H
#define BUBBLE_H

#include <QWidget>
#include <mainwindow.h>
#include <bubble_sort_class.h>
namespace Ui {
    class Bubble;
}

class Bubble : public QWidget
{
    Q_OBJECT

public:
    explicit Bubble(QWidget *parent = 0);
    ~Bubble();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Bubble *ui;
};

#endif // BUBBLE_H
