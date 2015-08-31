/****************************************************************************
** Meta object code from reading C++ file 'QConsoleWidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QConsoleWidget.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QConsoleWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QConsoleWidget_t {
    QByteArrayData data[11];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QConsoleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QConsoleWidget_t qt_meta_stringdata_QConsoleWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QConsoleWidget"
QT_MOC_LITERAL(1, 15, 5), // "evals"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 28), // "QList<QConsoleWidgetCommand>"
QT_MOC_LITERAL(4, 51, 10), // "beginEvals"
QT_MOC_LITERAL(5, 62, 8), // "endEvals"
QT_MOC_LITERAL(6, 71, 16), // "updateCharFormat"
QT_MOC_LITERAL(7, 88, 10), // "setLogFile"
QT_MOC_LITERAL(8, 99, 4), // "log_"
QT_MOC_LITERAL(9, 104, 12), // "saveAndClear"
QT_MOC_LITERAL(10, 117, 10) // "innerEvals"

    },
    "QConsoleWidget\0evals\0\0"
    "QList<QConsoleWidgetCommand>\0beginEvals\0"
    "endEvals\0updateCharFormat\0setLogFile\0"
    "log_\0saveAndClear\0innerEvals"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QConsoleWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   57,    2, 0x0a /* Public */,
       5,    0,   58,    2, 0x0a /* Public */,
       6,    0,   59,    2, 0x0a /* Public */,
       7,    1,   60,    2, 0x0a /* Public */,
       9,    0,   63,    2, 0x0a /* Public */,
       9,    1,   64,    2, 0x0a /* Public */,
      10,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void QConsoleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QConsoleWidget *_t = static_cast<QConsoleWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->evals((*reinterpret_cast< QList<QConsoleWidgetCommand>(*)>(_a[1]))); break;
        case 1: _t->beginEvals(); break;
        case 2: _t->endEvals(); break;
        case 3: _t->updateCharFormat(); break;
        case 4: _t->setLogFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->saveAndClear(); break;
        case 6: _t->saveAndClear((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->innerEvals((*reinterpret_cast< QList<QConsoleWidgetCommand>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QConsoleWidget::*_t)(QList<QConsoleWidgetCommand> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QConsoleWidget::evals)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QConsoleWidget::staticMetaObject = {
    { &QConsoleWidgetParent::staticMetaObject, qt_meta_stringdata_QConsoleWidget.data,
      qt_meta_data_QConsoleWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QConsoleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QConsoleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QConsoleWidget.stringdata0))
        return static_cast<void*>(const_cast< QConsoleWidget*>(this));
    return QConsoleWidgetParent::qt_metacast(_clname);
}

int QConsoleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QConsoleWidgetParent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QConsoleWidget::evals(QList<QConsoleWidgetCommand> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QConsole_t {
    QByteArrayData data[4];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QConsole_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QConsole_t qt_meta_stringdata_QConsole = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QConsole"
QT_MOC_LITERAL(1, 9, 5), // "evals"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 28) // "QList<QConsoleWidgetCommand>"

    },
    "QConsole\0evals\0\0QList<QConsoleWidgetCommand>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QConsole[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void QConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QConsole *_t = static_cast<QConsole *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->evals((*reinterpret_cast< QList<QConsoleWidgetCommand>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QConsole::*_t)(QList<QConsoleWidgetCommand> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QConsole::evals)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QConsole::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QConsole.data,
      qt_meta_data_QConsole,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QConsole.stringdata0))
        return static_cast<void*>(const_cast< QConsole*>(this));
    return QWidget::qt_metacast(_clname);
}

int QConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QConsole::evals(QList<QConsoleWidgetCommand> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
