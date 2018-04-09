/********************************************************************************
** Form generated from reading UI file 'subimage.ui'
**
** Created: Wed Dec 19 01:28:30 2012
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBIMAGE_H
#define UI_SUBIMAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Subimage
{
public:

    void setupUi(QWidget *Subimage)
    {
        if (Subimage->objectName().isEmpty())
            Subimage->setObjectName(QString::fromUtf8("Subimage"));
        Subimage->resize(400, 300);

        retranslateUi(Subimage);

        QMetaObject::connectSlotsByName(Subimage);
    } // setupUi

    void retranslateUi(QWidget *Subimage)
    {
        Subimage->setWindowTitle(QApplication::translate("Subimage", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Subimage: public Ui_Subimage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBIMAGE_H
