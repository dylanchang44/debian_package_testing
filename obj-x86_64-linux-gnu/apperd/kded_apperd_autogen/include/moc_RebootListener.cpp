/****************************************************************************
** Meta object code from reading C++ file 'RebootListener.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../apperd/RebootListener.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RebootListener.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AptRebootListener_t {
    QByteArrayData data[6];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AptRebootListener_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AptRebootListener_t qt_meta_stringdata_AptRebootListener = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AptRebootListener"
QT_MOC_LITERAL(1, 18, 13), // "requestReboot"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "checkForReboot"
QT_MOC_LITERAL(4, 48, 20), // "slotDirectoryChanged"
QT_MOC_LITERAL(5, 69, 4) // "path"

    },
    "AptRebootListener\0requestReboot\0\0"
    "checkForReboot\0slotDirectoryChanged\0"
    "path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AptRebootListener[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x0a /* Public */,
       4,    1,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void AptRebootListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AptRebootListener *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestReboot(); break;
        case 1: _t->checkForReboot(); break;
        case 2: _t->slotDirectoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AptRebootListener::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AptRebootListener::requestReboot)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AptRebootListener::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AptRebootListener.data,
    qt_meta_data_AptRebootListener,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AptRebootListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AptRebootListener::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AptRebootListener.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AptRebootListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void AptRebootListener::requestReboot()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
