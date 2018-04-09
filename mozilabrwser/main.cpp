#include "mainwindow.h"
#include <QApplication>
#include <QtWebKit/QtWebKit>
#include <QtWebKitWidgets/qwebview.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}
