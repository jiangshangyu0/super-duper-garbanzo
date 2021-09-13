/****************************************************************************
** Meta object code from reading C++ file 'uiOffice2016.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../uiOffice2016.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uiOffice2016.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_uiOffice2016_t {
    QByteArrayData data[3];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_uiOffice2016_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_uiOffice2016_t qt_meta_stringdata_uiOffice2016 = {
    {
QT_MOC_LITERAL(0, 0, 12), // "uiOffice2016"
QT_MOC_LITERAL(1, 13, 12), // "onImgClicked"
QT_MOC_LITERAL(2, 26, 0) // ""

    },
    "uiOffice2016\0onImgClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_uiOffice2016[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void uiOffice2016::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        uiOffice2016 *_t = static_cast<uiOffice2016 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onImgClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject uiOffice2016::staticMetaObject = {
    { &QtbMainWindow::staticMetaObject, qt_meta_stringdata_uiOffice2016.data,
      qt_meta_data_uiOffice2016,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *uiOffice2016::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *uiOffice2016::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_uiOffice2016.stringdata0))
        return static_cast<void*>(const_cast< uiOffice2016*>(this));
    return QtbMainWindow::qt_metacast(_clname);
}

int uiOffice2016::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtbMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_uiTEST_MainWindow_t {
    QByteArrayData data[9];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_uiTEST_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_uiTEST_MainWindow_t qt_meta_stringdata_uiTEST_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "uiTEST_MainWindow"
QT_MOC_LITERAL(1, 18, 14), // "onCloseWorkTab"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "tabIndex"
QT_MOC_LITERAL(4, 43, 7), // "onAbout"
QT_MOC_LITERAL(5, 51, 9), // "onSupport"
QT_MOC_LITERAL(6, 61, 19), // "on_generate_toggled"
QT_MOC_LITERAL(7, 81, 16), // "on_train_toggled"
QT_MOC_LITERAL(8, 98, 18) // "on_predict_toggled"

    },
    "uiTEST_MainWindow\0onCloseWorkTab\0\0"
    "tabIndex\0onAbout\0onSupport\0"
    "on_generate_toggled\0on_train_toggled\0"
    "on_predict_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_uiTEST_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    0,   47,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void uiTEST_MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        uiTEST_MainWindow *_t = static_cast<uiTEST_MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onCloseWorkTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onAbout(); break;
        case 2: _t->onSupport(); break;
        case 3: _t->on_generate_toggled(); break;
        case 4: _t->on_train_toggled(); break;
        case 5: _t->on_predict_toggled(); break;
        default: ;
        }
    }
}

const QMetaObject uiTEST_MainWindow::staticMetaObject = {
    { &QtbMainWindow::staticMetaObject, qt_meta_stringdata_uiTEST_MainWindow.data,
      qt_meta_data_uiTEST_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *uiTEST_MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *uiTEST_MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_uiTEST_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< uiTEST_MainWindow*>(this));
    return QtbMainWindow::qt_metacast(_clname);
}

int uiTEST_MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtbMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
