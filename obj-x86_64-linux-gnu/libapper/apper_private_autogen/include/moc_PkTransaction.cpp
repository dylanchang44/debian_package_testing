/****************************************************************************
** Meta object code from reading C++ file 'PkTransaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../libapper/PkTransaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PkTransaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PkTransaction_t {
    QByteArrayData data[103];
    char stringdata0[1430];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PkTransaction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PkTransaction_t qt_meta_stringdata_PkTransaction = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PkTransaction"
QT_MOC_LITERAL(1, 14, 7), // "package"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 29), // "PackageKit::Transaction::Info"
QT_MOC_LITERAL(4, 53, 4), // "info"
QT_MOC_LITERAL(5, 58, 9), // "packageID"
QT_MOC_LITERAL(6, 68, 7), // "summary"
QT_MOC_LITERAL(7, 76, 12), // "updateDetail"
QT_MOC_LITERAL(8, 89, 7), // "updates"
QT_MOC_LITERAL(9, 97, 9), // "obsoletes"
QT_MOC_LITERAL(10, 107, 10), // "vendorUrls"
QT_MOC_LITERAL(11, 118, 12), // "bugzillaUrls"
QT_MOC_LITERAL(12, 131, 7), // "cveUrls"
QT_MOC_LITERAL(13, 139, 32), // "PackageKit::Transaction::Restart"
QT_MOC_LITERAL(14, 172, 7), // "restart"
QT_MOC_LITERAL(15, 180, 10), // "updateText"
QT_MOC_LITERAL(16, 191, 9), // "changelog"
QT_MOC_LITERAL(17, 201, 36), // "PackageKit::Transaction::Upda..."
QT_MOC_LITERAL(18, 238, 5), // "state"
QT_MOC_LITERAL(19, 244, 6), // "issued"
QT_MOC_LITERAL(20, 251, 7), // "updated"
QT_MOC_LITERAL(21, 259, 9), // "errorCode"
QT_MOC_LITERAL(22, 269, 30), // "PackageKit::Transaction::Error"
QT_MOC_LITERAL(23, 300, 5), // "error"
QT_MOC_LITERAL(24, 306, 7), // "details"
QT_MOC_LITERAL(25, 314, 8), // "finished"
QT_MOC_LITERAL(26, 323, 25), // "PkTransaction::ExitStatus"
QT_MOC_LITERAL(27, 349, 6), // "status"
QT_MOC_LITERAL(28, 356, 12), // "titleChanged"
QT_MOC_LITERAL(29, 369, 5), // "title"
QT_MOC_LITERAL(30, 375, 5), // "sorry"
QT_MOC_LITERAL(31, 381, 4), // "text"
QT_MOC_LITERAL(32, 386, 12), // "errorMessage"
QT_MOC_LITERAL(33, 399, 6), // "dialog"
QT_MOC_LITERAL(34, 406, 8), // "QDialog*"
QT_MOC_LITERAL(35, 415, 6), // "widget"
QT_MOC_LITERAL(36, 422, 18), // "allowCancelChanged"
QT_MOC_LITERAL(37, 441, 21), // "isCallerActiveChanged"
QT_MOC_LITERAL(38, 463, 28), // "downloadSizeRemainingChanged"
QT_MOC_LITERAL(39, 492, 18), // "elapsedTimeChanged"
QT_MOC_LITERAL(40, 511, 18), // "lastPackageChanged"
QT_MOC_LITERAL(41, 530, 17), // "percentageChanged"
QT_MOC_LITERAL(42, 548, 20), // "remainingTimeChanged"
QT_MOC_LITERAL(43, 569, 11), // "roleChanged"
QT_MOC_LITERAL(44, 581, 12), // "speedChanged"
QT_MOC_LITERAL(45, 594, 13), // "statusChanged"
QT_MOC_LITERAL(46, 608, 23), // "transactionFlagsChanged"
QT_MOC_LITERAL(47, 632, 10), // "uidChanged"
QT_MOC_LITERAL(48, 643, 15), // "getUpdateDetail"
QT_MOC_LITERAL(49, 659, 10), // "getUpdates"
QT_MOC_LITERAL(50, 670, 6), // "cancel"
QT_MOC_LITERAL(51, 677, 10), // "setTrusted"
QT_MOC_LITERAL(52, 688, 7), // "trusted"
QT_MOC_LITERAL(53, 696, 18), // "requeueTransaction"
QT_MOC_LITERAL(54, 715, 15), // "installPackages"
QT_MOC_LITERAL(55, 731, 12), // "installFiles"
QT_MOC_LITERAL(56, 744, 14), // "removePackages"
QT_MOC_LITERAL(57, 759, 14), // "updatePackages"
QT_MOC_LITERAL(58, 774, 11), // "slotChanged"
QT_MOC_LITERAL(59, 786, 12), // "slotFinished"
QT_MOC_LITERAL(60, 799, 29), // "PackageKit::Transaction::Exit"
QT_MOC_LITERAL(61, 829, 13), // "slotErrorCode"
QT_MOC_LITERAL(62, 843, 16), // "slotEulaRequired"
QT_MOC_LITERAL(63, 860, 6), // "eulaID"
QT_MOC_LITERAL(64, 867, 6), // "vendor"
QT_MOC_LITERAL(65, 874, 16), // "licenseAgreement"
QT_MOC_LITERAL(66, 891, 23), // "slotMediaChangeRequired"
QT_MOC_LITERAL(67, 915, 34), // "PackageKit::Transaction::Medi..."
QT_MOC_LITERAL(68, 950, 4), // "type"
QT_MOC_LITERAL(69, 955, 2), // "id"
QT_MOC_LITERAL(70, 958, 17), // "slotRepoSignature"
QT_MOC_LITERAL(71, 976, 8), // "repoName"
QT_MOC_LITERAL(72, 985, 6), // "keyUrl"
QT_MOC_LITERAL(73, 992, 9), // "keyUserid"
QT_MOC_LITERAL(74, 1002, 5), // "keyId"
QT_MOC_LITERAL(75, 1008, 14), // "keyFingerprint"
QT_MOC_LITERAL(76, 1023, 12), // "keyTimestamp"
QT_MOC_LITERAL(77, 1036, 32), // "PackageKit::Transaction::SigType"
QT_MOC_LITERAL(78, 1069, 13), // "setExitStatus"
QT_MOC_LITERAL(79, 1083, 6), // "reject"
QT_MOC_LITERAL(80, 1090, 8), // "packages"
QT_MOC_LITERAL(81, 1099, 5), // "files"
QT_MOC_LITERAL(82, 1105, 12), // "downloadOnly"
QT_MOC_LITERAL(83, 1118, 12), // "refreshCache"
QT_MOC_LITERAL(84, 1131, 5), // "force"
QT_MOC_LITERAL(85, 1137, 13), // "progressModel"
QT_MOC_LITERAL(86, 1151, 27), // "PkTransactionProgressModel*"
QT_MOC_LITERAL(87, 1179, 16), // "enableJobWatcher"
QT_MOC_LITERAL(88, 1196, 6), // "enable"
QT_MOC_LITERAL(89, 1203, 10), // "percentage"
QT_MOC_LITERAL(90, 1214, 13), // "remainingTime"
QT_MOC_LITERAL(91, 1228, 5), // "speed"
QT_MOC_LITERAL(92, 1234, 21), // "downloadSizeRemaining"
QT_MOC_LITERAL(93, 1256, 31), // "PackageKit::Transaction::Status"
QT_MOC_LITERAL(94, 1288, 4), // "role"
QT_MOC_LITERAL(95, 1293, 29), // "PackageKit::Transaction::Role"
QT_MOC_LITERAL(96, 1323, 11), // "allowCancel"
QT_MOC_LITERAL(97, 1335, 16), // "transactionFlags"
QT_MOC_LITERAL(98, 1352, 41), // "PackageKit::Transaction::Tran..."
QT_MOC_LITERAL(99, 1394, 10), // "ExitStatus"
QT_MOC_LITERAL(100, 1405, 7), // "Success"
QT_MOC_LITERAL(101, 1413, 6), // "Failed"
QT_MOC_LITERAL(102, 1420, 9) // "Cancelled"

    },
    "PkTransaction\0package\0\0"
    "PackageKit::Transaction::Info\0info\0"
    "packageID\0summary\0updateDetail\0updates\0"
    "obsoletes\0vendorUrls\0bugzillaUrls\0"
    "cveUrls\0PackageKit::Transaction::Restart\0"
    "restart\0updateText\0changelog\0"
    "PackageKit::Transaction::UpdateState\0"
    "state\0issued\0updated\0errorCode\0"
    "PackageKit::Transaction::Error\0error\0"
    "details\0finished\0PkTransaction::ExitStatus\0"
    "status\0titleChanged\0title\0sorry\0text\0"
    "errorMessage\0dialog\0QDialog*\0widget\0"
    "allowCancelChanged\0isCallerActiveChanged\0"
    "downloadSizeRemainingChanged\0"
    "elapsedTimeChanged\0lastPackageChanged\0"
    "percentageChanged\0remainingTimeChanged\0"
    "roleChanged\0speedChanged\0statusChanged\0"
    "transactionFlagsChanged\0uidChanged\0"
    "getUpdateDetail\0getUpdates\0cancel\0"
    "setTrusted\0trusted\0requeueTransaction\0"
    "installPackages\0installFiles\0"
    "removePackages\0updatePackages\0slotChanged\0"
    "slotFinished\0PackageKit::Transaction::Exit\0"
    "slotErrorCode\0slotEulaRequired\0eulaID\0"
    "vendor\0licenseAgreement\0slotMediaChangeRequired\0"
    "PackageKit::Transaction::MediaType\0"
    "type\0id\0slotRepoSignature\0repoName\0"
    "keyUrl\0keyUserid\0keyId\0keyFingerprint\0"
    "keyTimestamp\0PackageKit::Transaction::SigType\0"
    "setExitStatus\0reject\0packages\0files\0"
    "downloadOnly\0refreshCache\0force\0"
    "progressModel\0PkTransactionProgressModel*\0"
    "enableJobWatcher\0enable\0percentage\0"
    "remainingTime\0speed\0downloadSizeRemaining\0"
    "PackageKit::Transaction::Status\0role\0"
    "PackageKit::Transaction::Role\0allowCancel\0"
    "transactionFlags\0"
    "PackageKit::Transaction::TransactionFlags\0"
    "ExitStatus\0Success\0Failed\0Cancelled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PkTransaction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       8,  400, // properties
       1,  432, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  244,    2, 0x06 /* Public */,
       7,   12,  251,    2, 0x06 /* Public */,
      21,    2,  276,    2, 0x06 /* Public */,
      25,    1,  281,    2, 0x06 /* Public */,
      28,    1,  284,    2, 0x06 /* Public */,
      30,    3,  287,    2, 0x06 /* Public */,
      32,    3,  294,    2, 0x06 /* Public */,
      33,    1,  301,    2, 0x06 /* Public */,
      36,    0,  304,    2, 0x06 /* Public */,
      37,    0,  305,    2, 0x06 /* Public */,
      38,    0,  306,    2, 0x06 /* Public */,
      39,    0,  307,    2, 0x06 /* Public */,
      40,    0,  308,    2, 0x06 /* Public */,
      41,    0,  309,    2, 0x06 /* Public */,
      42,    0,  310,    2, 0x06 /* Public */,
      43,    0,  311,    2, 0x06 /* Public */,
      44,    0,  312,    2, 0x06 /* Public */,
      45,    0,  313,    2, 0x06 /* Public */,
      46,    0,  314,    2, 0x06 /* Public */,
      47,    0,  315,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      48,    1,  316,    2, 0x0a /* Public */,
      49,    0,  319,    2, 0x0a /* Public */,
      50,    0,  320,    2, 0x0a /* Public */,
      51,    1,  321,    2, 0x0a /* Public */,
      53,    0,  324,    2, 0x0a /* Public */,
      54,    0,  325,    2, 0x08 /* Private */,
      55,    0,  326,    2, 0x08 /* Private */,
      56,    0,  327,    2, 0x08 /* Private */,
      57,    0,  328,    2, 0x08 /* Private */,
      58,    0,  329,    2, 0x08 /* Private */,
      59,    1,  330,    2, 0x08 /* Private */,
      61,    2,  333,    2, 0x08 /* Private */,
      62,    4,  338,    2, 0x08 /* Private */,
      66,    3,  347,    2, 0x08 /* Private */,
      70,    8,  354,    2, 0x08 /* Private */,
      78,    1,  371,    2, 0x08 /* Private */,
      78,    0,  374,    2, 0x28 /* Private | MethodCloned */,
      79,    0,  375,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      54,    1,  376,    2, 0x02 /* Public */,
      55,    1,  379,    2, 0x02 /* Public */,
      56,    1,  382,    2, 0x02 /* Public */,
      57,    2,  385,    2, 0x02 /* Public */,
      57,    1,  390,    2, 0x22 /* Public | MethodCloned */,
      83,    1,  393,    2, 0x02 /* Public */,
      85,    0,  396,    2, 0x02 /* Public */,
      87,    1,  397,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    4,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, QMetaType::QStringList, QMetaType::QStringList, QMetaType::QStringList, QMetaType::QStringList, 0x80000000 | 13, QMetaType::QString, QMetaType::QString, 0x80000000 | 17, QMetaType::QDateTime, QMetaType::QDateTime,    5,    8,    9,   10,   11,   12,   14,   15,   16,   18,   19,   20,
    QMetaType::Void, 0x80000000 | 22, QMetaType::QString,   23,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   29,   31,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   29,   31,   24,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 60,   27,
    QMetaType::Void, 0x80000000 | 22, QMetaType::QString,   23,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   63,    5,   64,   65,
    QMetaType::Void, 0x80000000 | 67, QMetaType::QString, QMetaType::QString,   68,   69,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 77,    5,   71,   72,   73,   74,   75,   76,   68,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QStringList,   80,
    QMetaType::Void, QMetaType::QStringList,   81,
    QMetaType::Void, QMetaType::QStringList,   80,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Bool,   80,   82,
    QMetaType::Void, QMetaType::QStringList,   80,
    QMetaType::Void, QMetaType::Bool,   84,
    0x80000000 | 86,
    QMetaType::Void, QMetaType::Bool,   88,

 // properties: name, type, flags
      89, QMetaType::UInt, 0x00495001,
      90, QMetaType::UInt, 0x00495001,
      91, QMetaType::UInt, 0x00495001,
      92, QMetaType::ULongLong, 0x00495001,
      27, 0x80000000 | 93, 0x00495009,
      94, 0x80000000 | 95, 0x00495009,
      96, QMetaType::Bool, 0x00495001,
      97, 0x80000000 | 98, 0x00495009,

 // properties: notify_signal_id
      13,
      14,
      16,
      10,
      17,
      15,
       8,
      18,

 // enums: name, alias, flags, count, data
      99,   99, 0x0,    3,  437,

 // enum data: key, value
     100, uint(PkTransaction::Success),
     101, uint(PkTransaction::Failed),
     102, uint(PkTransaction::Cancelled),

       0        // eod
};

void PkTransaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PkTransaction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->package((*reinterpret_cast< PackageKit::Transaction::Info(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->updateDetail((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< const QStringList(*)>(_a[4])),(*reinterpret_cast< const QStringList(*)>(_a[5])),(*reinterpret_cast< const QStringList(*)>(_a[6])),(*reinterpret_cast< PackageKit::Transaction::Restart(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])),(*reinterpret_cast< const QString(*)>(_a[9])),(*reinterpret_cast< PackageKit::Transaction::UpdateState(*)>(_a[10])),(*reinterpret_cast< const QDateTime(*)>(_a[11])),(*reinterpret_cast< const QDateTime(*)>(_a[12]))); break;
        case 2: _t->errorCode((*reinterpret_cast< PackageKit::Transaction::Error(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->finished((*reinterpret_cast< PkTransaction::ExitStatus(*)>(_a[1]))); break;
        case 4: _t->titleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->sorry((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: _t->errorMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: _t->dialog((*reinterpret_cast< QDialog*(*)>(_a[1]))); break;
        case 8: _t->allowCancelChanged(); break;
        case 9: _t->isCallerActiveChanged(); break;
        case 10: _t->downloadSizeRemainingChanged(); break;
        case 11: _t->elapsedTimeChanged(); break;
        case 12: _t->lastPackageChanged(); break;
        case 13: _t->percentageChanged(); break;
        case 14: _t->remainingTimeChanged(); break;
        case 15: _t->roleChanged(); break;
        case 16: _t->speedChanged(); break;
        case 17: _t->statusChanged(); break;
        case 18: _t->transactionFlagsChanged(); break;
        case 19: _t->uidChanged(); break;
        case 20: _t->getUpdateDetail((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->getUpdates(); break;
        case 22: _t->cancel(); break;
        case 23: _t->setTrusted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->requeueTransaction(); break;
        case 25: _t->installPackages(); break;
        case 26: _t->installFiles(); break;
        case 27: _t->removePackages(); break;
        case 28: _t->updatePackages(); break;
        case 29: _t->slotChanged(); break;
        case 30: _t->slotFinished((*reinterpret_cast< PackageKit::Transaction::Exit(*)>(_a[1]))); break;
        case 31: _t->slotErrorCode((*reinterpret_cast< PackageKit::Transaction::Error(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 32: _t->slotEulaRequired((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 33: _t->slotMediaChangeRequired((*reinterpret_cast< PackageKit::Transaction::MediaType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 34: _t->slotRepoSignature((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< PackageKit::Transaction::SigType(*)>(_a[8]))); break;
        case 35: _t->setExitStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->setExitStatus(); break;
        case 37: _t->reject(); break;
        case 38: _t->installPackages((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 39: _t->installFiles((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 40: _t->removePackages((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 41: _t->updatePackages((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 42: _t->updatePackages((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 43: _t->refreshCache((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: { PkTransactionProgressModel* _r = _t->progressModel();
            if (_a[0]) *reinterpret_cast< PkTransactionProgressModel**>(_a[0]) = std::move(_r); }  break;
        case 45: _t->enableJobWatcher((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Info >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 6:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Restart >(); break;
            case 9:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::UpdateState >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Error >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDialog* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Exit >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Error >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::MediaType >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 7:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::SigType >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PkTransaction::*)(PackageKit::Transaction::Info , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransaction::package)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PkTransaction::*)(const QString & , const QStringList & , const QStringList & , const QStringList & , const QStringList & , const QStringList & , PackageKit::Transaction::Restart , const QString & , const QString & , PackageKit::Transaction::UpdateState , const QDateTime & , const QDateTime & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransaction::updateDetail)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PkTransaction::*)(PackageKit::Transaction::Error , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransaction::errorCode)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PkTransaction::*)(PkTransaction::ExitStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransaction::finished)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PkTransaction::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransaction::titleChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PkTransaction::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransaction::sorry)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PkTransaction::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransaction::errorMessage)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PkTransaction::*)(QDialog * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransaction::dialog)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PkTransaction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransaction::allowCancelChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PkTransaction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransaction::isCallerActiveChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (PkTransaction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransaction::downloadSizeRemainingChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (PkTransaction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransaction::elapsedTimeChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (PkTransaction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransaction::lastPackageChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (PkTransaction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransaction::percentageChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (PkTransaction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransaction::remainingTimeChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (PkTransaction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransaction::roleChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (PkTransaction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransaction::speedChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (PkTransaction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransaction::statusChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (PkTransaction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransaction::transactionFlagsChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (PkTransaction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PkTransaction::uidChanged)) {
                *result = 19;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Role >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::Status >(); break;
        case 7:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageKit::Transaction::TransactionFlags >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PkTransaction *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = _t->percentage(); break;
        case 1: *reinterpret_cast< uint*>(_v) = _t->remainingTime(); break;
        case 2: *reinterpret_cast< uint*>(_v) = _t->speed(); break;
        case 3: *reinterpret_cast< qulonglong*>(_v) = _t->downloadSizeRemaining(); break;
        case 4: *reinterpret_cast< PackageKit::Transaction::Status*>(_v) = _t->status(); break;
        case 5: *reinterpret_cast< PackageKit::Transaction::Role*>(_v) = _t->role(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->allowCancel(); break;
        case 7: *reinterpret_cast< PackageKit::Transaction::TransactionFlags*>(_v) = _t->transactionFlags(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_PkTransaction[] = {
    QMetaObject::SuperData::link<PackageKit::Transaction::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject PkTransaction::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PkTransaction.data,
    qt_meta_data_PkTransaction,
    qt_static_metacall,
    qt_meta_extradata_PkTransaction,
    nullptr
} };


const QMetaObject *PkTransaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PkTransaction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PkTransaction.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PkTransaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PkTransaction::package(PackageKit::Transaction::Info _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PkTransaction::updateDetail(const QString & _t1, const QStringList & _t2, const QStringList & _t3, const QStringList & _t4, const QStringList & _t5, const QStringList & _t6, PackageKit::Transaction::Restart _t7, const QString & _t8, const QString & _t9, PackageKit::Transaction::UpdateState _t10, const QDateTime & _t11, const QDateTime & _t12)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t10))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t11))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t12))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PkTransaction::errorCode(PackageKit::Transaction::Error _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PkTransaction::finished(PkTransaction::ExitStatus _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PkTransaction::titleChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PkTransaction::sorry(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PkTransaction::errorMessage(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PkTransaction::dialog(QDialog * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PkTransaction::allowCancelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void PkTransaction::isCallerActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void PkTransaction::downloadSizeRemainingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void PkTransaction::elapsedTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void PkTransaction::lastPackageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void PkTransaction::percentageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void PkTransaction::remainingTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void PkTransaction::roleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void PkTransaction::speedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void PkTransaction::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void PkTransaction::transactionFlagsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void PkTransaction::uidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
