/********************************************************************************
** Form generated from reading UI file 'addform.ui'
**
** Created: Wed Dec 19 22:14:54 2012
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFORM_H
#define UI_ADDFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addform
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QSlider *horizontalSlider;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit;

    void setupUi(QWidget *addform)
    {
        if (addform->objectName().isEmpty())
            addform->setObjectName(QString::fromUtf8("addform"));
        addform->resize(874, 466);
        pushButton = new QPushButton(addform);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(720, 70, 75, 23));
        label = new QLabel(addform);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 621, 391));
        label->setFrameShape(QFrame::Box);
        label->setScaledContents(true);
        label_2 = new QLabel(addform);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(460, 50, 46, 13));
        horizontalSlider = new QSlider(addform);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(20, 10, 611, 20));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(addform);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(670, 200, 46, 13));
        widget = new QWidget(addform);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(670, 110, 181, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(addform);

        QMetaObject::connectSlotsByName(addform);
    } // setupUi

    void retranslateUi(QWidget *addform)
    {
        addform->setWindowTitle(QApplication::translate("addform", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("addform", "Brightness", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QApplication::translate("addform", "Value", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class addform: public Ui_addform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFORM_H
