/****************************************************************************
** Meta object code from reading C++ file 'bilinear_resize.h'
**
** Created: Thu Dec 20 00:45:59 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Image_Studio/bilinear_resize.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bilinear_resize.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Bilinear_resize[] = {

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
      17,   16,   16,   16, 0x08,
      47,   41,   16,   16, 0x08,
      83,   41,   16,   16, 0x08,
     121,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Bilinear_resize[] = {
    "Bilinear_resize\0\0on_pushButton_clicked()\0"
    "value\0on_verticalSlider_valueChanged(int)\0"
    "on_horizontalSlider_valueChanged(int)\0"
    "on_pushButton_2_clicked()\0"
};

const QMetaObject Bilinear_resize::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Bilinear_resize,
      qt_meta_data_Bilinear_resize, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Bilinear_resize::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Bilinear_resize::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Bilinear_resize::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Bilinear_resize))
        return static_cast<void*>(const_cast< Bilinear_resize*>(this));
    return QWidget::qt_metacast(_clname);
}

int Bilinear_resize::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_clicked(); break;
        case 1: on_verticalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: on_pushButton_2_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
