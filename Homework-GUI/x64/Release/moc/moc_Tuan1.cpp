/****************************************************************************
** Meta object code from reading C++ file 'Tuan1.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Tuan1.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Tuan1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tuan1_t {
    const uint offsetsAndSize[22];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Tuan1_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Tuan1_t qt_meta_stringdata_Tuan1 = {
    {
QT_MOC_LITERAL(0, 5), // "Tuan1"
QT_MOC_LITERAL(6, 8), // "showBai1"
QT_MOC_LITERAL(15, 0), // ""
QT_MOC_LITERAL(16, 8), // "showBai2"
QT_MOC_LITERAL(25, 8), // "showBai3"
QT_MOC_LITERAL(34, 8), // "showBai4"
QT_MOC_LITERAL(43, 8), // "showBai8"
QT_MOC_LITERAL(52, 8), // "showBai9"
QT_MOC_LITERAL(61, 9), // "showBai10"
QT_MOC_LITERAL(71, 9), // "showBai11"
QT_MOC_LITERAL(81, 9) // "showBai12"

    },
    "Tuan1\0showBai1\0\0showBai2\0showBai3\0"
    "showBai4\0showBai8\0showBai9\0showBai10\0"
    "showBai11\0showBai12"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tuan1[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,    1 /* Public */,
       3,    0,   69,    2, 0x0a,    2 /* Public */,
       4,    0,   70,    2, 0x0a,    3 /* Public */,
       5,    0,   71,    2, 0x0a,    4 /* Public */,
       6,    0,   72,    2, 0x0a,    5 /* Public */,
       7,    0,   73,    2, 0x0a,    6 /* Public */,
       8,    0,   74,    2, 0x0a,    7 /* Public */,
       9,    0,   75,    2, 0x0a,    8 /* Public */,
      10,    0,   76,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Tuan1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Tuan1 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showBai1(); break;
        case 1: _t->showBai2(); break;
        case 2: _t->showBai3(); break;
        case 3: _t->showBai4(); break;
        case 4: _t->showBai8(); break;
        case 5: _t->showBai9(); break;
        case 6: _t->showBai10(); break;
        case 7: _t->showBai11(); break;
        case 8: _t->showBai12(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject Tuan1::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Tuan1.offsetsAndSize,
    qt_meta_data_Tuan1,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Tuan1_t
, QtPrivate::TypeAndForceComplete<Tuan1, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Tuan1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tuan1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tuan1.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Tuan1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
