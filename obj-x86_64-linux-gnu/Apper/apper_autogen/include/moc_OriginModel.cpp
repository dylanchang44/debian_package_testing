/****************************************************************************
** Meta object code from reading C++ file 'OriginModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../Apper/Settings/OriginModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OriginModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OriginModel_t {
    QByteArrayData data[14];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OriginModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OriginModel_t qt_meta_stringdata_OriginModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OriginModel"
QT_MOC_LITERAL(1, 12, 15), // "refreshRepoList"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "addOriginItem"
QT_MOC_LITERAL(4, 43, 7), // "repo_id"
QT_MOC_LITERAL(5, 51, 7), // "details"
QT_MOC_LITERAL(6, 59, 7), // "enabled"
QT_MOC_LITERAL(7, 67, 8), // "finished"
QT_MOC_LITERAL(8, 76, 9), // "errorCode"
QT_MOC_LITERAL(9, 86, 30), // "PackageKit::Transaction::Error"
QT_MOC_LITERAL(10, 117, 5), // "error"
QT_MOC_LITERAL(11, 123, 15), // "setRepoFinished"
QT_MOC_LITERAL(12, 139, 29), // "PackageKit::Transaction::Exit"
QT_MOC_LITERAL(13, 169, 4) // "exit"

    },
    "OriginModel\0refreshRepoList\0\0addOriginItem\0"
    "repo_id\0details\0enabled\0finished\0"
    "errorCode\0PackageKit::Transaction::Error\0"
    "error\0setRepoFinished\0"
    "PackageKit::Transaction::Exit\0exit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OriginModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    3,   40,    2, 0x0a /* Public */,
       7,    0,   47,    2, 0x0a /* Public */,
       8,    2,   48,    2, 0x08 /* Private */,
      11,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,   10,    5,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void OriginModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OriginModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refreshRepoList(); break;
        case 1: _t->addOriginItem((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->finished(); break;
        case 3: _t->errorCode((*reinterpret_cast< PackageKit::Transaction::Error(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->setRepoFinished((*reinterpret_cast< PackageKit::Transaction::Exit(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Error >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Exit >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OriginModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OriginModel::refreshRepoList)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OriginModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QStandardItemModel::staticMetaObject>(),
    qt_meta_stringdata_OriginModel.data,
    qt_meta_data_OriginModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OriginModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OriginModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OriginModel.stringdata0))
        return static_cast<void*>(this);
    return QStandardItemModel::qt_metacast(_clname);
}

int OriginModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OriginModel::refreshRepoList()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
