/****************************************************************************
** Meta object code from reading C++ file 'TransactionJob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../apperd/TransactionJob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransactionJob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransactionJob_t {
    QByteArrayData data[15];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransactionJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransactionJob_t qt_meta_stringdata_TransactionJob = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TransactionJob"
QT_MOC_LITERAL(1, 15, 8), // "canceled"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "finished"
QT_MOC_LITERAL(4, 34, 29), // "PackageKit::Transaction::Exit"
QT_MOC_LITERAL(5, 64, 4), // "exit"
QT_MOC_LITERAL(6, 69, 7), // "package"
QT_MOC_LITERAL(7, 77, 29), // "PackageKit::Transaction::Info"
QT_MOC_LITERAL(8, 107, 4), // "info"
QT_MOC_LITERAL(9, 112, 9), // "packageID"
QT_MOC_LITERAL(10, 122, 7), // "summary"
QT_MOC_LITERAL(11, 130, 10), // "repoDetail"
QT_MOC_LITERAL(12, 141, 6), // "repoId"
QT_MOC_LITERAL(13, 148, 15), // "repoDescription"
QT_MOC_LITERAL(14, 164, 9) // "updateJob"

    },
    "TransactionJob\0canceled\0\0finished\0"
    "PackageKit::Transaction::Exit\0exit\0"
    "package\0PackageKit::Transaction::Info\0"
    "info\0packageID\0summary\0repoDetail\0"
    "repoId\0repoDescription\0updateJob"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransactionJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   45,    2, 0x08 /* Private */,
       3,    0,   48,    2, 0x28 /* Private | MethodCloned */,
       6,    3,   49,    2, 0x08 /* Private */,
      11,    2,   56,    2, 0x08 /* Private */,
      14,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString, QMetaType::QString,    8,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   13,
    QMetaType::Void,

       0        // eod
};

void TransactionJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TransactionJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->canceled(); break;
        case 1: _t->finished((*reinterpret_cast< PackageKit::Transaction::Exit(*)>(_a[1]))); break;
        case 2: _t->finished(); break;
        case 3: _t->package((*reinterpret_cast< PackageKit::Transaction::Info(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->repoDetail((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->updateJob(); break;
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
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Info >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TransactionJob::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransactionJob::canceled)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TransactionJob::staticMetaObject = { {
    QMetaObject::SuperData::link<KJob::staticMetaObject>(),
    qt_meta_stringdata_TransactionJob.data,
    qt_meta_data_TransactionJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TransactionJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransactionJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransactionJob.stringdata0))
        return static_cast<void*>(this);
    return KJob::qt_metacast(_clname);
}

int TransactionJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TransactionJob::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
