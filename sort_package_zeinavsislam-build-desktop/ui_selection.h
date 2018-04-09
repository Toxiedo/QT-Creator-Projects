/********************************************************************************
** Form generated from reading UI file 'selection.ui'
**
** Created: Fri Sep 27 21:09:34 2013
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTION_H
#define UI_SELECTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Selection
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QLabel *label_2;
    QListWidget *listWidget_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Selection)
    {
        if (Selection->objectName().isEmpty())
            Selection->setObjectName(QString::fromUtf8("Selection"));
        Selection->resize(556, 455);
        label = new QLabel(Selection);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 50, 61, 16));
        pushButton = new QPushButton(Selection);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 150, 75, 61));
        listWidget = new QListWidget(Selection);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(120, 80, 101, 192));
        label_2 = new QLabel(Selection);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 50, 61, 16));
        listWidget_2 = new QListWidget(Selection);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(320, 80, 101, 192));
        pushButton_3 = new QPushButton(Selection);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(380, 350, 75, 23));
        pushButton_2 = new QPushButton(Selection);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 310, 75, 23));

        retranslateUi(Selection);

        QMetaObject::connectSlotsByName(Selection);
    } // setupUi

    void retranslateUi(QWidget *Selection)
    {
        Selection->setWindowTitle(QApplication::translate("Selection", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Selection", "Before Sort", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Selection", "Sort", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Selection", "After Sort", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Selection", "Exit", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Selection", "Back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Selection: public Ui_Selection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTION_H
