/****************************************************************************
** Meta object code from reading C++ file 'BrowseView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../Apper/BrowseView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BrowseView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BrowseView_t {
    QByteArrayData data[19];
    char stringdata0[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BrowseView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BrowseView_t qt_meta_stringdata_BrowseView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BrowseView"
QT_MOC_LITERAL(1, 11, 17), // "categoryActivated"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 42, 5), // "index"
QT_MOC_LITERAL(5, 48, 23), // "enableExportInstalledPB"
QT_MOC_LITERAL(6, 72, 12), // "showVersions"
QT_MOC_LITERAL(7, 85, 7), // "enabled"
QT_MOC_LITERAL(8, 93, 9), // "showArchs"
QT_MOC_LITERAL(9, 103, 11), // "showOrigins"
QT_MOC_LITERAL(10, 115, 9), // "showSizes"
QT_MOC_LITERAL(11, 125, 41), // "on_packageView_customContextM..."
QT_MOC_LITERAL(12, 167, 3), // "pos"
QT_MOC_LITERAL(13, 171, 22), // "on_packageView_clicked"
QT_MOC_LITERAL(14, 194, 13), // "ensureVisible"
QT_MOC_LITERAL(15, 208, 25), // "on_categoryMvLeft_clicked"
QT_MOC_LITERAL(16, 234, 26), // "on_categoryMvRight_clicked"
QT_MOC_LITERAL(17, 261, 28), // "on_exportInstalledPB_clicked"
QT_MOC_LITERAL(18, 290, 28) // "on_importInstalledPB_clicked"

    },
    "BrowseView\0categoryActivated\0\0QModelIndex\0"
    "index\0enableExportInstalledPB\0"
    "showVersions\0enabled\0showArchs\0"
    "showOrigins\0showSizes\0"
    "on_packageView_customContextMenuRequested\0"
    "pos\0on_packageView_clicked\0ensureVisible\0"
    "on_categoryMvLeft_clicked\0"
    "on_categoryMvRight_clicked\0"
    "on_exportInstalledPB_clicked\0"
    "on_importInstalledPB_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BrowseView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   82,    2, 0x0a /* Public */,
       6,    1,   83,    2, 0x08 /* Private */,
       8,    1,   86,    2, 0x08 /* Private */,
       9,    1,   89,    2, 0x08 /* Private */,
      10,    1,   92,    2, 0x08 /* Private */,
      11,    1,   95,    2, 0x08 /* Private */,
      13,    1,   98,    2, 0x08 /* Private */,
      14,    1,  101,    2, 0x08 /* Private */,
      15,    0,  104,    2, 0x08 /* Private */,
      16,    0,  105,    2, 0x08 /* Private */,
      17,    0,  106,    2, 0x08 /* Private */,
      18,    0,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QPoint,   12,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BrowseView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BrowseView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->categoryActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->enableExportInstalledPB(); break;
        case 2: _t->showVersions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->showArchs((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showOrigins((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->showSizes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_packageView_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: _t->on_packageView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->ensureVisible((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->on_categoryMvLeft_clicked(); break;
        case 10: _t->on_categoryMvRight_clicked(); break;
        case 11: _t->on_exportInstalledPB_clicked(); break;
        case 12: _t->on_importInstalledPB_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BrowseView::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowseView::categoryActivated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BrowseView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_BrowseView.data,
    qt_meta_data_BrowseView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BrowseView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BrowseView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BrowseView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::BrowseView"))
        return static_cast< Ui::BrowseView*>(this);
    return QWidget::qt_metacast(_clname);
}

int BrowseView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void BrowseView::categoryActivated(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
