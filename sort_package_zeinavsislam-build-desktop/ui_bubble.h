/********************************************************************************
** Form generated from reading UI file 'bubble.ui'
**
** Created: Wed Sep 25 23:13:01 2013
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUBBLE_H
#define UI_BUBBLE_H

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

class Ui_Bubble
{
public:
    QListWidget *listWidget;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QPushButton *pushButton_2;
    QListWidget *listWidget_2;
    QPushButton *pushButton;

    void setupUi(QWidget *Bubble)
    {
        if (Bubble->objectName().isEmpty())
            Bubble->setObjectName(QString::fromUtf8("Bubble"));
        Bubble->resize(482, 455);
        listWidget = new QListWidget(Bubble);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(70, 80, 101, 192));
        label_2 = new QLabel(Bubble);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 50, 61, 16));
        pushButton_3 = new QPushButton(Bubble);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 350, 75, 23));
        label = new QLabel(Bubble);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 50, 61, 16));
        pushButton_2 = new QPushButton(Bubble);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 310, 75, 23));
        listWidget_2 = new QListWidget(Bubble);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(270, 80, 101, 192));
        pushButton = new QPushButton(Bubble);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 150, 75, 61));

        retranslateUi(Bubble);

        QMetaObject::connectSlotsByName(Bubble);
    } // setupUi

    void retranslateUi(QWidget *Bubble)
    {
        Bubble->setWindowTitle(QApplication::translate("Bubble", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Bubble", "After Sort", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Bubble", "Exit", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Bubble", "Before Sort", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Bubble", "Back", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Bubble", "Sort", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Bubble: public Ui_Bubble {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUBBLE_H
