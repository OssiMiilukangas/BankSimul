/****************************************************************************
** Meta object code from reading C++ file 'mainmenumoottori.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DLLMainMenu/mainmenumoottori.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainmenumoottori.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainMenuMoottori_t {
    QByteArrayData data[11];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainMenuMoottori_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainMenuMoottori_t qt_meta_stringdata_MainMenuMoottori = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MainMenuMoottori"
QT_MOC_LITERAL(1, 17, 14), // "ajastinNollaus"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 55, 27), // "on_TilitiedotBitton_clicked"
QT_MOC_LITERAL(5, 83, 29), // "on_nostaRahaaButton_2_clicked"
QT_MOC_LITERAL(6, 113, 7), // "ajastin"
QT_MOC_LITERAL(7, 121, 12), // "resetAjastin"
QT_MOC_LITERAL(8, 134, 30), // "on_LahjoitaRahaaButton_clicked"
QT_MOC_LITERAL(9, 165, 27), // "on_nostaRahaaButton_clicked"
QT_MOC_LITERAL(10, 193, 10) // "naytaSaldo"

    },
    "MainMenuMoottori\0ajastinNollaus\0\0"
    "on_pushButton_clicked\0on_TilitiedotBitton_clicked\0"
    "on_nostaRahaaButton_2_clicked\0ajastin\0"
    "resetAjastin\0on_LahjoitaRahaaButton_clicked\0"
    "on_nostaRahaaButton_clicked\0naytaSaldo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainMenuMoottori[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
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

void MainMenuMoottori::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainMenuMoottori *_t = static_cast<MainMenuMoottori *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ajastinNollaus(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_TilitiedotBitton_clicked(); break;
        case 3: _t->on_nostaRahaaButton_2_clicked(); break;
        case 4: _t->ajastin(); break;
        case 5: _t->resetAjastin(); break;
        case 6: _t->on_LahjoitaRahaaButton_clicked(); break;
        case 7: _t->on_nostaRahaaButton_clicked(); break;
        case 8: _t->naytaSaldo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainMenuMoottori::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainMenuMoottori::ajastinNollaus)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainMenuMoottori::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MainMenuMoottori.data,
      qt_meta_data_MainMenuMoottori,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainMenuMoottori::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainMenuMoottori::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainMenuMoottori.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MainMenuMoottori::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MainMenuMoottori::ajastinNollaus()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE