/****************************************************************************
** Meta object code from reading C++ file 'PackageModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../libapper/PackageModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PackageModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PackageModel_t {
    QByteArrayData data[56];
    char stringdata0[832];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PackageModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PackageModel_t qt_meta_stringdata_PackageModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PackageModel"
QT_MOC_LITERAL(1, 13, 7), // "changed"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "value"
QT_MOC_LITERAL(4, 28, 16), // "packageUnchecked"
QT_MOC_LITERAL(5, 45, 9), // "packageID"
QT_MOC_LITERAL(6, 55, 28), // "addSelectedPackagesFromModel"
QT_MOC_LITERAL(7, 84, 13), // "PackageModel*"
QT_MOC_LITERAL(8, 98, 5), // "model"
QT_MOC_LITERAL(9, 104, 21), // "addNotSelectedPackage"
QT_MOC_LITERAL(10, 126, 29), // "PackageKit::Transaction::Info"
QT_MOC_LITERAL(11, 156, 4), // "info"
QT_MOC_LITERAL(12, 161, 7), // "summary"
QT_MOC_LITERAL(13, 169, 10), // "addPackage"
QT_MOC_LITERAL(14, 180, 8), // "selected"
QT_MOC_LITERAL(15, 189, 18), // "addSelectedPackage"
QT_MOC_LITERAL(16, 208, 13), // "removePackage"
QT_MOC_LITERAL(17, 222, 8), // "checkAll"
QT_MOC_LITERAL(18, 231, 13), // "setAllChecked"
QT_MOC_LITERAL(19, 245, 7), // "checked"
QT_MOC_LITERAL(20, 253, 12), // "checkPackage"
QT_MOC_LITERAL(21, 266, 29), // "PackageModel::InternalPackage"
QT_MOC_LITERAL(22, 296, 7), // "package"
QT_MOC_LITERAL(23, 304, 15), // "emitDataChanged"
QT_MOC_LITERAL(24, 320, 10), // "uncheckAll"
QT_MOC_LITERAL(25, 331, 21), // "uncheckPackageDefault"
QT_MOC_LITERAL(26, 353, 14), // "uncheckPackage"
QT_MOC_LITERAL(27, 368, 18), // "forceEmitUnchecked"
QT_MOC_LITERAL(28, 387, 19), // "uncheckPackageLogic"
QT_MOC_LITERAL(29, 407, 10), // "hasChanges"
QT_MOC_LITERAL(30, 418, 9), // "countInfo"
QT_MOC_LITERAL(31, 428, 24), // "uncheckInstalledPackages"
QT_MOC_LITERAL(32, 453, 24), // "uncheckAvailablePackages"
QT_MOC_LITERAL(33, 478, 8), // "finished"
QT_MOC_LITERAL(34, 487, 10), // "fetchSizes"
QT_MOC_LITERAL(35, 498, 18), // "fetchSizesFinished"
QT_MOC_LITERAL(36, 517, 10), // "updateSize"
QT_MOC_LITERAL(37, 528, 19), // "PackageKit::Details"
QT_MOC_LITERAL(38, 548, 7), // "details"
QT_MOC_LITERAL(39, 556, 20), // "fetchCurrentVersions"
QT_MOC_LITERAL(40, 577, 28), // "fetchCurrentVersionsFinished"
QT_MOC_LITERAL(41, 606, 20), // "updateCurrentVersion"
QT_MOC_LITERAL(42, 627, 10), // "getUpdates"
QT_MOC_LITERAL(43, 638, 15), // "toggleSelection"
QT_MOC_LITERAL(44, 654, 18), // "selectionStateText"
QT_MOC_LITERAL(45, 673, 8), // "rowCount"
QT_MOC_LITERAL(46, 682, 11), // "QModelIndex"
QT_MOC_LITERAL(47, 694, 6), // "parent"
QT_MOC_LITERAL(48, 701, 11), // "allSelected"
QT_MOC_LITERAL(49, 713, 25), // "selectedPackagesToInstall"
QT_MOC_LITERAL(50, 739, 24), // "selectedPackagesToRemove"
QT_MOC_LITERAL(51, 764, 16), // "packagesWithInfo"
QT_MOC_LITERAL(52, 781, 10), // "packageIDs"
QT_MOC_LITERAL(53, 792, 5), // "clear"
QT_MOC_LITERAL(54, 798, 23), // "clearSelectedNotPresent"
QT_MOC_LITERAL(55, 822, 9) // "checkable"

    },
    "PackageModel\0changed\0\0value\0"
    "packageUnchecked\0packageID\0"
    "addSelectedPackagesFromModel\0PackageModel*\0"
    "model\0addNotSelectedPackage\0"
    "PackageKit::Transaction::Info\0info\0"
    "summary\0addPackage\0selected\0"
    "addSelectedPackage\0removePackage\0"
    "checkAll\0setAllChecked\0checked\0"
    "checkPackage\0PackageModel::InternalPackage\0"
    "package\0emitDataChanged\0uncheckAll\0"
    "uncheckPackageDefault\0uncheckPackage\0"
    "forceEmitUnchecked\0uncheckPackageLogic\0"
    "hasChanges\0countInfo\0uncheckInstalledPackages\0"
    "uncheckAvailablePackages\0finished\0"
    "fetchSizes\0fetchSizesFinished\0updateSize\0"
    "PackageKit::Details\0details\0"
    "fetchCurrentVersions\0fetchCurrentVersionsFinished\0"
    "updateCurrentVersion\0getUpdates\0"
    "toggleSelection\0selectionStateText\0"
    "rowCount\0QModelIndex\0parent\0allSelected\0"
    "selectedPackagesToInstall\0"
    "selectedPackagesToRemove\0packagesWithInfo\0"
    "packageIDs\0clear\0clearSelectedNotPresent\0"
    "checkable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PackageModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      43,   14, // methods
       2,  360, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  229,    2, 0x06 /* Public */,
       4,    1,  232,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,  235,    2, 0x0a /* Public */,
       9,    3,  238,    2, 0x0a /* Public */,
      13,    4,  245,    2, 0x0a /* Public */,
      13,    3,  254,    2, 0x2a /* Public | MethodCloned */,
      15,    3,  261,    2, 0x0a /* Public */,
      16,    1,  268,    2, 0x0a /* Public */,
      17,    0,  271,    2, 0x0a /* Public */,
      18,    1,  272,    2, 0x0a /* Public */,
      20,    2,  275,    2, 0x0a /* Public */,
      20,    1,  280,    2, 0x2a /* Public | MethodCloned */,
      24,    0,  283,    2, 0x0a /* Public */,
      25,    1,  284,    2, 0x0a /* Public */,
      26,    3,  287,    2, 0x0a /* Public */,
      26,    2,  294,    2, 0x2a /* Public | MethodCloned */,
      26,    1,  299,    2, 0x2a /* Public | MethodCloned */,
      28,    3,  302,    2, 0x0a /* Public */,
      28,    2,  309,    2, 0x2a /* Public | MethodCloned */,
      28,    1,  314,    2, 0x2a /* Public | MethodCloned */,
      29,    0,  317,    2, 0x0a /* Public */,
      30,    1,  318,    2, 0x0a /* Public */,
      31,    0,  321,    2, 0x0a /* Public */,
      32,    0,  322,    2, 0x0a /* Public */,
      33,    0,  323,    2, 0x0a /* Public */,
      34,    0,  324,    2, 0x0a /* Public */,
      35,    0,  325,    2, 0x0a /* Public */,
      36,    1,  326,    2, 0x0a /* Public */,
      39,    0,  329,    2, 0x0a /* Public */,
      40,    0,  330,    2, 0x0a /* Public */,
      41,    3,  331,    2, 0x0a /* Public */,
      42,    2,  338,    2, 0x0a /* Public */,
      43,    1,  343,    2, 0x0a /* Public */,
      44,    0,  346,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      45,    1,  347,    2, 0x02 /* Public */,
      45,    0,  350,    2, 0x22 /* Public | MethodCloned */,
      48,    0,  351,    2, 0x02 /* Public */,
      49,    0,  352,    2, 0x02 /* Public */,
      50,    0,  353,    2, 0x02 /* Public */,
      51,    1,  354,    2, 0x02 /* Public */,
      52,    0,  357,    2, 0x02 /* Public */,
      53,    0,  358,    2, 0x02 /* Public */,
      54,    0,  359,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString, QMetaType::QString,   11,    5,   12,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   11,    5,   12,   14,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString, QMetaType::QString,   11,    5,   12,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString, QMetaType::QString,   11,    5,   12,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, 0x80000000 | 21, QMetaType::Bool,   22,   23,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    5,   27,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    5,   27,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    5,   27,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    5,   27,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Bool,
    QMetaType::Int, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString, QMetaType::QString,   11,    5,   12,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   39,   14,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QString,

 // methods: parameters
    QMetaType::Int, 0x80000000 | 46,   47,
    QMetaType::Int,
    QMetaType::Bool,
    QMetaType::QStringList,
    QMetaType::QStringList,
    QMetaType::QStringList, 0x80000000 | 10,   11,
    QMetaType::QStringList,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      55, QMetaType::Bool, 0x00495103,
      44, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void PackageModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PackageModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->packageUnchecked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->addSelectedPackagesFromModel((*reinterpret_cast< PackageModel*(*)>(_a[1]))); break;
        case 3: _t->addNotSelectedPackage((*reinterpret_cast< PackageKit::Transaction::Info(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->addPackage((*reinterpret_cast< PackageKit::Transaction::Info(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 5: _t->addPackage((*reinterpret_cast< PackageKit::Transaction::Info(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: _t->addSelectedPackage((*reinterpret_cast< PackageKit::Transaction::Info(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: _t->removePackage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->checkAll(); break;
        case 9: _t->setAllChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->checkPackage((*reinterpret_cast< const PackageModel::InternalPackage(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->checkPackage((*reinterpret_cast< const PackageModel::InternalPackage(*)>(_a[1]))); break;
        case 12: _t->uncheckAll(); break;
        case 13: _t->uncheckPackageDefault((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->uncheckPackage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 15: _t->uncheckPackage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: _t->uncheckPackage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->uncheckPackageLogic((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 18: _t->uncheckPackageLogic((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: _t->uncheckPackageLogic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: { bool _r = _t->hasChanges();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: { int _r = _t->countInfo((*reinterpret_cast< PackageKit::Transaction::Info(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->uncheckInstalledPackages(); break;
        case 23: _t->uncheckAvailablePackages(); break;
        case 24: _t->finished(); break;
        case 25: _t->fetchSizes(); break;
        case 26: _t->fetchSizesFinished(); break;
        case 27: _t->updateSize((*reinterpret_cast< const PackageKit::Details(*)>(_a[1]))); break;
        case 28: _t->fetchCurrentVersions(); break;
        case 29: _t->fetchCurrentVersionsFinished(); break;
        case 30: _t->updateCurrentVersion((*reinterpret_cast< PackageKit::Transaction::Info(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 31: _t->getUpdates((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 32: _t->toggleSelection((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: { QString _r = _t->selectionStateText();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 34: { int _r = _t->rowCount((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 35: { int _r = _t->rowCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 36: { bool _r = _t->allSelected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 37: { QStringList _r = _t->selectedPackagesToInstall();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 38: { QStringList _r = _t->selectedPackagesToRemove();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 39: { QStringList _r = _t->packagesWithInfo((*reinterpret_cast< PackageKit::Transaction::Info(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 40: { QStringList _r = _t->packageIDs();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 41: _t->clear(); break;
        case 42: _t->clearSelectedNotPresent(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageModel* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Info >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Info >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Info >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Info >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Info >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Info >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Info >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PackageModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageModel::changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PackageModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageModel::packageUnchecked)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PackageModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->checkable(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->selectionStateText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PackageModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCheckable(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PackageModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_PackageModel.data,
    qt_meta_data_PackageModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PackageModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PackageModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PackageModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int PackageModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PackageModel::changed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PackageModel::packageUnchecked(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
