/****************************************************************************
** Meta object code from reading C++ file 'QsrRibbonCore.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../source/qtFramework/QsrRibbonCore.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QsrRibbonCore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RibbonToolButton_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RibbonToolButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RibbonToolButton_t qt_meta_stringdata_RibbonToolButton = {
    {
QT_MOC_LITERAL(0, 0, 16) // "RibbonToolButton"

    },
    "RibbonToolButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RibbonToolButton[] = {

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

void RibbonToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject RibbonToolButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_RibbonToolButton.data,
      qt_meta_data_RibbonToolButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RibbonToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RibbonToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RibbonToolButton.stringdata0))
        return static_cast<void*>(const_cast< RibbonToolButton*>(this));
    if (!strcmp(_clname, "RibbonControlBase"))
        return static_cast< RibbonControlBase*>(const_cast< RibbonToolButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int RibbonToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RibbonToolButtonBig_t {
    QByteArrayData data[4];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RibbonToolButtonBig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RibbonToolButtonBig_t qt_meta_stringdata_RibbonToolButtonBig = {
    {
QT_MOC_LITERAL(0, 0, 19), // "RibbonToolButtonBig"
QT_MOC_LITERAL(1, 20, 9), // "triggered"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7) // "checked"

    },
    "RibbonToolButtonBig\0triggered\0\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RibbonToolButtonBig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       1,    0,   27,    2, 0x26 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

void RibbonToolButtonBig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RibbonToolButtonBig *_t = static_cast<RibbonToolButtonBig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RibbonToolButtonBig::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RibbonToolButtonBig::triggered)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject RibbonToolButtonBig::staticMetaObject = {
    { &RobbonWidget::staticMetaObject, qt_meta_stringdata_RibbonToolButtonBig.data,
      qt_meta_data_RibbonToolButtonBig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RibbonToolButtonBig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RibbonToolButtonBig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RibbonToolButtonBig.stringdata0))
        return static_cast<void*>(const_cast< RibbonToolButtonBig*>(this));
    if (!strcmp(_clname, "RibbonControlBase"))
        return static_cast< RibbonControlBase*>(const_cast< RibbonToolButtonBig*>(this));
    return RobbonWidget::qt_metacast(_clname);
}

int RibbonToolButtonBig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RobbonWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void RibbonToolButtonBig::triggered(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QsrRibbonQuickAccessToolBar_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QsrRibbonQuickAccessToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QsrRibbonQuickAccessToolBar_t qt_meta_stringdata_QsrRibbonQuickAccessToolBar = {
    {
QT_MOC_LITERAL(0, 0, 27) // "QsrRibbonQuickAccessToolBar"

    },
    "QsrRibbonQuickAccessToolBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QsrRibbonQuickAccessToolBar[] = {

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

void QsrRibbonQuickAccessToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QsrRibbonQuickAccessToolBar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_QsrRibbonQuickAccessToolBar.data,
      qt_meta_data_QsrRibbonQuickAccessToolBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QsrRibbonQuickAccessToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QsrRibbonQuickAccessToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QsrRibbonQuickAccessToolBar.stringdata0))
        return static_cast<void*>(const_cast< QsrRibbonQuickAccessToolBar*>(this));
    return QToolBar::qt_metacast(_clname);
}

int QsrRibbonQuickAccessToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QsrRibbonTitleBar_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QsrRibbonTitleBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QsrRibbonTitleBar_t qt_meta_stringdata_QsrRibbonTitleBar = {
    {
QT_MOC_LITERAL(0, 0, 17) // "QsrRibbonTitleBar"

    },
    "QsrRibbonTitleBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QsrRibbonTitleBar[] = {

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

void QsrRibbonTitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QsrRibbonTitleBar::staticMetaObject = {
    { &RobbonWidget::staticMetaObject, qt_meta_stringdata_QsrRibbonTitleBar.data,
      qt_meta_data_QsrRibbonTitleBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QsrRibbonTitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QsrRibbonTitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QsrRibbonTitleBar.stringdata0))
        return static_cast<void*>(const_cast< QsrRibbonTitleBar*>(this));
    return RobbonWidget::qt_metacast(_clname);
}

int QsrRibbonTitleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RobbonWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QtbGroupWidget_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtbGroupWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtbGroupWidget_t qt_meta_stringdata_QtbGroupWidget = {
    {
QT_MOC_LITERAL(0, 0, 14) // "QtbGroupWidget"

    },
    "QtbGroupWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtbGroupWidget[] = {

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

void QtbGroupWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QtbGroupWidget::staticMetaObject = {
    { &RobbonWidget::staticMetaObject, qt_meta_stringdata_QtbGroupWidget.data,
      qt_meta_data_QtbGroupWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtbGroupWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtbGroupWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtbGroupWidget.stringdata0))
        return static_cast<void*>(const_cast< QtbGroupWidget*>(this));
    return RobbonWidget::qt_metacast(_clname);
}

int QtbGroupWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RobbonWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QtbMenuBar_t {
    QByteArrayData data[7];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtbMenuBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtbMenuBar_t qt_meta_stringdata_QtbMenuBar = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QtbMenuBar"
QT_MOC_LITERAL(1, 11, 17), // "setToolBarVisible"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "tVal"
QT_MOC_LITERAL(4, 35, 15), // "onExtentToggled"
QT_MOC_LITERAL(5, 51, 19), // "onCurrentTabChenged"
QT_MOC_LITERAL(6, 71, 5) // "index"

    },
    "QtbMenuBar\0setToolBarVisible\0\0tVal\0"
    "onExtentToggled\0onCurrentTabChenged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtbMenuBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    0,   32,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void QtbMenuBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtbMenuBar *_t = static_cast<QtbMenuBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setToolBarVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onExtentToggled(); break;
        case 2: _t->onCurrentTabChenged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtbMenuBar::staticMetaObject = {
    { &RobbonWidget::staticMetaObject, qt_meta_stringdata_QtbMenuBar.data,
      qt_meta_data_QtbMenuBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtbMenuBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtbMenuBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtbMenuBar.stringdata0))
        return static_cast<void*>(const_cast< QtbMenuBar*>(this));
    return RobbonWidget::qt_metacast(_clname);
}

int QtbMenuBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RobbonWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_QtbToolBar_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtbToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtbToolBar_t qt_meta_stringdata_QtbToolBar = {
    {
QT_MOC_LITERAL(0, 0, 10) // "QtbToolBar"

    },
    "QtbToolBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtbToolBar[] = {

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

void QtbToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QtbToolBar::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_QtbToolBar.data,
      qt_meta_data_QtbToolBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtbToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtbToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtbToolBar.stringdata0))
        return static_cast<void*>(const_cast< QtbToolBar*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int QtbToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QtbMainWindow_t {
    QByteArrayData data[3];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtbMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtbMainWindow_t qt_meta_stringdata_QtbMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QtbMainWindow"
QT_MOC_LITERAL(1, 14, 6), // "onSkin"
QT_MOC_LITERAL(2, 21, 0) // ""

    },
    "QtbMainWindow\0onSkin\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtbMainWindow[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QtbMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtbMainWindow *_t = static_cast<QtbMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onSkin(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QtbMainWindow::staticMetaObject = {
    { &RobbonWidget::staticMetaObject, qt_meta_stringdata_QtbMainWindow.data,
      qt_meta_data_QtbMainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtbMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtbMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtbMainWindow.stringdata0))
        return static_cast<void*>(const_cast< QtbMainWindow*>(this));
    return RobbonWidget::qt_metacast(_clname);
}

int QtbMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RobbonWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
