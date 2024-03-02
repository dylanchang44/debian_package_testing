/****************************************************************************
** Meta object code from reading C++ file 'PackageDetails.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../Apper/PackageDetails.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PackageDetails.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PackageDetails_t {
    QByteArrayData data[19];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PackageDetails_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PackageDetails_t qt_meta_stringdata_PackageDetails = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PackageDetails"
QT_MOC_LITERAL(1, 15, 13), // "ensureVisible"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 42, 5), // "index"
QT_MOC_LITERAL(5, 48, 4), // "hide"
QT_MOC_LITERAL(6, 53, 22), // "on_screenshotL_clicked"
QT_MOC_LITERAL(7, 76, 15), // "actionActivated"
QT_MOC_LITERAL(8, 92, 8), // "QAction*"
QT_MOC_LITERAL(9, 101, 6), // "action"
QT_MOC_LITERAL(10, 108, 11), // "description"
QT_MOC_LITERAL(11, 120, 19), // "PackageKit::Details"
QT_MOC_LITERAL(12, 140, 7), // "details"
QT_MOC_LITERAL(13, 148, 5), // "files"
QT_MOC_LITERAL(14, 154, 9), // "packageID"
QT_MOC_LITERAL(15, 164, 8), // "finished"
QT_MOC_LITERAL(16, 173, 9), // "resultJob"
QT_MOC_LITERAL(17, 183, 5), // "KJob*"
QT_MOC_LITERAL(18, 189, 7) // "display"

    },
    "PackageDetails\0ensureVisible\0\0QModelIndex\0"
    "index\0hide\0on_screenshotL_clicked\0"
    "actionActivated\0QAction*\0action\0"
    "description\0PackageKit::Details\0details\0"
    "files\0packageID\0finished\0resultJob\0"
    "KJob*\0display"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PackageDetails[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    1,   64,    2, 0x08 /* Private */,
      10,    1,   67,    2, 0x08 /* Private */,
      13,    2,   70,    2, 0x08 /* Private */,
      15,    0,   75,    2, 0x08 /* Private */,
      16,    1,   76,    2, 0x08 /* Private */,
      18,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   14,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void,

       0        // eod
};

void PackageDetails::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PackageDetails *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ensureVisible((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->hide(); break;
        case 2: _t->on_screenshotL_clicked(); break;
        case 3: _t->actionActivated((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->description((*reinterpret_cast< const PackageKit::Details(*)>(_a[1]))); break;
        case 5: _t->files((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 6: _t->finished(); break;
        case 7: _t->resultJob((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 8: _t->display(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PackageDetails::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageDetails::ensureVisible)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PackageDetails::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PackageDetails.data,
    qt_meta_data_PackageDetails,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PackageDetails::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PackageDetails::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PackageDetails.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PackageDetails::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void PackageDetails::ensureVisible(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
