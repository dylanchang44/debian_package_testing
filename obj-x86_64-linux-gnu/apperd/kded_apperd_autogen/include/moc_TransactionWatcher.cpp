/****************************************************************************
** Meta object code from reading C++ file 'TransactionWatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../apperd/TransactionWatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransactionWatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransactionWatcher_t {
    QByteArrayData data[27];
    char stringdata0[405];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransactionWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransactionWatcher_t qt_meta_stringdata_TransactionWatcher = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TransactionWatcher"
QT_MOC_LITERAL(1, 19, 27), // "watchTransactionInteractive"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(4, 64, 3), // "tid"
QT_MOC_LITERAL(5, 68, 16), // "watchTransaction"
QT_MOC_LITERAL(6, 85, 11), // "interactive"
QT_MOC_LITERAL(7, 97, 16), // "transactionReady"
QT_MOC_LITERAL(8, 114, 25), // "showRebootNotificationApt"
QT_MOC_LITERAL(9, 140, 22), // "transactionListChanged"
QT_MOC_LITERAL(10, 163, 4), // "tids"
QT_MOC_LITERAL(11, 168, 9), // "errorCode"
QT_MOC_LITERAL(12, 178, 30), // "PackageKit::Transaction::Error"
QT_MOC_LITERAL(13, 209, 14), // "errorActivated"
QT_MOC_LITERAL(14, 224, 6), // "action"
QT_MOC_LITERAL(15, 231, 14), // "requireRestart"
QT_MOC_LITERAL(16, 246, 32), // "PackageKit::Transaction::Restart"
QT_MOC_LITERAL(17, 279, 4), // "type"
QT_MOC_LITERAL(18, 284, 9), // "packageID"
QT_MOC_LITERAL(19, 294, 8), // "finished"
QT_MOC_LITERAL(20, 303, 29), // "PackageKit::Transaction::Exit"
QT_MOC_LITERAL(21, 333, 4), // "exit"
QT_MOC_LITERAL(22, 338, 18), // "transactionChanged"
QT_MOC_LITERAL(23, 357, 12), // "Transaction*"
QT_MOC_LITERAL(24, 370, 11), // "transaction"
QT_MOC_LITERAL(25, 382, 6), // "logout"
QT_MOC_LITERAL(26, 389, 15) // "watchedCanceled"

    },
    "TransactionWatcher\0watchTransactionInteractive\0"
    "\0QDBusObjectPath\0tid\0watchTransaction\0"
    "interactive\0transactionReady\0"
    "showRebootNotificationApt\0"
    "transactionListChanged\0tids\0errorCode\0"
    "PackageKit::Transaction::Error\0"
    "errorActivated\0action\0requireRestart\0"
    "PackageKit::Transaction::Restart\0type\0"
    "packageID\0finished\0PackageKit::Transaction::Exit\0"
    "exit\0transactionChanged\0Transaction*\0"
    "transaction\0logout\0watchedCanceled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransactionWatcher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x0a /* Public */,
       5,    2,   92,    2, 0x0a /* Public */,
       5,    1,   97,    2, 0x2a /* Public | MethodCloned */,
       7,    0,  100,    2, 0x0a /* Public */,
       8,    0,  101,    2, 0x0a /* Public */,
       9,    1,  102,    2, 0x08 /* Private */,
      11,    2,  105,    2, 0x08 /* Private */,
      13,    1,  110,    2, 0x08 /* Private */,
      15,    2,  113,    2, 0x08 /* Private */,
      19,    1,  118,    2, 0x08 /* Private */,
      22,    2,  121,    2, 0x08 /* Private */,
      22,    1,  126,    2, 0x28 /* Private | MethodCloned */,
      22,    0,  129,    2, 0x28 /* Private | MethodCloned */,
      25,    0,  130,    2, 0x08 /* Private */,
      26,    0,  131,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   10,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::UInt,   14,
    QMetaType::Void, 0x80000000 | 16, QMetaType::QString,   17,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 23, QMetaType::Bool,   24,    6,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TransactionWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TransactionWatcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->watchTransactionInteractive((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        case 1: _t->watchTransaction((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->watchTransaction((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        case 3: _t->transactionReady(); break;
        case 4: _t->showRebootNotificationApt(); break;
        case 5: _t->transactionListChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 6: _t->errorCode((*reinterpret_cast< PackageKit::Transaction::Error(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->errorActivated((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 8: _t->requireRestart((*reinterpret_cast< PackageKit::Transaction::Restart(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->finished((*reinterpret_cast< PackageKit::Transaction::Exit(*)>(_a[1]))); break;
        case 10: _t->transactionChanged((*reinterpret_cast< Transaction*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->transactionChanged((*reinterpret_cast< Transaction*(*)>(_a[1]))); break;
        case 12: _t->transactionChanged(); break;
        case 13: _t->logout(); break;
        case 14: _t->watchedCanceled(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Error >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Restart >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Exit >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Transaction* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Transaction* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TransactionWatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TransactionWatcher.data,
    qt_meta_data_TransactionWatcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TransactionWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransactionWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransactionWatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TransactionWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
