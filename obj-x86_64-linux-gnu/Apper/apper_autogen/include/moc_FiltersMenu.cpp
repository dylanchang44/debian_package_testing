/****************************************************************************
** Meta object code from reading C++ file 'FiltersMenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../Apper/FiltersMenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FiltersMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FiltersMenu_t {
    QByteArrayData data[18];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FiltersMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FiltersMenu_t qt_meta_stringdata_FiltersMenu = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FiltersMenu"
QT_MOC_LITERAL(1, 12, 14), // "filtersChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 18), // "filterApplications"
QT_MOC_LITERAL(4, 47, 7), // "checked"
QT_MOC_LITERAL(5, 55, 17), // "enableCollections"
QT_MOC_LITERAL(6, 73, 6), // "enable"
QT_MOC_LITERAL(7, 80, 15), // "enableInstalled"
QT_MOC_LITERAL(8, 96, 7), // "enabled"
QT_MOC_LITERAL(9, 104, 17), // "enableDevelopment"
QT_MOC_LITERAL(10, 122, 15), // "enableGraphical"
QT_MOC_LITERAL(11, 138, 10), // "enableFree"
QT_MOC_LITERAL(12, 149, 15), // "enableSupported"
QT_MOC_LITERAL(13, 165, 12), // "enableSource"
QT_MOC_LITERAL(14, 178, 33), // "enableBasenameNewestArchSepar..."
QT_MOC_LITERAL(15, 212, 14), // "enableBasename"
QT_MOC_LITERAL(16, 227, 12), // "enableNewest"
QT_MOC_LITERAL(17, 240, 10) // "enableArch"

    },
    "FiltersMenu\0filtersChanged\0\0"
    "filterApplications\0checked\0enableCollections\0"
    "enable\0enableInstalled\0enabled\0"
    "enableDevelopment\0enableGraphical\0"
    "enableFree\0enableSupported\0enableSource\0"
    "enableBasenameNewestArchSeparator\0"
    "enableBasename\0enableNewest\0enableArch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FiltersMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    1,   80,    2, 0x06 /* Public */,
       5,    1,   83,    2, 0x06 /* Public */,
       7,    1,   86,    2, 0x06 /* Public */,
       9,    1,   89,    2, 0x06 /* Public */,
      10,    1,   92,    2, 0x06 /* Public */,
      11,    1,   95,    2, 0x06 /* Public */,
      12,    1,   98,    2, 0x06 /* Public */,
      13,    1,  101,    2, 0x06 /* Public */,
      14,    1,  104,    2, 0x06 /* Public */,
      15,    1,  107,    2, 0x06 /* Public */,
      16,    1,  110,    2, 0x06 /* Public */,
      17,    1,  113,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void FiltersMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FiltersMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->filtersChanged(); break;
        case 1: _t->filterApplications((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->enableCollections((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->enableInstalled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->enableDevelopment((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->enableGraphical((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->enableFree((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->enableSupported((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->enableSource((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->enableBasenameNewestArchSeparator((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->enableBasename((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->enableNewest((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->enableArch((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FiltersMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FiltersMenu::filtersChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FiltersMenu::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FiltersMenu::filterApplications)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FiltersMenu::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FiltersMenu::enableCollections)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FiltersMenu::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FiltersMenu::enableInstalled)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FiltersMenu::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FiltersMenu::enableDevelopment)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FiltersMenu::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FiltersMenu::enableGraphical)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FiltersMenu::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FiltersMenu::enableFree)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FiltersMenu::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FiltersMenu::enableSupported)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FiltersMenu::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FiltersMenu::enableSource)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FiltersMenu::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FiltersMenu::enableBasenameNewestArchSeparator)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (FiltersMenu::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FiltersMenu::enableBasename)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (FiltersMenu::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FiltersMenu::enableNewest)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (FiltersMenu::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FiltersMenu::enableArch)) {
                *result = 12;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FiltersMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_meta_stringdata_FiltersMenu.data,
    qt_meta_data_FiltersMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FiltersMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FiltersMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FiltersMenu.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int FiltersMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void FiltersMenu::filtersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FiltersMenu::filterApplications(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FiltersMenu::enableCollections(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FiltersMenu::enableInstalled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FiltersMenu::enableDevelopment(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FiltersMenu::enableGraphical(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FiltersMenu::enableFree(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FiltersMenu::enableSupported(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FiltersMenu::enableSource(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FiltersMenu::enableBasenameNewestArchSeparator(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FiltersMenu::enableBasename(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void FiltersMenu::enableNewest(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void FiltersMenu::enableArch(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
