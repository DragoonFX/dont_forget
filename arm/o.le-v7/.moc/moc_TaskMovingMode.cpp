/****************************************************************************
** Meta object code from reading C++ file 'TaskMovingMode.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/const/TaskMovingMode.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskMovingMode.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TaskMovingMode[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
      15, 0x0,    2,   18,

 // enum data: key, value
      24, uint(TaskMovingMode::MOVING),
      31, uint(TaskMovingMode::NOT_MOVING),

       0        // eod
};

static const char qt_meta_stringdata_TaskMovingMode[] = {
    "TaskMovingMode\0MoveMode\0MOVING\0"
    "NOT_MOVING\0"
};

void TaskMovingMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TaskMovingMode::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TaskMovingMode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TaskMovingMode,
      qt_meta_data_TaskMovingMode, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TaskMovingMode::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TaskMovingMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TaskMovingMode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TaskMovingMode))
        return static_cast<void*>(const_cast< TaskMovingMode*>(this));
    return QObject::qt_metacast(_clname);
}

int TaskMovingMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
