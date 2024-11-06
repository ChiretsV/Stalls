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
    uint offsetsAndSizes[36];
    char stringdata0[5];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[18];
    char stringdata5[14];
    char stringdata6[5];
    char stringdata7[9];
    char stringdata8[28];
    char stringdata9[21];
    char stringdata10[19];
    char stringdata11[27];
    char stringdata12[18];
    char stringdata13[20];
    char stringdata14[8];
    char stringdata15[24];
    char stringdata16[26];
    char stringdata17[17];
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
        QT_MOC_LITERAL(50, 13),  // "send_to_admin"
        QT_MOC_LITERAL(64, 4),  // "item"
        QT_MOC_LITERAL(69, 8),  // "quantity"
        QT_MOC_LITERAL(78, 27),  // "slot_for_replenishment_shop"
        QT_MOC_LITERAL(106, 20),  // "on_confirmed_clicked"
        QT_MOC_LITERAL(127, 18),  // "on_confirm_clicked"
        QT_MOC_LITERAL(146, 26),  // "on_tableWidget_itemClicked"
        QT_MOC_LITERAL(173, 17),  // "QTableWidgetItem*"
        QT_MOC_LITERAL(191, 19),  // "on_delete_2_clicked"
        QT_MOC_LITERAL(211, 7),  // "on_soup"
        QT_MOC_LITERAL(219, 23),  // "on_main_request_clicked"
        QT_MOC_LITERAL(243, 25),  // "on_listWidget_itemClicked"
        QT_MOC_LITERAL(269, 16)   // "QListWidgetItem*"
    },
    "Shop",
    "send_to_database",
    "",
    "itemName",
    "quantity_database",
    "send_to_admin",
    "item",
    "quantity",
    "slot_for_replenishment_shop",
    "on_confirmed_clicked",
    "on_confirm_clicked",
    "on_tableWidget_itemClicked",
    "QTableWidgetItem*",
    "on_delete_2_clicked",
    "on_soup",
    "on_main_request_clicked",
    "on_listWidget_itemClicked",
    "QListWidgetItem*"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Shop[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   74,    2, 0x06,    1 /* Public */,
       5,    2,   79,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    2,   84,    2, 0x0a,    7 /* Public */,
       9,    0,   89,    2, 0x08,   10 /* Private */,
      10,    0,   90,    2, 0x08,   11 /* Private */,
      11,    1,   91,    2, 0x08,   12 /* Private */,
      13,    0,   94,    2, 0x08,   14 /* Private */,
      14,    0,   95,    2, 0x08,   15 /* Private */,
      15,    0,   96,    2, 0x08,   16 /* Private */,
      16,    1,   97,    2, 0x08,   17 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,    6,

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
        // method 'send_to_admin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slot_for_replenishment_shop'
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
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_main_request_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_listWidget_itemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>
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
        case 1: _t->send_to_admin((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->slot_for_replenishment_shop((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->on_confirmed_clicked(); break;
        case 4: _t->on_confirm_clicked(); break;
        case 5: _t->on_tableWidget_itemClicked((*reinterpret_cast< std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 6: _t->on_delete_2_clicked(); break;
        case 7: _t->on_soup(); break;
        case 8: _t->on_main_request_clicked(); break;
        case 9: _t->on_listWidget_itemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
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
        {
            using _t = void (Shop::*)(QString , int );
            if (_t _q_method = &Shop::send_to_admin; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Shop::send_to_database(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Shop::send_to_admin(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
