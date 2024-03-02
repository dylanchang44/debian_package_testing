/****************************************************************************
** Meta object code from reading C++ file 'apperd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../apperd/apperd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'apperd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ApperD_t {
    QByteArrayData data[1];
    char stringdata0[7];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApperD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApperD_t qt_meta_stringdata_ApperD = {
    {
QT_MOC_LITERAL(0, 0, 6) // "ApperD"

    },
    "ApperD"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApperD[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ApperD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ApperD::staticMetaObject = { {
    QMetaObject::SuperData::link<KDEDModule::staticMetaObject>(),
    qt_meta_stringdata_ApperD.data,
    qt_meta_data_ApperD,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ApperD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApperD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ApperD.stringdata0))
        return static_cast<void*>(this);
    return KDEDModule::qt_metacast(_clname);
}

int ApperD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDEDModule::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ApperFactory_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApperFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApperFactory_t qt_meta_stringdata_ApperFactory = {
    {
QT_MOC_LITERAL(0, 0, 12) // "ApperFactory"

    },
    "ApperFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApperFactory[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ApperFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ApperFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<KPluginFactory::staticMetaObject>(),
    qt_meta_stringdata_ApperFactory.data,
    qt_meta_data_ApperFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ApperFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApperFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ApperFactory.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.kde.KPluginFactory"))
        return static_cast< KPluginFactory*>(this);
    return KPluginFactory::qt_metacast(_clname);
}

int ApperFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KPluginFactory::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x76,  'o',  'r',  'g',  '.',  'k',  'd', 
    'e',  '.',  'K',  'P',  'l',  'u',  'g',  'i', 
    'n',  'F',  'a',  'c',  't',  'o',  'r',  'y', 
    // "className"
    0x03,  0x6c,  'A',  'p',  'p',  'e',  'r',  'F', 
    'a',  'c',  't',  'o',  'r',  'y', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(ApperFactory, ApperFactory)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
