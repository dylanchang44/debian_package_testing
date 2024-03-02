/****************************************************************************
** Meta object code from reading C++ file 'DistroUpgrade.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../apperd/DistroUpgrade.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DistroUpgrade.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DistroUpgrade_t {
    QByteArrayData data[21];
    char stringdata0[320];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DistroUpgrade_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DistroUpgrade_t qt_meta_stringdata_DistroUpgrade = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DistroUpgrade"
QT_MOC_LITERAL(1, 14, 19), // "checkDistroUpgrades"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "distroUpgrade"
QT_MOC_LITERAL(4, 49, 38), // "PackageKit::Transaction::Dist..."
QT_MOC_LITERAL(5, 88, 4), // "type"
QT_MOC_LITERAL(6, 93, 4), // "name"
QT_MOC_LITERAL(7, 98, 11), // "description"
QT_MOC_LITERAL(8, 110, 19), // "checkDistroFinished"
QT_MOC_LITERAL(9, 130, 29), // "PackageKit::Transaction::Exit"
QT_MOC_LITERAL(10, 160, 6), // "status"
QT_MOC_LITERAL(11, 167, 8), // "enlapsed"
QT_MOC_LITERAL(12, 176, 25), // "handleDistroUpgradeAction"
QT_MOC_LITERAL(13, 202, 6), // "action"
QT_MOC_LITERAL(14, 209, 18), // "distroUpgradeError"
QT_MOC_LITERAL(15, 228, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(16, 251, 5), // "error"
QT_MOC_LITERAL(17, 257, 21), // "distroUpgradeFinished"
QT_MOC_LITERAL(18, 279, 8), // "exitCode"
QT_MOC_LITERAL(19, 288, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(20, 309, 10) // "exitStatus"

    },
    "DistroUpgrade\0checkDistroUpgrades\0\0"
    "distroUpgrade\0PackageKit::Transaction::DistroUpgrade\0"
    "type\0name\0description\0checkDistroFinished\0"
    "PackageKit::Transaction::Exit\0status\0"
    "enlapsed\0handleDistroUpgradeAction\0"
    "action\0distroUpgradeError\0"
    "QProcess::ProcessError\0error\0"
    "distroUpgradeFinished\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DistroUpgrade[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    3,   45,    2, 0x08 /* Private */,
       8,    2,   52,    2, 0x08 /* Private */,
      12,    1,   57,    2, 0x08 /* Private */,
      14,    1,   60,    2, 0x08 /* Private */,
      17,    2,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString, QMetaType::QString,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::UInt,   10,   11,
    QMetaType::Void, QMetaType::UInt,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 19,   18,   20,

       0        // eod
};

void DistroUpgrade::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DistroUpgrade *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->checkDistroUpgrades(); break;
        case 1: _t->distroUpgrade((*reinterpret_cast< PackageKit::Transaction::DistroUpgrade(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->checkDistroFinished((*reinterpret_cast< PackageKit::Transaction::Exit(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 3: _t->handleDistroUpgradeAction((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->distroUpgradeError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 5: _t->distroUpgradeFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::DistroUpgrade >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Exit >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DistroUpgrade::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DistroUpgrade.data,
    qt_meta_data_DistroUpgrade,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DistroUpgrade::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DistroUpgrade::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DistroUpgrade.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DistroUpgrade::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
