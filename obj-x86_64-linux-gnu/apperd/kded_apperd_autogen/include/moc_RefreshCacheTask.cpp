/****************************************************************************
** Meta object code from reading C++ file 'RefreshCacheTask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../apperd/RefreshCacheTask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RefreshCacheTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RefreshCacheTask_t {
    QByteArrayData data[12];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RefreshCacheTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RefreshCacheTask_t qt_meta_stringdata_RefreshCacheTask = {
    {
QT_MOC_LITERAL(0, 0, 16), // "RefreshCacheTask"
QT_MOC_LITERAL(1, 17, 12), // "refreshCache"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 20), // "refreshCacheFinished"
QT_MOC_LITERAL(4, 52, 29), // "PackageKit::Transaction::Exit"
QT_MOC_LITERAL(5, 82, 6), // "status"
QT_MOC_LITERAL(6, 89, 7), // "runtime"
QT_MOC_LITERAL(7, 97, 9), // "errorCode"
QT_MOC_LITERAL(8, 107, 30), // "PackageKit::Transaction::Error"
QT_MOC_LITERAL(9, 138, 5), // "error"
QT_MOC_LITERAL(10, 144, 12), // "errorMessage"
QT_MOC_LITERAL(11, 157, 18) // "notificationClosed"

    },
    "RefreshCacheTask\0refreshCache\0\0"
    "refreshCacheFinished\0PackageKit::Transaction::Exit\0"
    "status\0runtime\0errorCode\0"
    "PackageKit::Transaction::Error\0error\0"
    "errorMessage\0notificationClosed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RefreshCacheTask[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    2,   35,    2, 0x08 /* Private */,
       7,    2,   40,    2, 0x08 /* Private */,
      11,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::UInt,    5,    6,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   10,
    QMetaType::Void,

       0        // eod
};

void RefreshCacheTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RefreshCacheTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refreshCache(); break;
        case 1: _t->refreshCacheFinished((*reinterpret_cast< PackageKit::Transaction::Exit(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 2: _t->errorCode((*reinterpret_cast< PackageKit::Transaction::Error(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->notificationClosed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Exit >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Error >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RefreshCacheTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RefreshCacheTask.data,
    qt_meta_data_RefreshCacheTask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RefreshCacheTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RefreshCacheTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RefreshCacheTask.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RefreshCacheTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
