/****************************************************************************
** Meta object code from reading C++ file 'PkTransactionWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../libapper/PkTransactionWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PkTransactionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PkTransactionWidget_t {
    QByteArrayData data[22];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PkTransactionWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PkTransactionWidget_t qt_meta_stringdata_PkTransactionWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PkTransactionWidget"
QT_MOC_LITERAL(1, 20, 11), // "allowCancel"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 6), // "enable"
QT_MOC_LITERAL(4, 40, 12), // "titleChanged"
QT_MOC_LITERAL(5, 53, 5), // "title"
QT_MOC_LITERAL(6, 59, 20), // "titleChangedProgress"
QT_MOC_LITERAL(7, 80, 6), // "dialog"
QT_MOC_LITERAL(8, 87, 8), // "QDialog*"
QT_MOC_LITERAL(9, 96, 6), // "widget"
QT_MOC_LITERAL(10, 103, 5), // "sorry"
QT_MOC_LITERAL(11, 109, 4), // "text"
QT_MOC_LITERAL(12, 114, 7), // "details"
QT_MOC_LITERAL(13, 122, 5), // "error"
QT_MOC_LITERAL(14, 128, 6), // "cancel"
QT_MOC_LITERAL(15, 135, 8), // "updateUi"
QT_MOC_LITERAL(16, 144, 6), // "reject"
QT_MOC_LITERAL(17, 151, 12), // "followBottom"
QT_MOC_LITERAL(18, 164, 5), // "value"
QT_MOC_LITERAL(19, 170, 12), // "rangeChanged"
QT_MOC_LITERAL(20, 183, 3), // "min"
QT_MOC_LITERAL(21, 187, 3) // "max"

    },
    "PkTransactionWidget\0allowCancel\0\0"
    "enable\0titleChanged\0title\0"
    "titleChangedProgress\0dialog\0QDialog*\0"
    "widget\0sorry\0text\0details\0error\0cancel\0"
    "updateUi\0reject\0followBottom\0value\0"
    "rangeChanged\0min\0max"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PkTransactionWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       6,    1,   75,    2, 0x06 /* Public */,
       7,    1,   78,    2, 0x06 /* Public */,
      10,    3,   81,    2, 0x06 /* Public */,
      13,    3,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   95,    2, 0x0a /* Public */,
      15,    0,   96,    2, 0x08 /* Private */,
      16,    0,   97,    2, 0x08 /* Private */,
      17,    1,   98,    2, 0x08 /* Private */,
      19,    2,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,   11,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   20,   21,

       0        // eod
};

void PkTransactionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PkTransactionWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->allowCancel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->titleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->titleChangedProgress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->dialog((*reinterpret_cast< QDialog*(*)>(_a[1]))); break;
        case 4: _t->sorry((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: _t->cancel(); break;
        case 7: _t->updateUi(); break;
        case 8: _t->reject(); break;
        case 9: _t->followBottom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->rangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDialog* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PkTransactionWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransactionWidget::allowCancel)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PkTransactionWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransactionWidget::titleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PkTransactionWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransactionWidget::titleChangedProgress)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PkTransactionWidget::*)(QDialog * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransactionWidget::dialog)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PkTransactionWidget::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransactionWidget::sorry)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PkTransactionWidget::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransactionWidget::error)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PkTransactionWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PkTransactionWidget.data,
    qt_meta_data_PkTransactionWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PkTransactionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PkTransactionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PkTransactionWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PkTransactionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void PkTransactionWidget::allowCancel(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PkTransactionWidget::titleChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PkTransactionWidget::titleChangedProgress(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PkTransactionWidget::dialog(QDialog * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PkTransactionWidget::sorry(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PkTransactionWidget::error(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
