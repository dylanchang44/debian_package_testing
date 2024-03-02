/****************************************************************************
** Meta object code from reading C++ file 'UpdateDetails.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../Apper/Updater/UpdateDetails.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UpdateDetails.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UpdateDetails_t {
    QByteArrayData data[20];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UpdateDetails_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UpdateDetails_t qt_meta_stringdata_UpdateDetails = {
    {
QT_MOC_LITERAL(0, 0, 13), // "UpdateDetails"
QT_MOC_LITERAL(1, 14, 4), // "hide"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 12), // "updateDetail"
QT_MOC_LITERAL(4, 33, 9), // "packageID"
QT_MOC_LITERAL(5, 43, 7), // "updates"
QT_MOC_LITERAL(6, 51, 9), // "obsoletes"
QT_MOC_LITERAL(7, 61, 10), // "vendorUrls"
QT_MOC_LITERAL(8, 72, 12), // "bugzillaUrls"
QT_MOC_LITERAL(9, 85, 7), // "cveUrls"
QT_MOC_LITERAL(10, 93, 32), // "PackageKit::Transaction::Restart"
QT_MOC_LITERAL(11, 126, 7), // "restart"
QT_MOC_LITERAL(12, 134, 10), // "updateText"
QT_MOC_LITERAL(13, 145, 9), // "changelog"
QT_MOC_LITERAL(14, 155, 36), // "PackageKit::Transaction::Upda..."
QT_MOC_LITERAL(15, 192, 5), // "state"
QT_MOC_LITERAL(16, 198, 6), // "issued"
QT_MOC_LITERAL(17, 205, 7), // "updated"
QT_MOC_LITERAL(18, 213, 20), // "updateDetailFinished"
QT_MOC_LITERAL(19, 234, 7) // "display"

    },
    "UpdateDetails\0hide\0\0updateDetail\0"
    "packageID\0updates\0obsoletes\0vendorUrls\0"
    "bugzillaUrls\0cveUrls\0"
    "PackageKit::Transaction::Restart\0"
    "restart\0updateText\0changelog\0"
    "PackageKit::Transaction::UpdateState\0"
    "state\0issued\0updated\0updateDetailFinished\0"
    "display"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UpdateDetails[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,   12,   35,    2, 0x08 /* Private */,
      18,    0,   60,    2, 0x08 /* Private */,
      19,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, QMetaType::QStringList, QMetaType::QStringList, QMetaType::QStringList, QMetaType::QStringList, 0x80000000 | 10, QMetaType::QString, QMetaType::QString, 0x80000000 | 14, QMetaType::QDateTime, QMetaType::QDateTime,    4,    5,    6,    7,    8,    9,   11,   12,   13,   15,   16,   17,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UpdateDetails::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdateDetails *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->hide(); break;
        case 1: _t->updateDetail((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< const QStringList(*)>(_a[4])),(*reinterpret_cast< const QStringList(*)>(_a[5])),(*reinterpret_cast< const QStringList(*)>(_a[6])),(*reinterpret_cast< PackageKit::Transaction::Restart(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])),(*reinterpret_cast< const QString(*)>(_a[9])),(*reinterpret_cast< PackageKit::Transaction::UpdateState(*)>(_a[10])),(*reinterpret_cast< const QDateTime(*)>(_a[11])),(*reinterpret_cast< const QDateTime(*)>(_a[12]))); break;
        case 2: _t->updateDetailFinished(); break;
        case 3: _t->display(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 6:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Restart >(); break;
            case 9:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::UpdateState >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UpdateDetails::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_UpdateDetails.data,
    qt_meta_data_UpdateDetails,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UpdateDetails::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpdateDetails::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UpdateDetails.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::UpdateDetails"))
        return static_cast< Ui::UpdateDetails*>(this);
    return QWidget::qt_metacast(_clname);
}

int UpdateDetails::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
