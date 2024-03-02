/****************************************************************************
** Meta object code from reading C++ file 'Updater.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../apperd/Updater.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Updater.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Updater_t {
    QByteArrayData data[19];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Updater_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Updater_t qt_meta_stringdata_Updater = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Updater"
QT_MOC_LITERAL(1, 8, 15), // "checkForUpdates"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "systemReady"
QT_MOC_LITERAL(4, 37, 15), // "packageToUpdate"
QT_MOC_LITERAL(5, 53, 29), // "PackageKit::Transaction::Info"
QT_MOC_LITERAL(6, 83, 4), // "info"
QT_MOC_LITERAL(7, 88, 9), // "packageID"
QT_MOC_LITERAL(8, 98, 7), // "summary"
QT_MOC_LITERAL(9, 106, 17), // "getUpdateFinished"
QT_MOC_LITERAL(10, 124, 19), // "autoUpdatesFinished"
QT_MOC_LITERAL(11, 144, 25), // "PkTransaction::ExitStatus"
QT_MOC_LITERAL(12, 170, 4), // "exit"
QT_MOC_LITERAL(13, 175, 13), // "reviewUpdates"
QT_MOC_LITERAL(14, 189, 14), // "installUpdates"
QT_MOC_LITERAL(15, 204, 19), // "serviceOwnerChanged"
QT_MOC_LITERAL(16, 224, 7), // "service"
QT_MOC_LITERAL(17, 232, 8), // "oldOwner"
QT_MOC_LITERAL(18, 241, 8) // "newOwner"

    },
    "Updater\0checkForUpdates\0\0systemReady\0"
    "packageToUpdate\0PackageKit::Transaction::Info\0"
    "info\0packageID\0summary\0getUpdateFinished\0"
    "autoUpdatesFinished\0PkTransaction::ExitStatus\0"
    "exit\0reviewUpdates\0installUpdates\0"
    "serviceOwnerChanged\0service\0oldOwner\0"
    "newOwner"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Updater[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    3,   52,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,
      10,    1,   60,    2, 0x08 /* Private */,
      13,    0,   63,    2, 0x08 /* Private */,
      14,    0,   64,    2, 0x08 /* Private */,
      15,    3,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString, QMetaType::QString,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   16,   17,   18,

       0        // eod
};

void Updater::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Updater *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->checkForUpdates((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->packageToUpdate((*reinterpret_cast< PackageKit::Transaction::Info(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->getUpdateFinished(); break;
        case 3: _t->autoUpdatesFinished((*reinterpret_cast< PkTransaction::ExitStatus(*)>(_a[1]))); break;
        case 4: _t->reviewUpdates(); break;
        case 5: _t->installUpdates(); break;
        case 6: _t->serviceOwnerChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Info >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Updater::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Updater.data,
    qt_meta_data_Updater,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Updater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Updater::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Updater.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Updater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
