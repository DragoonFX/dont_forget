/****************************************************************************
** Meta object code from reading C++ file 'DateUtil.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/util/DateUtil.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DateUtil.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DateUtil[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: signature, parameters, type, tag, flags
      27,   18,   10,    9, 0x02,
      52,   42,   10,    9, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_DateUtil[] = {
    "DateUtil\0\0QString\0dateTime\0str(QDateTime)\0"
    "timestamp\0str(int)\0"
};

void DateUtil::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DateUtil *_t = static_cast<DateUtil *>(_o);
        switch (_id) {
        case 0: { QString _r = _t->str((*reinterpret_cast< const QDateTime(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: { QString _r = _t->str((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DateUtil::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DateUtil::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DateUtil,
      qt_meta_data_DateUtil, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DateUtil::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DateUtil::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DateUtil::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DateUtil))
        return static_cast<void*>(const_cast< DateUtil*>(this));
    return QObject::qt_metacast(_clname);
}

int DateUtil::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
