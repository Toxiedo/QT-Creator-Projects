/****************************************************************************
** Meta object code from reading C++ file 'contrast.h'
**
** Created: Wed Dec 19 21:49:27 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Image_Studio/contrast.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contrast.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_contrast[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   10,    9,    9, 0x08,
      52,   10,    9,    9, 0x08,
      90,    9,    9,    9, 0x08,
     114,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_contrast[] = {
    "contrast\0\0value\0on_verticalSlider_valueChanged(int)\0"
    "on_horizontalSlider_valueChanged(int)\0"
    "on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0"
};

const QMetaObject contrast::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_contrast,
      qt_meta_data_contrast, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &contrast::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *contrast::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *contrast::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_contrast))
        return static_cast<void*>(const_cast< contrast*>(this));
    return QWidget::qt_metacast(_clname);
}

int contrast::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_verticalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: on_pushButton_clicked(); break;
        case 3: on_pushButton_2_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
