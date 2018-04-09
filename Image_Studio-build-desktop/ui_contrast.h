/********************************************************************************
** Form generated from reading UI file 'contrast.ui'
**
** Created: Sun Dec 23 10:33:55 2012
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTRAST_H
#define UI_CONTRAST_H

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

class Ui_contrast
{
public:
    QLabel *label;
    QSlider *verticalSlider;
    QLabel *label_2;
    QPushButton *pushButton;
    QSlider *horizontalSlider;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_4;

    void setupUi(QWidget *contrast)
    {
        if (contrast->objectName().isEmpty())
            contrast->setObjectName(QString::fromUtf8("contrast"));
        contrast->resize(835, 487);
        label = new QLabel(contrast);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 60, 621, 411));
        label->setFrameShape(QFrame::Box);
        label->setScaledContents(true);
        verticalSlider = new QSlider(contrast);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(670, 140, 20, 331));
        verticalSlider->setOrientation(Qt::Vertical);
        label_2 = new QLabel(contrast);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(660, 100, 51, 21));
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setScaledContents(false);
        pushButton = new QPushButton(contrast);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(640, 30, 75, 41));
        horizontalSlider = new QSlider(contrast);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 10, 621, 19));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(500);
        horizontalSlider->setSingleStep(1);
        horizontalSlider->setValue(1);
        horizontalSlider->setOrientation(Qt::Horizontal);
        lineEdit = new QLineEdit(contrast);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(750, 140, 71, 20));
        pushButton_2 = new QPushButton(contrast);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(750, 100, 61, 23));
        label_3 = new QLabel(contrast);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(690, 140, 61, 16));
        label_4 = new QLabel(contrast);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(690, 170, 61, 16));
        lineEdit_2 = new QLineEdit(contrast);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(750, 170, 71, 20));
        label_5 = new QLabel(contrast);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(510, 350, 61, 16));
        lineEdit_3 = new QLineEdit(contrast);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(570, 320, 71, 20));
        pushButton_3 = new QPushButton(contrast);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(570, 280, 61, 23));
        lineEdit_4 = new QLineEdit(contrast);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(570, 350, 71, 20));
        label_6 = new QLabel(contrast);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(510, 320, 61, 16));
        label_7 = new QLabel(contrast);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(560, 290, 61, 16));
        lineEdit_5 = new QLineEdit(contrast);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(620, 290, 71, 20));
        pushButton_4 = new QPushButton(contrast);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(620, 250, 61, 23));

        retranslateUi(contrast);

        QMetaObject::connectSlotsByName(contrast);
    } // setupUi

    void retranslateUi(QWidget *contrast)
    {
        contrast->setWindowTitle(QApplication::translate("contrast", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("contrast", "Contrast", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("contrast", "Back", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("contrast", "Contrast", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("contrast", "New Max", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("contrast", "New Min", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("contrast", "New Min", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("contrast", "Contrast", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("contrast", "New Max", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("contrast", "New Max", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("contrast", "Contrast", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class contrast: public Ui_contrast {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTRAST_H
