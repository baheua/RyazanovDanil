/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../zntulabs/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[15];
    char stringdata[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "on_SLOC_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 21), // "on_EmptyLines_clicked"
QT_MOC_LITERAL(4, 50, 19), // "on_Comments_clicked"
QT_MOC_LITERAL(5, 70, 19), // "on_OnlyCode_clicked"
QT_MOC_LITERAL(6, 90, 23), // "on_VocOperandn2_clicked"
QT_MOC_LITERAL(7, 114, 22), // "on_VocOperatn1_clicked"
QT_MOC_LITERAL(8, 137, 22), // "on_AllOperatN1_clicked"
QT_MOC_LITERAL(9, 160, 23), // "on_AllOperandN2_clicked"
QT_MOC_LITERAL(10, 184, 21), // "on_Cyclomatic_clicked"
QT_MOC_LITERAL(11, 206, 14), // "on_Voc_clicked"
QT_MOC_LITERAL(12, 221, 12), // "on_N_clicked"
QT_MOC_LITERAL(13, 234, 12), // "on_V_clicked"
QT_MOC_LITERAL(14, 247, 13) // "on_CI_clicked"

    },
    "MainWindow\0on_SLOC_clicked\0\0"
    "on_EmptyLines_clicked\0on_Comments_clicked\0"
    "on_OnlyCode_clicked\0on_VocOperandn2_clicked\0"
    "on_VocOperatn1_clicked\0on_AllOperatN1_clicked\0"
    "on_AllOperandN2_clicked\0on_Cyclomatic_clicked\0"
    "on_Voc_clicked\0on_N_clicked\0on_V_clicked\0"
    "on_CI_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
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
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_SLOC_clicked(); break;
        case 1: _t->on_EmptyLines_clicked(); break;
        case 2: _t->on_Comments_clicked(); break;
        case 3: _t->on_OnlyCode_clicked(); break;
        case 4: _t->on_VocOperandn2_clicked(); break;
        case 5: _t->on_VocOperatn1_clicked(); break;
        case 6: _t->on_AllOperatN1_clicked(); break;
        case 7: _t->on_AllOperandN2_clicked(); break;
        case 8: _t->on_Cyclomatic_clicked(); break;
        case 9: _t->on_Voc_clicked(); break;
        case 10: _t->on_N_clicked(); break;
        case 11: _t->on_V_clicked(); break;
        case 12: _t->on_CI_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
