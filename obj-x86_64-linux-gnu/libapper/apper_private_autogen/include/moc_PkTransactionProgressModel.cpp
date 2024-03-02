/****************************************************************************
** Meta object code from reading C++ file 'PkTransactionProgressModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../libapper/PkTransactionProgressModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PkTransactionProgressModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PkTransactionProgressModel_t {
    QByteArrayData data[16];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PkTransactionProgressModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PkTransactionProgressModel_t qt_meta_stringdata_PkTransactionProgressModel = {
    {
QT_MOC_LITERAL(0, 0, 26), // "PkTransactionProgressModel"
QT_MOC_LITERAL(1, 27, 14), // "currentPackage"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 29), // "PackageKit::Transaction::Info"
QT_MOC_LITERAL(4, 73, 4), // "info"
QT_MOC_LITERAL(5, 78, 9), // "packageID"
QT_MOC_LITERAL(6, 88, 7), // "summary"
QT_MOC_LITERAL(7, 96, 11), // "currentRepo"
QT_MOC_LITERAL(8, 108, 6), // "repoId"
QT_MOC_LITERAL(9, 115, 11), // "description"
QT_MOC_LITERAL(10, 127, 7), // "enabled"
QT_MOC_LITERAL(11, 135, 12), // "itemProgress"
QT_MOC_LITERAL(12, 148, 2), // "id"
QT_MOC_LITERAL(13, 151, 31), // "PackageKit::Transaction::Status"
QT_MOC_LITERAL(14, 183, 6), // "status"
QT_MOC_LITERAL(15, 190, 10) // "percentage"

    },
    "PkTransactionProgressModel\0currentPackage\0"
    "\0PackageKit::Transaction::Info\0info\0"
    "packageID\0summary\0currentRepo\0repoId\0"
    "description\0enabled\0itemProgress\0id\0"
    "PackageKit::Transaction::Status\0status\0"
    "percentage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PkTransactionProgressModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x0a /* Public */,
       7,    3,   36,    2, 0x0a /* Public */,
      11,    3,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    4,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    8,    9,   10,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 13, QMetaType::UInt,   12,   14,   15,

       0        // eod
};

void PkTransactionProgressModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PkTransactionProgressModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentPackage((*reinterpret_cast< PackageKit::Transaction::Info(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->currentRepo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->itemProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< PackageKit::Transaction::Status(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Info >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Status >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PkTransactionProgressModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QStandardItemModel::staticMetaObject>(),
    qt_meta_stringdata_PkTransactionProgressModel.data,
    qt_meta_data_PkTransactionProgressModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PkTransactionProgressModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PkTransactionProgressModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PkTransactionProgressModel.stringdata0))
        return static_cast<void*>(this);
    return QStandardItemModel::qt_metacast(_clname);
}

int PkTransactionProgressModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
