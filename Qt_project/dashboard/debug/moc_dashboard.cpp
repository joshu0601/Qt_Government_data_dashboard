/****************************************************************************
** Meta object code from reading C++ file 'dashboard.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dashboard.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCharts/qlineseries.h>
#include <QtCharts/qabstractbarseries.h>
#include <QtCharts/qvbarmodelmapper.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCharts/qcandlestickseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dashboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSProgressDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSProgressDialogENDCLASS = QtMocHelpers::stringData(
    "ProgressDialog",
    "networkReplyProgress",
    "",
    "bytesRead",
    "totalBytes"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSProgressDialogENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[15];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSProgressDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSProgressDialogENDCLASS_t qt_meta_stringdata_CLASSProgressDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "ProgressDialog"
        QT_MOC_LITERAL(15, 20),  // "networkReplyProgress"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 9),  // "bytesRead"
        QT_MOC_LITERAL(47, 10)   // "totalBytes"
    },
    "ProgressDialog",
    "networkReplyProgress",
    "",
    "bytesRead",
    "totalBytes"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSProgressDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject ProgressDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QProgressDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSProgressDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSProgressDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSProgressDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ProgressDialog, std::true_type>,
        // method 'networkReplyProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>
    >,
    nullptr
} };

void ProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProgressDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->networkReplyProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *ProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSProgressDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QProgressDialog::qt_metacast(_clname);
}

int ProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProgressDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSdashboardENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSdashboardENDCLASS = QtMocHelpers::stringData(
    "dashboard",
    "on_dowload_clicked",
    "",
    "downloadFile",
    "url",
    "fn",
    "en",
    "cancelDownload",
    "httpFinished",
    "httpReadyRead",
    "on_data_base_comboBox_currentIndexChanged",
    "index",
    "on_ListButton_clicked",
    "on_Bar_chart_clicked",
    "on_Line_chart_clicked",
    "on_point_chart_clicked",
    "on_Pie_Chart_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdashboardENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[10];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[4];
    char stringdata5[3];
    char stringdata6[3];
    char stringdata7[15];
    char stringdata8[13];
    char stringdata9[14];
    char stringdata10[42];
    char stringdata11[6];
    char stringdata12[22];
    char stringdata13[21];
    char stringdata14[22];
    char stringdata15[23];
    char stringdata16[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdashboardENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdashboardENDCLASS_t qt_meta_stringdata_CLASSdashboardENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "dashboard"
        QT_MOC_LITERAL(10, 18),  // "on_dowload_clicked"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 12),  // "downloadFile"
        QT_MOC_LITERAL(43, 3),  // "url"
        QT_MOC_LITERAL(47, 2),  // "fn"
        QT_MOC_LITERAL(50, 2),  // "en"
        QT_MOC_LITERAL(53, 14),  // "cancelDownload"
        QT_MOC_LITERAL(68, 12),  // "httpFinished"
        QT_MOC_LITERAL(81, 13),  // "httpReadyRead"
        QT_MOC_LITERAL(95, 41),  // "on_data_base_comboBox_current..."
        QT_MOC_LITERAL(137, 5),  // "index"
        QT_MOC_LITERAL(143, 21),  // "on_ListButton_clicked"
        QT_MOC_LITERAL(165, 20),  // "on_Bar_chart_clicked"
        QT_MOC_LITERAL(186, 21),  // "on_Line_chart_clicked"
        QT_MOC_LITERAL(208, 22),  // "on_point_chart_clicked"
        QT_MOC_LITERAL(231, 20)   // "on_Pie_Chart_clicked"
    },
    "dashboard",
    "on_dowload_clicked",
    "",
    "downloadFile",
    "url",
    "fn",
    "en",
    "cancelDownload",
    "httpFinished",
    "httpReadyRead",
    "on_data_base_comboBox_currentIndexChanged",
    "index",
    "on_ListButton_clicked",
    "on_Bar_chart_clicked",
    "on_Line_chart_clicked",
    "on_point_chart_clicked",
    "on_Pie_Chart_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdashboardENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x08,    1 /* Private */,
       3,    3,   81,    2, 0x08,    2 /* Private */,
       7,    0,   88,    2, 0x08,    6 /* Private */,
       8,    0,   89,    2, 0x08,    7 /* Private */,
       9,    0,   90,    2, 0x08,    8 /* Private */,
      10,    1,   91,    2, 0x08,    9 /* Private */,
      12,    0,   94,    2, 0x08,   11 /* Private */,
      13,    0,   95,    2, 0x08,   12 /* Private */,
      14,    0,   96,    2, 0x08,   13 /* Private */,
      15,    0,   97,    2, 0x08,   14 /* Private */,
      16,    0,   98,    2, 0x08,   15 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject dashboard::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSdashboardENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdashboardENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdashboardENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<dashboard, std::true_type>,
        // method 'on_dowload_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downloadFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'cancelDownload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'httpFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'httpReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_data_base_comboBox_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_ListButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Bar_chart_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Line_chart_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_point_chart_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Pie_Chart_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void dashboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dashboard *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_dowload_clicked(); break;
        case 1: _t->downloadFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 2: _t->cancelDownload(); break;
        case 3: _t->httpFinished(); break;
        case 4: _t->httpReadyRead(); break;
        case 5: _t->on_data_base_comboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_ListButton_clicked(); break;
        case 7: _t->on_Bar_chart_clicked(); break;
        case 8: _t->on_Line_chart_clicked(); break;
        case 9: _t->on_point_chart_clicked(); break;
        case 10: _t->on_Pie_Chart_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *dashboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dashboard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdashboardENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int dashboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
