/****************************************************************************
** Meta object code from reading C++ file 'CalendarUtil.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/util/CalendarUtil.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CalendarUtil.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CalendarUtil[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      29,   13,   13,   13, 0x05,
      44,   13,   13,   13, 0x05,

 // methods: signature, parameters, type, tag, flags
     111,   73,   59,   13, 0x02,
     199,  158,   59,   13, 0x02,
     272,  250,   13,   13, 0x02,
     297,  250,   59,   13, 0x02,
     352,  324,   13,   13, 0x02,
     415,  397,   13,   13, 0x22,
     465,  456,   13,   13, 0x22,

       0        // eod
};

static const char qt_meta_stringdata_CalendarUtil[] = {
    "CalendarUtil\0\0eventCreated()\0"
    "eventUpdated()\0eventDeleted()\0"
    "CalendarEvent\0name,body,dateTime,folderId,accountId\0"
    "createEvent(QString,QString,QDateTime,int,int)\0"
    "id,name,body,dateTime,folderId,accountId\0"
    "updateEvent(int,QString,QString,QDateTime,int,int)\0"
    "id,folderId,accountId\0deleteEvent(int,int,int)\0"
    "findEventById(int,int,int)\0"
    "dropDown,folderId,accountId\0"
    "initFolders(bb::cascades::DropDown*,int,int)\0"
    "dropDown,folderId\0"
    "initFolders(bb::cascades::DropDown*,int)\0"
    "dropDown\0initFolders(bb::cascades::DropDown*)\0"
};

void CalendarUtil::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CalendarUtil *_t = static_cast<CalendarUtil *>(_o);
        switch (_id) {
        case 0: _t->eventCreated(); break;
        case 1: _t->eventUpdated(); break;
        case 2: _t->eventDeleted(); break;
        case 3: { CalendarEvent _r = _t->createEvent((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QDateTime(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< CalendarEvent*>(_a[0]) = _r; }  break;
        case 4: { CalendarEvent _r = _t->updateEvent((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QDateTime(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5])),(*reinterpret_cast< const int(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< CalendarEvent*>(_a[0]) = _r; }  break;
        case 5: _t->deleteEvent((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 6: { CalendarEvent _r = _t->findEventById((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< CalendarEvent*>(_a[0]) = _r; }  break;
        case 7: _t->initFolders((*reinterpret_cast< bb::cascades::DropDown*(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 8: _t->initFolders((*reinterpret_cast< bb::cascades::DropDown*(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 9: _t->initFolders((*reinterpret_cast< bb::cascades::DropDown*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CalendarUtil::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CalendarUtil::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CalendarUtil,
      qt_meta_data_CalendarUtil, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CalendarUtil::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CalendarUtil::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CalendarUtil::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CalendarUtil))
        return static_cast<void*>(const_cast< CalendarUtil*>(this));
    return QObject::qt_metacast(_clname);
}

int CalendarUtil::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CalendarUtil::eventCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CalendarUtil::eventUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void CalendarUtil::eventDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
