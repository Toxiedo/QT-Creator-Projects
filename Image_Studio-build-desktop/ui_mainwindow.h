/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Sep 23 15:47:47 2013
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
#include <QtGui/QLabel>
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
    QAction *actionOPen;
    QAction *actionOpen_P3;
    QAction *actionOpen_P6;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionResize;
    QAction *actionAdd;
    QAction *actionSub;
    QAction *actionGray;
    QAction *actionGamma;
    QAction *actionMean;
    QAction *actionGaussian;
    QAction *actionSharp;
    QWidget *centralWidget;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuOpen;
    QMenu *menuEdit;
    QMenu *menuOPerations;
    QMenu *menuFilters;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(756, 428);
        MainWindow->setMouseTracking(true);
        actionOPen = new QAction(MainWindow);
        actionOPen->setObjectName(QString::fromUtf8("actionOPen"));
        actionOpen_P3 = new QAction(MainWindow);
        actionOpen_P3->setObjectName(QString::fromUtf8("actionOpen_P3"));
        actionOpen_P6 = new QAction(MainWindow);
        actionOpen_P6->setObjectName(QString::fromUtf8("actionOpen_P6"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionResize = new QAction(MainWindow);
        actionResize->setObjectName(QString::fromUtf8("actionResize"));
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        actionSub = new QAction(MainWindow);
        actionSub->setObjectName(QString::fromUtf8("actionSub"));
        actionGray = new QAction(MainWindow);
        actionGray->setObjectName(QString::fromUtf8("actionGray"));
        actionGamma = new QAction(MainWindow);
        actionGamma->setObjectName(QString::fromUtf8("actionGamma"));
        actionMean = new QAction(MainWindow);
        actionMean->setObjectName(QString::fromUtf8("actionMean"));
        actionGaussian = new QAction(MainWindow);
        actionGaussian->setObjectName(QString::fromUtf8("actionGaussian"));
        actionSharp = new QAction(MainWindow);
        actionSharp->setObjectName(QString::fromUtf8("actionSharp"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 651, 251));
        label->setCursor(QCursor(Qt::PointingHandCursor));
        label->setMouseTracking(false);
        label->setFocusPolicy(Qt::ClickFocus);
        label->setAcceptDrops(true);
        label->setFrameShape(QFrame::NoFrame);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(true);
        label->setWordWrap(true);
        label->setOpenExternalLinks(false);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 756, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuOpen = new QMenu(menuFile);
        menuOpen->setObjectName(QString::fromUtf8("menuOpen"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuOPerations = new QMenu(menuBar);
        menuOPerations->setObjectName(QString::fromUtf8("menuOPerations"));
        menuFilters = new QMenu(menuBar);
        menuFilters->setObjectName(QString::fromUtf8("menuFilters"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuOPerations->menuAction());
        menuBar->addAction(menuFilters->menuAction());
        menuFile->addAction(menuOpen->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExit);
        menuOpen->addAction(actionOPen);
        menuOpen->addAction(actionOpen_P3);
        menuOpen->addAction(actionOpen_P6);
        menuEdit->addAction(actionResize);
        menuOPerations->addAction(actionAdd);
        menuOPerations->addAction(actionSub);
        menuOPerations->addAction(actionGray);
        menuOPerations->addAction(actionGamma);
        menuFilters->addAction(actionMean);
        menuFilters->addAction(actionGaussian);
        menuFilters->addAction(actionSharp);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Image Funny", 0, QApplication::UnicodeUTF8));
        actionOPen->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        actionOpen_P3->setText(QApplication::translate("MainWindow", "Open P3", 0, QApplication::UnicodeUTF8));
        actionOpen_P6->setText(QApplication::translate("MainWindow", "Open P6", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionResize->setText(QApplication::translate("MainWindow", "Resize", 0, QApplication::UnicodeUTF8));
        actionAdd->setText(QApplication::translate("MainWindow", "Brightness", 0, QApplication::UnicodeUTF8));
        actionSub->setText(QApplication::translate("MainWindow", "Contrast", 0, QApplication::UnicodeUTF8));
        actionGray->setText(QApplication::translate("MainWindow", "Gray", 0, QApplication::UnicodeUTF8));
        actionGamma->setText(QApplication::translate("MainWindow", "Gamma", 0, QApplication::UnicodeUTF8));
        actionMean->setText(QApplication::translate("MainWindow", "Mean", 0, QApplication::UnicodeUTF8));
        actionGaussian->setText(QApplication::translate("MainWindow", "Gaussian", 0, QApplication::UnicodeUTF8));
        actionSharp->setText(QApplication::translate("MainWindow", "Sharp", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuOpen->setTitle(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuOPerations->setTitle(QApplication::translate("MainWindow", "Operations", 0, QApplication::UnicodeUTF8));
        menuFilters->setTitle(QApplication::translate("MainWindow", "Filters", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
