/****************************************************************************
** Meta object code from reading C++ file 'maincircuito.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../maincircuito.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maincircuito.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainCircuito_t {
    QByteArrayData data[11];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainCircuito_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainCircuito_t qt_meta_stringdata_MainCircuito = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MainCircuito"
QT_MOC_LITERAL(1, 13, 23), // "on_actionSair_triggered"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 23), // "on_actionNovo_triggered"
QT_MOC_LITERAL(4, 62, 22), // "on_actionLer_triggered"
QT_MOC_LITERAL(5, 85, 25), // "on_actionSalvar_triggered"
QT_MOC_LITERAL(6, 111, 31), // "on_actionGerar_tabela_triggered"
QT_MOC_LITERAL(7, 143, 24), // "on_tablePortas_activated"
QT_MOC_LITERAL(8, 168, 11), // "QModelIndex"
QT_MOC_LITERAL(9, 180, 5), // "index"
QT_MOC_LITERAL(10, 186, 24) // "on_tableSaidas_activated"

    },
    "MainCircuito\0on_actionSair_triggered\0"
    "\0on_actionNovo_triggered\0"
    "on_actionLer_triggered\0on_actionSalvar_triggered\0"
    "on_actionGerar_tabela_triggered\0"
    "on_tablePortas_activated\0QModelIndex\0"
    "index\0on_tableSaidas_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainCircuito[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
      10,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void MainCircuito::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainCircuito *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionSair_triggered(); break;
        case 1: _t->on_actionNovo_triggered(); break;
        case 2: _t->on_actionLer_triggered(); break;
        case 3: _t->on_actionSalvar_triggered(); break;
        case 4: _t->on_actionGerar_tabela_triggered(); break;
        case 5: _t->on_tablePortas_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_tableSaidas_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainCircuito::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainCircuito.data,
    qt_meta_data_MainCircuito,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainCircuito::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainCircuito::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainCircuito.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainCircuito::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
