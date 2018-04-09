/********************************************************************************
** Form generated from reading UI file 'gamma.ui'
**
** Created: Sun Dec 23 10:33:55 2012
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMMA_H
#define UI_GAMMA_H

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

class Ui_Gamma
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QSlider *verticalSlider;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Gamma)
    {
        if (Gamma->objectName().isEmpty())
            Gamma->setObjectName(QString::fromUtf8("Gamma"));
        Gamma->resize(887, 497);
        label = new QLabel(Gamma);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 631, 401));
        label->setScaledContents(true);
        pushButton = new QPushButton(Gamma);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 460, 75, 23));
        verticalSlider = new QSlider(Gamma);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(700, 40, 20, 401));
        verticalSlider->setMaximum(40);
        verticalSlider->setOrientation(Qt::Vertical);
        label_3 = new QLabel(Gamma);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(740, 100, 61, 16));
        lineEdit = new QLineEdit(Gamma);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(800, 100, 71, 20));
        pushButton_2 = new QPushButton(Gamma);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(800, 60, 61, 23));

        retranslateUi(Gamma);

        QMetaObject::connectSlotsByName(Gamma);
    } // setupUi

    void retranslateUi(QWidget *Gamma)
    {
        Gamma->setWindowTitle(QApplication::translate("Gamma", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton->setText(QApplication::translate("Gamma", "Back", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Gamma", "Value", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Gamma", "Gamma", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Gamma: public Ui_Gamma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMMA_H
