/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Sep 27 21:26:49 2013
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionInsertion_Sort;
    QAction *actionBubble_Sort;
    QAction *actionSelection_Sort;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuSorting_algorithms;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionInsertion_Sort = new QAction(MainWindow);
        actionInsertion_Sort->setObjectName(QString::fromUtf8("actionInsertion_Sort"));
        actionBubble_Sort = new QAction(MainWindow);
        actionBubble_Sort->setObjectName(QString::fromUtf8("actionBubble_Sort"));
        actionSelection_Sort = new QAction(MainWindow);
        actionSelection_Sort->setObjectName(QString::fromUtf8("actionSelection_Sort"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuSorting_algorithms = new QMenu(menuBar);
        menuSorting_algorithms->setObjectName(QString::fromUtf8("menuSorting_algorithms"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuSorting_algorithms->menuAction());
        menuFile->addAction(actionExit);
        menuSorting_algorithms->addAction(actionInsertion_Sort);
        menuSorting_algorithms->addAction(actionBubble_Sort);
        menuSorting_algorithms->addAction(actionSelection_Sort);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionInsertion_Sort->setText(QApplication::translate("MainWindow", "Insertion Sort", 0, QApplication::UnicodeUTF8));
        actionBubble_Sort->setText(QApplication::translate("MainWindow", "Bubble_Sort", 0, QApplication::UnicodeUTF8));
        actionSelection_Sort->setText(QApplication::translate("MainWindow", "Selection Sort", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuSorting_algorithms->setTitle(QApplication::translate("MainWindow", "Sorting algorithms", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
