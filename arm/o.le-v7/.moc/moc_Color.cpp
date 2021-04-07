/****************************************************************************
** Meta object code from reading C++ file 'Color.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Color.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Color.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Color[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
      11,   69, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,    7,    6,    6, 0x05,
      49,   39,    6,    6, 0x05,
      84,   75,    6,    6, 0x05,
     118,  109,    6,    6, 0x05,
     155,  143,    6,    6, 0x05,
     194,  183,    6,    6, 0x05,
     232,  221,    6,    6, 0x05,
     269,  259,    6,    6, 0x05,
     301,  295,    6,    6, 0x05,
     328,  323,    6,    6, 0x05,
     357,  349,    6,    6, 0x05,

 // properties: name, type, flags
       7,  381, 0x0a495001,
      39,  381, 0x0a495001,
      75,  381, 0x0a495001,
     109,  381, 0x0a495001,
     143,  381, 0x0a495001,
     183,  381, 0x0a495001,
     221,  381, 0x0a495001,
     259,  381, 0x0a495001,
     295,  381, 0x0a495001,
     323,  381, 0x0a495001,
     349,  381, 0x0a495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,

       0        // eod
};

static const char qt_meta_stringdata_Color[] = {
    "Color\0\0skyBlue\0slyBlueChanged(QString)\0"
    "stormBlue\0stormBlueChanged(QString)\0"
    "hyperRed\0hyperRedChanged(QString)\0"
    "brickRed\0brickRedChanged(QString)\0"
    "lightYellow\0lightYellowChanged(QString)\0"
    "darkYellow\0darkYellowChanged(QString)\0"
    "lightGreen\0lightGreenChanged(QString)\0"
    "darkGreen\0darkGreenChanged(QString)\0"
    "black\0blackChanged(QString)\0grey\0"
    "greyChanged(QString)\0magenta\0"
    "magentaChanged(QString)\0QString\0"
};

void Color::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Color *_t = static_cast<Color *>(_o);
        switch (_id) {
        case 0: _t->slyBlueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->stormBlueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->hyperRedChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->brickRedChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->lightYellowChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->darkYellowChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->lightGreenChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->darkGreenChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->blackChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->greyChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->magentaChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Color::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Color::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Color,
      qt_meta_data_Color, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Color::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Color::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Color::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Color))
        return static_cast<void*>(const_cast< Color*>(this));
    return QObject::qt_metacast(_clname);
}

int Color::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = skyBlue(); break;
        case 1: *reinterpret_cast< QString*>(_v) = stormBlue(); break;
        case 2: *reinterpret_cast< QString*>(_v) = hyperRed(); break;
        case 3: *reinterpret_cast< QString*>(_v) = brickRed(); break;
        case 4: *reinterpret_cast< QString*>(_v) = lightYellow(); break;
        case 5: *reinterpret_cast< QString*>(_v) = darkYellow(); break;
        case 6: *reinterpret_cast< QString*>(_v) = lightGreen(); break;
        case 7: *reinterpret_cast< QString*>(_v) = darkGreen(); break;
        case 8: *reinterpret_cast< QString*>(_v) = black(); break;
        case 9: *reinterpret_cast< QString*>(_v) = grey(); break;
        case 10: *reinterpret_cast< QString*>(_v) = magenta(); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 11;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Color::slyBlueChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Color::stormBlueChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Color::hyperRedChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Color::brickRedChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Color::lightYellowChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Color::darkYellowChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Color::lightGreenChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Color::darkGreenChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Color::blackChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Color::greyChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Color::magentaChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
