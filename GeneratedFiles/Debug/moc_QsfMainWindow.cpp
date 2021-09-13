/****************************************************************************
** Meta object code from reading C++ file 'QsfMainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../source/qtFramework/QsfMainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QsfMainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QsfWorkWindow_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QsfWorkWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QsfWorkWindow_t qt_meta_stringdata_QsfWorkWindow = {
    {
QT_MOC_LITERAL(0, 0, 13) // "QsfWorkWindow"

    },
    "QsfWorkWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QsfWorkWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QsfWorkWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QsfWorkWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QsfWorkWindow.data,
      qt_meta_data_QsfWorkWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QsfWorkWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QsfWorkWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QsfWorkWindow.stringdata0))
        return static_cast<void*>(const_cast< QsfWorkWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QsfWorkWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QsfMainWindow_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QsfMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QsfMainWindow_t qt_meta_stringdata_QsfMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 13) // "QsfMainWindow"

    },
    "QsfMainWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QsfMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QsfMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QsfMainWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QsfMainWindow.data,
      qt_meta_data_QsfMainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QsfMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QsfMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QsfMainWindow.stringdata0))
        return static_cast<void*>(const_cast< QsfMainWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int QsfMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
