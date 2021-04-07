/****************************************************************************
** Meta object code from reading C++ file 'Task.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/models/Task.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Task.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Task[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
      15,  259, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    6,    5,    5, 0x05,
      29,   24,    5,    5, 0x05,
      62,   50,    5,    5, 0x05,
      95,   90,    5,    5, 0x05,
     125,  116,    5,    5, 0x05,
     155,  146,    5,    5, 0x05,
     186,  176,    5,    5, 0x05,
     216,  209,    5,    5, 0x05,
     247,  236,    5,    5, 0x05,
     285,  274,    5,    5, 0x05,
     318,  308,    5,    5, 0x05,
     349,  340,    5,    5, 0x05,
     376,  370,    5,    5, 0x05,
     407,  398,    5,    5, 0x05,
     438,  429,    5,    5, 0x05,

 // methods: signature, parameters, type, tag, flags
     471,    5,  467,    5, 0x02,
     479,    6,    5,    5, 0x02,
     490,    5,    5,    5, 0x02,
     500,   24,    5,    5, 0x02,
     517,    5,    5,    5, 0x02,
     534,   50,    5,    5, 0x02,
     558,    5,    5,    5, 0x02,
     568,   90,    5,    5, 0x02,
     585,    5,  467,    5, 0x02,
     599,  116,    5,    5, 0x02,
     616,    5,  467,    5, 0x02,
     630,  146,    5,    5, 0x02,
     652,    5,  647,    5, 0x02,
     666,  176,    5,    5, 0x02,
     685,    5,  647,    5, 0x02,
     696,  209,    5,    5, 0x02,
     712,    5,    5,    5, 0x02,
     728,  236,    5,    5, 0x02,
     751,    5,  467,    5, 0x02,
     767,  274,    5,    5, 0x02,
     786,    5,  467,    5, 0x02,
     801,  308,    5,    5, 0x02,
     819,    5,  467,    5, 0x02,
     833,  340,    5,    5, 0x02,
     850,    5,    5,    5, 0x02,
     861,  370,    5,    5, 0x02,
     879,    5,  647,    5, 0x02,
     892,  398,    5,    5, 0x02,
     910,    5,    5,    5, 0x02,
     924,  429,    5,    5, 0x02,
     961,    5,  949,    5, 0x02,
     969,    5,  949,    5, 0x02,
     986,  978,    5,    5, 0x02,
    1012, 1007,    5,    5, 0x02,

 // properties: name, type, flags
       6,  467, 0x02495103,
      24, 1028, 0x0a495103,
      50, 1028, 0x0a495103,
      90, 1028, 0x0a495103,
     116,  467, 0x02495103,
     146,  467, 0x02495103,
     176,  647, 0x01495103,
     209,  647, 0x01495103,
     236, 1028, 0x0a495103,
     274,  467, 0x02495103,
     308,  467, 0x02495103,
     340,  467, 0x02495103,
     370, 1028, 0x0a495103,
     398,  647, 0x01495103,
     429, 1036, 0x0049510b,

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
      11,
      12,
      13,
      14,

       0        // eod
};

static const char qt_meta_stringdata_Task[] = {
    "Task\0\0id\0idChanged(int)\0name\0"
    "nameChanged(QString)\0description\0"
    "descriptionChanged(QString)\0type\0"
    "typeChanged(QString)\0parentId\0"
    "parentIdChanged(int)\0deadline\0"
    "deadlineChanged(int)\0important\0"
    "importantChanged(bool)\0closed\0"
    "closedChanged(bool)\0rememberId\0"
    "rememberIdChanged(QString)\0calendarId\0"
    "calendarIdChanged(int)\0accountId\0"
    "accountIdChanged(int)\0folderId\0"
    "folderIdChanged(int)\0color\0"
    "colorChanged(QString)\0received\0"
    "receivedChanged(bool)\0children\0"
    "childrenChanged(QList<Task>)\0int\0"
    "getId()\0setId(int)\0getName()\0"
    "setName(QString)\0getDescription()\0"
    "setDescription(QString)\0getType()\0"
    "setType(QString)\0getParentId()\0"
    "setParentId(int)\0getDeadline()\0"
    "setDeadline(int)\0bool\0isImportant()\0"
    "setImportant(bool)\0isClosed()\0"
    "setClosed(bool)\0getRememberId()\0"
    "setRememberId(QString)\0getCalendarId()\0"
    "setCalendarId(int)\0getAccountId()\0"
    "setAccountId(int)\0getFolderId()\0"
    "setFolderId(int)\0getColor()\0"
    "setColor(QString)\0isReceived()\0"
    "setReceived(bool)\0getChildren()\0"
    "setChildren(QList<Task>)\0QVariantMap\0"
    "toMap()\0toJson()\0taskMap\0fromMap(QVariantMap)\0"
    "task\0addChild(Task&)\0QString\0QList<Task>\0"
};

void Task::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Task *_t = static_cast<Task *>(_o);
        switch (_id) {
        case 0: _t->idChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->descriptionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->typeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->parentIdChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 5: _t->deadlineChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 6: _t->importantChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 7: _t->closedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 8: _t->rememberIdChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->calendarIdChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 10: _t->accountIdChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 11: _t->folderIdChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 12: _t->colorChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->receivedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 14: _t->childrenChanged((*reinterpret_cast< const QList<Task>(*)>(_a[1]))); break;
        case 15: { int _r = _t->getId();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: _t->setId((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 17: _t->getName(); break;
        case 18: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->getDescription(); break;
        case 20: _t->setDescription((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->getType(); break;
        case 22: _t->setType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: { int _r = _t->getParentId();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 24: _t->setParentId((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 25: { int _r = _t->getDeadline();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: _t->setDeadline((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 27: { bool _r = _t->isImportant();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: _t->setImportant((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 29: { bool _r = _t->isClosed();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: _t->setClosed((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 31: _t->getRememberId(); break;
        case 32: _t->setRememberId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: { int _r = _t->getCalendarId();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 34: _t->setCalendarId((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 35: { int _r = _t->getAccountId();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 36: _t->setAccountId((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 37: { int _r = _t->getFolderId();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 38: _t->setFolderId((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 39: _t->getColor(); break;
        case 40: _t->setColor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 41: { bool _r = _t->isReceived();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: _t->setReceived((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 43: _t->getChildren(); break;
        case 44: _t->setChildren((*reinterpret_cast< const QList<Task>(*)>(_a[1]))); break;
        case 45: { QVariantMap _r = _t->toMap();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 46: { QVariantMap _r = _t->toJson();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 47: _t->fromMap((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 48: _t->addChild((*reinterpret_cast< Task(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Task::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Task::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Task,
      qt_meta_data_Task, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Task::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Task::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Task::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Task))
        return static_cast<void*>(const_cast< Task*>(this));
    return QObject::qt_metacast(_clname);
}

int Task::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = getId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = getName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = getDescription(); break;
        case 3: *reinterpret_cast< QString*>(_v) = getType(); break;
        case 4: *reinterpret_cast< int*>(_v) = getParentId(); break;
        case 5: *reinterpret_cast< int*>(_v) = getDeadline(); break;
        case 6: *reinterpret_cast< bool*>(_v) = isImportant(); break;
        case 7: *reinterpret_cast< bool*>(_v) = isClosed(); break;
        case 8: *reinterpret_cast< QString*>(_v) = getRememberId(); break;
        case 9: *reinterpret_cast< int*>(_v) = getCalendarId(); break;
        case 10: *reinterpret_cast< int*>(_v) = getAccountId(); break;
        case 11: *reinterpret_cast< int*>(_v) = getFolderId(); break;
        case 12: *reinterpret_cast< QString*>(_v) = getColor(); break;
        case 13: *reinterpret_cast< bool*>(_v) = isReceived(); break;
        case 14: *reinterpret_cast< QList<Task>*>(_v) = getChildren(); break;
        }
        _id -= 15;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setId(*reinterpret_cast< int*>(_v)); break;
        case 1: setName(*reinterpret_cast< QString*>(_v)); break;
        case 2: setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 3: setType(*reinterpret_cast< QString*>(_v)); break;
        case 4: setParentId(*reinterpret_cast< int*>(_v)); break;
        case 5: setDeadline(*reinterpret_cast< int*>(_v)); break;
        case 6: setImportant(*reinterpret_cast< bool*>(_v)); break;
        case 7: setClosed(*reinterpret_cast< bool*>(_v)); break;
        case 8: setRememberId(*reinterpret_cast< QString*>(_v)); break;
        case 9: setCalendarId(*reinterpret_cast< int*>(_v)); break;
        case 10: setAccountId(*reinterpret_cast< int*>(_v)); break;
        case 11: setFolderId(*reinterpret_cast< int*>(_v)); break;
        case 12: setColor(*reinterpret_cast< QString*>(_v)); break;
        case 13: setReceived(*reinterpret_cast< bool*>(_v)); break;
        case 14: setChildren(*reinterpret_cast< QList<Task>*>(_v)); break;
        }
        _id -= 15;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Task::idChanged(const int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Task::nameChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Task::descriptionChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Task::typeChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Task::parentIdChanged(const int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Task::deadlineChanged(const int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Task::importantChanged(const bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Task::closedChanged(const bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Task::rememberIdChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Task::calendarIdChanged(const int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Task::accountIdChanged(const int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Task::folderIdChanged(const int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Task::colorChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Task::receivedChanged(const bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Task::childrenChanged(const QList<Task> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_END_MOC_NAMESPACE
