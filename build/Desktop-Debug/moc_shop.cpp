/****************************************************************************
** Meta object code from reading C++ file 'shop.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../shop.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shop.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_Shop_t {
    uint offsetsAndSizes[24];
    char stringdata0[5];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[18];
    char stringdata5[21];
    char stringdata6[19];
    char stringdata7[27];
    char stringdata8[18];
    char stringdata9[5];
    char stringdata10[20];
    char stringdata11[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Shop_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Shop_t qt_meta_stringdata_Shop = {
    {
        QT_MOC_LITERAL(0, 4),  // "Shop"
        QT_MOC_LITERAL(5, 16),  // "send_to_database"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 8),  // "itemName"
        QT_MOC_LITERAL(32, 17),  // "quantity_database"
        QT_MOC_LITERAL(50, 20),  // "on_confirmed_clicked"
        QT_MOC_LITERAL(71, 18),  // "on_confirm_clicked"
        QT_MOC_LITERAL(90, 26),  // "on_tableWidget_itemClicked"
        QT_MOC_LITERAL(117, 17),  // "QTableWidgetItem*"
        QT_MOC_LITERAL(135, 4),  // "item"
        QT_MOC_LITERAL(140, 19),  // "on_delete_2_clicked"
        QT_MOC_LITERAL(160, 7)   // "on_soup"
    },
    "Shop",
    "send_to_database",
    "",
    "itemName",
    "quantity_database",
    "on_confirmed_clicked",
    "on_confirm_clicked",
    "on_tableWidget_itemClicked",
    "QTableWidgetItem*",
    "item",
    "on_delete_2_clicked",
    "on_soup"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Shop[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   55,    2, 0x08,    4 /* Private */,
       6,    0,   56,    2, 0x08,    5 /* Private */,
       7,    1,   57,    2, 0x08,    6 /* Private */,
      10,    0,   60,    2, 0x08,    8 /* Private */,
      11,    0,   61,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Shop::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Shop.offsetsAndSizes,
    qt_meta_data_Shop,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Shop_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Shop, std::true_type>,
        // method 'send_to_database'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_confirmed_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_confirm_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableWidget_itemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableWidgetItem *, std::false_type>,
        // method 'on_delete_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_soup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Shop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Shop *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->send_to_database((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->on_confirmed_clicked(); break;
        case 2: _t->on_confirm_clicked(); break;
        case 3: _t->on_tableWidget_itemClicked((*reinterpret_cast< std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 4: _t->on_delete_2_clicked(); break;
        case 5: _t->on_soup(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Shop::*)(QString , int );
            if (_t _q_method = &Shop::send_to_database; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Shop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Shop::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Shop.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Shop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Shop::send_to_database(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
