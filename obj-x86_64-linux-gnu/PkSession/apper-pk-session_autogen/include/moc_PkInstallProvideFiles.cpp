/****************************************************************************
** Meta object code from reading C++ file 'PkInstallProvideFiles.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../PkSession/PkInstallProvideFiles.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PkInstallProvideFiles.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PkInstallProvideFiles_t {
    QByteArrayData data[7];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PkInstallProvideFiles_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PkInstallProvideFiles_t qt_meta_stringdata_PkInstallProvideFiles = {
    {
QT_MOC_LITERAL(0, 0, 21), // "PkInstallProvideFiles"
QT_MOC_LITERAL(1, 22, 10), // "addPackage"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 29), // "PackageKit::Transaction::Info"
QT_MOC_LITERAL(4, 64, 4), // "info"
QT_MOC_LITERAL(5, 69, 9), // "packageID"
QT_MOC_LITERAL(6, 79, 7) // "summary"

    },
    "PkInstallProvideFiles\0addPackage\0\0"
    "PackageKit::Transaction::Info\0info\0"
    "packageID\0summary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PkInstallProvideFiles[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    4,    5,    6,

       0        // eod
};

void PkInstallProvideFiles::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PkInstallProvideFiles *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addPackage((*reinterpret_cast< PackageKit::Transaction::Info(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
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
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PkInstallProvideFiles::staticMetaObject = { {
    QMetaObject::SuperData::link<SessionTask::staticMetaObject>(),
    qt_meta_stringdata_PkInstallProvideFiles.data,
    qt_meta_data_PkInstallProvideFiles,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PkInstallProvideFiles::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PkInstallProvideFiles::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PkInstallProvideFiles.stringdata0))
        return static_cast<void*>(this);
    return SessionTask::qt_metacast(_clname);
}

int PkInstallProvideFiles::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SessionTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
