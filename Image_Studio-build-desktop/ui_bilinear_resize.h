/********************************************************************************
** Form generated from reading UI file 'bilinear_resize.ui'
**
** Created: Thu Dec 20 00:45:41 2012
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILINEAR_RESIZE_H
#define UI_BILINEAR_RESIZE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Bilinear_resize
{
public:
    QSlider *horizontalSlider;
    QSlider *verticalSlider;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;

    void setupUi(QWidget *Bilinear_resize)
    {
        if (Bilinear_resize->objectName().isEmpty())
            Bilinear_resize->setObjectName(QString::fromUtf8("Bilinear_resize"));
        Bilinear_resize->resize(864, 497);
        horizontalSlider = new QSlider(Bilinear_resize);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(30, 10, 691, 19));
        horizontalSlider->setOrientation(Qt::Horizontal);
        verticalSlider = new QSlider(Bilinear_resize);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(710, 40, 19, 441));
        verticalSlider->setOrientation(Qt::Vertical);
        label = new QLabel(Bilinear_resize);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 621, 411));
        label->setFrameShape(QFrame::Box);
        label->setScaledContents(true);
        pushButton = new QPushButton(Bilinear_resize);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 460, 75, 23));
        label_4 = new QLabel(Bilinear_resize);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(730, 120, 61, 16));
        lineEdit = new QLineEdit(Bilinear_resize);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(790, 90, 71, 20));
        pushButton_2 = new QPushButton(Bilinear_resize);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(790, 50, 61, 23));
        lineEdit_2 = new QLineEdit(Bilinear_resize);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(790, 120, 71, 20));
        label_3 = new QLabel(Bilinear_resize);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(730, 90, 61, 16));

        retranslateUi(Bilinear_resize);

        QMetaObject::connectSlotsByName(Bilinear_resize);
    } // setupUi

    void retranslateUi(QWidget *Bilinear_resize)
    {
        Bilinear_resize->setWindowTitle(QApplication::translate("Bilinear_resize", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton->setText(QApplication::translate("Bilinear_resize", "Back", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Bilinear_resize", "Height", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Bilinear_resize", "Resize", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Bilinear_resize", "Width", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Bilinear_resize: public Ui_Bilinear_resize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILINEAR_RESIZE_H
