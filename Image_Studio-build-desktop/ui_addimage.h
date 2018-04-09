/********************************************************************************
** Form generated from reading UI file 'addimage.ui'
**
** Created: Wed Dec 19 01:39:31 2012
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDIMAGE_H
#define UI_ADDIMAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Addimage
{
public:

    void setupUi(QWidget *Addimage)
    {
        if (Addimage->objectName().isEmpty())
            Addimage->setObjectName(QString::fromUtf8("Addimage"));
        Addimage->resize(708, 483);

        retranslateUi(Addimage);

        QMetaObject::connectSlotsByName(Addimage);
    } // setupUi

    void retranslateUi(QWidget *Addimage)
    {
        Addimage->setWindowTitle(QApplication::translate("Addimage", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Addimage: public Ui_Addimage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDIMAGE_H
