/********************************************************************************
** Form generated from reading UI file 'gray.ui'
**
** Created: Tue Dec 18 00:33:00 2012
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAY_H
#define UI_GRAY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gray
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QSlider *horizontalSlider;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Gray)
    {
        if (Gray->objectName().isEmpty())
            Gray->setObjectName(QString::fromUtf8("Gray"));
        Gray->resize(745, 492);
        label = new QLabel(Gray);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(25, 70, 681, 371));
        label->setScaledContents(true);
        pushButton = new QPushButton(Gray);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 460, 75, 23));
        horizontalSlider = new QSlider(Gray);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(20, 20, 691, 19));
        horizontalSlider->setMaximum(250);
        horizontalSlider->setOrientation(Qt::Horizontal);
        pushButton_2 = new QPushButton(Gray);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(660, 460, 75, 23));

        retranslateUi(Gray);

        QMetaObject::connectSlotsByName(Gray);
    } // setupUi

    void retranslateUi(QWidget *Gray)
    {
        Gray->setWindowTitle(QApplication::translate("Gray", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton->setText(QApplication::translate("Gray", "Back", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Gray", "Gray", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Gray: public Ui_Gray {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAY_H
