/****************************************************************************
** Meta object code from reading C++ file 'PkInstallCatalogs.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../PkSession/PkInstallCatalogs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PkInstallCatalogs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PkInstallCatalogs_t {
    QByteArrayData data[6];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PkInstallCatalogs_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PkInstallCatalogs_t qt_meta_stringdata_PkInstallCatalogs = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PkInstallCatalogs"
QT_MOC_LITERAL(1, 18, 14), // "searchFinished"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 25), // "PkTransaction::ExitStatus"
QT_MOC_LITERAL(4, 60, 6), // "status"
QT_MOC_LITERAL(5, 67, 12) // "modelChanged"

    },
    "PkInstallCatalogs\0searchFinished\0\0"
    "PkTransaction::ExitStatus\0status\0"
    "modelChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PkInstallCatalogs[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x09 /* Protected */,
       5,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void PkInstallCatalogs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PkInstallCatalogs *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->searchFinished((*reinterpret_cast< PkTransaction::ExitStatus(*)>(_a[1]))); break;
        case 1: _t->modelChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PkInstallCatalogs::staticMetaObject = { {
    QMetaObject::SuperData::link<SessionTask::staticMetaObject>(),
    qt_meta_stringdata_PkInstallCatalogs.data,
    qt_meta_data_PkInstallCatalogs,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PkInstallCatalogs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PkInstallCatalogs::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PkInstallCatalogs.stringdata0))
        return static_cast<void*>(this);
    return SessionTask::qt_metacast(_clname);
}

int PkInstallCatalogs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SessionTask::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
