/********************************************************************************
** Form generated from reading UI file 'insertion.ui'
**
** Created: Mon Sep 23 22:09:51 2013
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTION_H
#define UI_INSERTION_H

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

class Ui_insertion
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QListWidget *listWidget;
    QListWidget *listWidget_2;

    void setupUi(QWidget *insertion)
    {
        if (insertion->objectName().isEmpty())
            insertion->setObjectName(QString::fromUtf8("insertion"));
        insertion->resize(357, 432);
        label = new QLabel(insertion);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 61, 16));
        label_2 = new QLabel(insertion);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 10, 61, 16));
        pushButton = new QPushButton(insertion);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 110, 75, 61));
        pushButton_2 = new QPushButton(insertion);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 270, 75, 23));
        pushButton_3 = new QPushButton(insertion);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 310, 75, 23));
        listWidget = new QListWidget(insertion);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 40, 101, 192));
        listWidget_2 = new QListWidget(insertion);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(210, 40, 101, 192));

        retranslateUi(insertion);

        QMetaObject::connectSlotsByName(insertion);
    } // setupUi

    void retranslateUi(QWidget *insertion)
    {
        insertion->setWindowTitle(QApplication::translate("insertion", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("insertion", "Before Sort", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("insertion", "After Sort", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("insertion", "Sort", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("insertion", "Back", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("insertion", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class insertion: public Ui_insertion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTION_H
