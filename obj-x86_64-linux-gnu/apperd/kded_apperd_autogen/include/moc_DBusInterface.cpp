/****************************************************************************
** Meta object code from reading C++ file 'DBusInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../apperd/DBusInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DBusInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DBusInterface_t {
    QByteArrayData data[10];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusInterface_t qt_meta_stringdata_DBusInterface = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DBusInterface"
QT_MOC_LITERAL(1, 14, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 30, 14), // "org.kde.apperd"
QT_MOC_LITERAL(3, 45, 12), // "refreshCache"
QT_MOC_LITERAL(4, 58, 0), // ""
QT_MOC_LITERAL(5, 59, 16), // "watchTransaction"
QT_MOC_LITERAL(6, 76, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(7, 92, 3), // "tid"
QT_MOC_LITERAL(8, 96, 15), // "debconfActivate"
QT_MOC_LITERAL(9, 112, 19) // "transactionFinished"

    },
    "DBusInterface\0D-Bus Interface\0"
    "org.kde.apperd\0refreshCache\0\0"
    "watchTransaction\0QDBusObjectPath\0tid\0"
    "debconfActivate\0transactionFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       4,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   36,    4, 0x06 /* Public */,
       5,    1,   37,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   40,    4, 0x08 /* Private */,
       9,    0,   41,    4, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DBusInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DBusInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refreshCache(); break;
        case 1: _t->watchTransaction((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        case 2: _t->debconfActivate(); break;
        case 3: _t->transactionFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DBusInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusInterface::refreshCache)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DBusInterface::*)(const QDBusObjectPath & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusInterface::watchTransaction)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DBusInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DBusInterface.data,
    qt_meta_data_DBusInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DBusInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DBusInterface.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    return QObject::qt_metacast(_clname);
}

int DBusInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void DBusInterface::refreshCache()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DBusInterface::watchTransaction(const QDBusObjectPath & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
