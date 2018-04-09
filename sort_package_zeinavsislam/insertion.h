#ifndef INSERTION_H
#define INSERTION_H
#include <mainwindow.h>
#include <QWidget>
#include <insertion_sort_class.h>


namespace Ui {
    class insertion;
}

//class MainWindow;

class insertion : public QWidget
{
    Q_OBJECT
    //class MainWindow;
public:
    explicit insertion(QWidget *parent = 0);
    ~insertion();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::insertion *ui;
};

#endif // INSERTION_H
