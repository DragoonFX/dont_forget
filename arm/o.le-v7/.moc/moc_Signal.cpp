/****************************************************************************
** Meta object code from reading C++ file 'Signal.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/util/Signal.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Signal.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Signal[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x02,
      28,   15,    7,    7, 0x02,
      67,   50,    7,    7, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_Signal[] = {
    "Signal\0\0play()\0soundEnabled\0"
    "setSoundEnabled(bool)\0vibrationEnabled\0"
    "setVibrationEnabled(bool)\0"
};

void Signal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Signal *_t = static_cast<Signal *>(_o);
        switch (_id) {
        case 0: _t->play(); break;
        case 1: _t->setSoundEnabled((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->setVibrationEnabled((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Signal::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Signal::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Signal,
      qt_meta_data_Signal, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Signal::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Signal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Signal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Signal))
        return static_cast<void*>(const_cast< Signal*>(this));
    return QObject::qt_metacast(_clname);
}

int Signal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
