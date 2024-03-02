/****************************************************************************
** Meta object code from reading C++ file 'ApplicationSortFilterModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../libapper/ApplicationSortFilterModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ApplicationSortFilterModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ApplicationSortFilterModel_t {
    QByteArrayData data[13];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApplicationSortFilterModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApplicationSortFilterModel_t qt_meta_stringdata_ApplicationSortFilterModel = {
    {
QT_MOC_LITERAL(0, 0, 26), // "ApplicationSortFilterModel"
QT_MOC_LITERAL(1, 27, 7), // "changed"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13), // "setInfoFilter"
QT_MOC_LITERAL(4, 50, 17), // "Transaction::Info"
QT_MOC_LITERAL(5, 68, 4), // "info"
QT_MOC_LITERAL(6, 73, 20), // "setApplicationFilter"
QT_MOC_LITERAL(7, 94, 6), // "enable"
QT_MOC_LITERAL(8, 101, 7), // "sortNow"
QT_MOC_LITERAL(9, 109, 14), // "sourcePkgModel"
QT_MOC_LITERAL(10, 124, 13), // "PackageModel*"
QT_MOC_LITERAL(11, 138, 10), // "infoFilter"
QT_MOC_LITERAL(12, 149, 17) // "applicationFilter"

    },
    "ApplicationSortFilterModel\0changed\0\0"
    "setInfoFilter\0Transaction::Info\0info\0"
    "setApplicationFilter\0enable\0sortNow\0"
    "sourcePkgModel\0PackageModel*\0infoFilter\0"
    "applicationFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApplicationSortFilterModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x0a /* Public */,
       6,    1,   38,    2, 0x0a /* Public */,
       8,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,

 // properties: name, type, flags
       9, 0x80000000 | 10, 0x0049510b,
      11, 0x80000000 | 4, 0x0049510b,
      12, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,

       0        // eod
};

void ApplicationSortFilterModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ApplicationSortFilterModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->setInfoFilter((*reinterpret_cast< Transaction::Info(*)>(_a[1]))); break;
        case 2: _t->setApplicationFilter((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->sortNow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ApplicationSortFilterModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApplicationSortFilterModel::changed)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ApplicationSortFilterModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PackageModel**>(_v) = _t->sourcePkgModel(); break;
        case 1: *reinterpret_cast< Transaction::Info*>(_v) = _t->infoFilter(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->applicationFilter(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ApplicationSortFilterModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSourcePkgModel(*reinterpret_cast< PackageModel**>(_v)); break;
        case 1: _t->setInfoFilter(*reinterpret_cast< Transaction::Info*>(_v)); break;
        case 2: _t->setApplicationFilter(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_ApplicationSortFilterModel[] = {
    QMetaObject::SuperData::link<PackageKit::Transaction::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject ApplicationSortFilterModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_ApplicationSortFilterModel.data,
    qt_meta_data_ApplicationSortFilterModel,
    qt_static_metacall,
    qt_meta_extradata_ApplicationSortFilterModel,
    nullptr
} };


const QMetaObject *ApplicationSortFilterModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApplicationSortFilterModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ApplicationSortFilterModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int ApplicationSortFilterModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ApplicationSortFilterModel::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
