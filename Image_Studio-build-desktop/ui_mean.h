/********************************************************************************
** Form generated from reading UI file 'mean.ui'
**
** Created: Mon Dec 24 10:17:42 2012
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEAN_H
#define UI_MEAN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mean
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QWidget *mean)
    {
        if (mean->objectName().isEmpty())
            mean->setObjectName(QString::fromUtf8("mean"));
        mean->resize(1022, 482);
        label = new QLabel(mean);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 431, 381));
        label->setFrameShape(QFrame::Box);
        label->setScaledContents(true);
        lineEdit = new QLineEdit(mean);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(477, 100, 81, 20));
        pushButton = new QPushButton(mean);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(480, 70, 75, 23));
        label_2 = new QLabel(mean);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(580, 70, 421, 381));
        label_2->setFrameShape(QFrame::Box);
        label_2->setScaledContents(true);

        retranslateUi(mean);

        QMetaObject::connectSlotsByName(mean);
    } // setupUi

    void retranslateUi(QWidget *mean)
    {
        mean->setWindowTitle(QApplication::translate("mean", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton->setText(QApplication::translate("mean", "Apply", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mean: public Ui_mean {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEAN_H
