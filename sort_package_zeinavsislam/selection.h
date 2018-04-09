#ifndef SELECTION_H
#define SELECTION_H

#include <QWidget>
#include <basic_methods_class.h>
#include <mainwindow.h>
#include <selection_sort_class.h>

namespace Ui {
    class Selection;
}

class Selection : public QWidget
{
    Q_OBJECT

public:
    explicit Selection(QWidget *parent = 0);
    ~Selection();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::Selection *ui;
};

#endif // SELECTION_H
