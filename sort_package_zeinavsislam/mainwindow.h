#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <insertion.h>
#include <QtGui/QtGui>
#include <bubble.h>
#include <selection.h>


namespace Ui {
    class MainWindow;
}
//class insertion;
class MainWindow : public QMainWindow
{
    Q_OBJECT
    //class insert_sort;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionExit_triggered();

    void on_actionInsertion_Sort_triggered();

    void on_actionBubble_Sort_triggered();

    void on_actionSelection_Sort_triggered();

private:
    Ui::MainWindow *ui; 


};

#endif // MAINWINDOW_H
