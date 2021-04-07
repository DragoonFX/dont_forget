/****************************************************************************
** Meta object code from reading C++ file 'UsersService.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/services/UsersService.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UsersService.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UsersService[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   14,   13,   13, 0x05,
      45,   13,   13,   13, 0x05,
      59,   13,   13,   13, 0x05,
      73,   14,   13,   13, 0x05,

 // methods: signature, parameters, type, tag, flags
     117,   13,  104,   13, 0x02,
     142,  139,  127,   13, 0x02,
     179,  156,   13,   13, 0x02,
     208,  139,   13,   13, 0x02,
     246,  220,   13,   13, 0x02,
     282,  139,   13,   13, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_UsersService[] = {
    "UsersService\0\0userMap\0userAdded(QVariantMap)\0"
    "userUpdated()\0userRemoved()\0"
    "requestedUserDone(QVariantMap)\0"
    "QVariantList\0findAll()\0QVariantMap\0"
    "id\0findById(int)\0firstName,lastName,pin\0"
    "add(QString,QString,QString)\0remove(int)\0"
    "id,firstName,lastName,pin\0"
    "update(int,QString,QString,QString)\0"
    "requestUser(int)\0"
};

void UsersService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UsersService *_t = static_cast<UsersService *>(_o);
        switch (_id) {
        case 0: _t->userAdded((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 1: _t->userUpdated(); break;
        case 2: _t->userRemoved(); break;
        case 3: _t->requestedUserDone((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 4: { QVariantList _r = _t->findAll();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 5: { QVariantMap _r = _t->findById((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 6: _t->add((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: _t->remove((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 8: _t->update((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 9: _t->requestUser((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UsersService::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UsersService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UsersService,
      qt_meta_data_UsersService, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UsersService::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UsersService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UsersService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UsersService))
        return static_cast<void*>(const_cast< UsersService*>(this));
    return QObject::qt_metacast(_clname);
}

int UsersService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void UsersService::userAdded(QVariantMap _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UsersService::userUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UsersService::userRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void UsersService::requestedUserDone(QVariantMap _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
