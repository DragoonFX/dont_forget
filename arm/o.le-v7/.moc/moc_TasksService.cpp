/****************************************************************************
** Meta object code from reading C++ file 'TasksService.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/services/TasksService.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TasksService.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TasksService[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      75,   14, // methods
       4,  389, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   14,   13,   13, 0x05,
      85,   53,   13,   13, 0x05,
     139,  118,   13,   13, 0x05,
     195,  168,   13,   13, 0x05,
     239,  220,   13,   13, 0x05,
     280,  271,   13,   13, 0x05,
     317,  305,   13,   13, 0x05,
     352,  336,   13,   13, 0x05,
     394,  381,   13,   13, 0x05,
     428,  425,   13,   13, 0x05,
     448,   13,   13,   13, 0x05,
     478,  469,   13,   13, 0x05,
     507,  499,   13,   13, 0x05,
     545,  538,   13,   13, 0x05,
     568,  538,   13,   13, 0x05,
     591,  425,   13,   13, 0x05,
     628,  619,   13,   13, 0x05,
     669,  650,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     700,  336,   13,   13, 0x08,

 // methods: signature, parameters, type, tag, flags
     742,   13,  729,   13, 0x02,
     764,  425,  752,   13, 0x02,
     783,  778,  729,   13, 0x02,
     817,  803,  729,   13, 0x02,
     841,  469,  729,   13, 0x02,
     859,   13,  729,   13, 0x22,
     874,   13,  752,   13, 0x02,
     893,  425,  888,   13, 0x02,
     907,  425,  888,   13, 0x02,
     928,  425,  924,   13, 0x02,
     947,   13,  924,   13, 0x02,
     969,   13,  924,   13, 0x02,
     987,   13,  924,   13, 0x02,
    1007,   13,  924,   13, 0x02,
    1029,   13,  924,   13, 0x02,
    1050,   13,  924,   13, 0x02,
    1071,   13,  729,   13, 0x02,
    1092,   13,  729,   13, 0x02,
    1109,   13,  729,   13, 0x02,
    1128,   13,  729,   13, 0x02,
    1149,   13,  729,   13, 0x02,
    1169,   13,  729,   13, 0x02,
    1189,  220,   13,   13, 0x02,
    1226, 1216,   13,   13, 0x22,
    1255,   13, 1249,   13, 0x02,
    1271,  425,   13,   13, 0x02,
    1309, 1290,   13,   13, 0x02,
    1351, 1341,   13,   13, 0x22,
    1486, 1379,   13,   13, 0x02,
    1660, 1559,   13,   13, 0x22,
    1816, 1725,   13,   13, 0x22,
    1959, 1877,   13,   13, 0x22,
    2081, 2016,   13,   13, 0x22,
    2187, 2134,   13,   13, 0x22,
    2263, 2227,   13,   13, 0x22,
    2325, 2299,   13,   13, 0x22,
    2374, 2357,   13,   13, 0x22,
    2407, 2402,   13,   13, 0x22,
    2427,  425,   13,   13, 0x02,
    2443,  469,   13,   13, 0x02,
    2457,   13,   13,   13, 0x22,
    2473, 2468,   13,   13, 0x02,
    2488,  305,   13,   13, 0x02,
    2519,  271,   13,   13, 0x02,
    2543,   13,  888,   13, 0x02,
    2563,  336,   13,   13, 0x02,
    2588,  381,   13,   13, 0x02,
    2617,  425,   13,   13, 0x02,
    2635,   13,   13,   13, 0x02,
    2649,  425,  888,   13, 0x02,
    2669,   13,  924,   13, 0x02,
    2693,   13,  729,   13, 0x02,
    2706,  469,   13,   13, 0x02,
    2720,   13,  888,   13, 0x02,
    2733,  619,   13,   13, 0x02,
    2751,   13,   13,   13, 0x02,

 // properties: name, type, flags
    2769, 1249, 0x00495009,
     336,  888, 0x01495103,
     619,  888, 0x01495103,
     650,  924, 0x02495001,

 // properties: notify_signal_id
       0,
       7,
      16,
      17,

       0        // eod
};

static const char qt_meta_stringdata_TasksService[] = {
    "TasksService\0\0newActiveTask\0"
    "activeTaskChanged(Task*)\0"
    "newTask,parentId,parentParentId\0"
    "taskCreated(QVariantMap,int,int)\0"
    "updatedTask,parentId\0taskUpdated(QVariantMap,int)\0"
    "id,parentId,parentParentId\0"
    "taskDeleted(int,int,int)\0id,closed,parentId\0"
    "taskClosedChanged(int,bool,int)\0"
    "viewMode\0viewModeChanged(QString)\0"
    "id,parentId\0taskMoved(int,int)\0"
    "multiselectMode\0multiselectModeChanged(bool)\0"
    "id,indexPath\0taskSelected(int,QVariantList)\0"
    "id\0taskDeselected(int)\0allTasksDeselected()\0"
    "parentId\0taskMovedInBulk(int)\0taskMap\0"
    "changedInRemember(QVariantMap)\0taskId\0"
    "droppedRememberId(int)\0droppedCalendarId(int)\0"
    "parentIdChangedInDebug(int)\0moveMode\0"
    "moveModeChanged(bool)\0selectedTasksCount\0"
    "selectedTasksCountChanged(int)\0"
    "processMultiselectMode(bool)\0QVariantList\0"
    "findAll()\0QVariantMap\0findById(int)\0"
    "type\0findByType(QString)\0type,parentId\0"
    "findByType(QString,int)\0findSiblings(int)\0"
    "findSiblings()\0lastCreated()\0bool\0"
    "isExists(int)\0hasChildren(int)\0int\0"
    "countChildren(int)\0countImportantTasks()\0"
    "countTodayTasks()\0countOverdueTasks()\0"
    "countCompletedTasks()\0countUpcomingTasks()\0"
    "countReceivedTasks()\0findImportantTasks()\0"
    "findTodayTasks()\0findOverdueTasks()\0"
    "findCompletedTasks()\0findUpcomingTasks()\0"
    "findReceivedTasks()\0changeClosed(int,bool,int)\0"
    "id,closed\0changeClosed(int,bool)\0Task*\0"
    "getActiveTask()\0setActiveTask(int)\0"
    "name,type,parentId\0createTask(QString,QString,int)\0"
    "name,type\0createTask(QString,QString)\0"
    "name,description,deadline,important,createInRemember,attachments,creat"
    "eInCalendar,folderId,accountId,color\0"
    "updateTask(QString,QString,int,int,int,QVariantList,int,int,int,QStrin"
    "g)\0"
    "name,description,deadline,important,createInRemember,attachments,creat"
    "eInCalendar,folderId,accountId\0"
    "updateTask(QString,QString,int,int,int,QVariantList,int,int,int)\0"
    "name,description,deadline,important,createInRemember,attachments,creat"
    "eInCalendar,folderId\0"
    "updateTask(QString,QString,int,int,int,QVariantList,int,int)\0"
    "name,description,deadline,important,createInRemember,attachments,creat"
    "eInCalendar\0"
    "updateTask(QString,QString,int,int,int,QVariantList,int)\0"
    "name,description,deadline,important,createInRemember,attachments\0"
    "updateTask(QString,QString,int,int,int,QVariantList)\0"
    "name,description,deadline,important,createInRemember\0"
    "updateTask(QString,QString,int,int,int)\0"
    "name,description,deadline,important\0"
    "updateTask(QString,QString,int,int)\0"
    "name,description,deadline\0"
    "updateTask(QString,QString,int)\0"
    "name,description\0updateTask(QString,QString)\0"
    "name\0updateTask(QString)\0deleteTask(int)\0"
    "moveTask(int)\0moveTask()\0task\0"
    "copyTask(Task)\0changeParentIdInDebug(int,int)\0"
    "changeViewMode(QString)\0isMultiselectMode()\0"
    "setMultiselectMode(bool)\0"
    "selectTask(int,QVariantList)\0"
    "deselectTask(int)\0deselectAll()\0"
    "isTaskSelected(int)\0getSelectedTasksCount()\0"
    "deleteBulk()\0moveBulk(int)\0isMoveMode()\0"
    "setMoveMode(bool)\0flushActiveTask()\0"
    "activeTask\0"
};

void TasksService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TasksService *_t = static_cast<TasksService *>(_o);
        switch (_id) {
        case 0: _t->activeTaskChanged((*reinterpret_cast< Task*(*)>(_a[1]))); break;
        case 1: _t->taskCreated((*reinterpret_cast< const QVariantMap(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 2: _t->taskUpdated((*reinterpret_cast< const QVariantMap(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 3: _t->taskDeleted((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 4: _t->taskClosedChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 5: _t->viewModeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->taskMoved((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 7: _t->multiselectModeChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 8: _t->taskSelected((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QVariantList(*)>(_a[2]))); break;
        case 9: _t->taskDeselected((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 10: _t->allTasksDeselected(); break;
        case 11: _t->taskMovedInBulk((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 12: _t->changedInRemember((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 13: _t->droppedRememberId((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 14: _t->droppedCalendarId((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 15: _t->parentIdChangedInDebug((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 16: _t->moveModeChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 17: _t->selectedTasksCountChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 18: _t->processMultiselectMode((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 19: { QVariantList _r = _t->findAll();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 20: { QVariantMap _r = _t->findById((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 21: { QVariantList _r = _t->findByType((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 22: { QVariantList _r = _t->findByType((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 23: { QVariantList _r = _t->findSiblings((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 24: { QVariantList _r = _t->findSiblings();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 25: { QVariantMap _r = _t->lastCreated();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->isExists((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->hasChildren((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { int _r = _t->countChildren((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 29: { int _r = _t->countImportantTasks();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 30: { int _r = _t->countTodayTasks();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 31: { int _r = _t->countOverdueTasks();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 32: { int _r = _t->countCompletedTasks();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 33: { int _r = _t->countUpcomingTasks();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 34: { int _r = _t->countReceivedTasks();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 35: { QVariantList _r = _t->findImportantTasks();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 36: { QVariantList _r = _t->findTodayTasks();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 37: { QVariantList _r = _t->findOverdueTasks();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 38: { QVariantList _r = _t->findCompletedTasks();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 39: { QVariantList _r = _t->findUpcomingTasks();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 40: { QVariantList _r = _t->findReceivedTasks();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 41: _t->changeClosed((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 42: _t->changeClosed((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 43: { Task* _r = _t->getActiveTask();
            if (_a[0]) *reinterpret_cast< Task**>(_a[0]) = _r; }  break;
        case 44: _t->setActiveTask((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 45: _t->createTask((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 46: _t->createTask((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 47: _t->updateTask((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5])),(*reinterpret_cast< const QVariantList(*)>(_a[6])),(*reinterpret_cast< const int(*)>(_a[7])),(*reinterpret_cast< const int(*)>(_a[8])),(*reinterpret_cast< const int(*)>(_a[9])),(*reinterpret_cast< const QString(*)>(_a[10]))); break;
        case 48: _t->updateTask((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5])),(*reinterpret_cast< const QVariantList(*)>(_a[6])),(*reinterpret_cast< const int(*)>(_a[7])),(*reinterpret_cast< const int(*)>(_a[8])),(*reinterpret_cast< const int(*)>(_a[9]))); break;
        case 49: _t->updateTask((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5])),(*reinterpret_cast< const QVariantList(*)>(_a[6])),(*reinterpret_cast< const int(*)>(_a[7])),(*reinterpret_cast< const int(*)>(_a[8]))); break;
        case 50: _t->updateTask((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5])),(*reinterpret_cast< const QVariantList(*)>(_a[6])),(*reinterpret_cast< const int(*)>(_a[7]))); break;
        case 51: _t->updateTask((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5])),(*reinterpret_cast< const QVariantList(*)>(_a[6]))); break;
        case 52: _t->updateTask((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5]))); break;
        case 53: _t->updateTask((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4]))); break;
        case 54: _t->updateTask((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 55: _t->updateTask((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 56: _t->updateTask((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 57: _t->deleteTask((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 58: _t->moveTask((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 59: _t->moveTask(); break;
        case 60: _t->copyTask((*reinterpret_cast< const Task(*)>(_a[1]))); break;
        case 61: _t->changeParentIdInDebug((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 62: _t->changeViewMode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 63: { bool _r = _t->isMultiselectMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 64: _t->setMultiselectMode((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 65: _t->selectTask((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QVariantList(*)>(_a[2]))); break;
        case 66: _t->deselectTask((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 67: _t->deselectAll(); break;
        case 68: { bool _r = _t->isTaskSelected((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 69: { int _r = _t->getSelectedTasksCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 70: { QVariantList _r = _t->deleteBulk();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 71: _t->moveBulk((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 72: { bool _r = _t->isMoveMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 73: _t->setMoveMode((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 74: _t->flushActiveTask(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TasksService::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TasksService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TasksService,
      qt_meta_data_TasksService, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TasksService::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TasksService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TasksService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TasksService))
        return static_cast<void*>(const_cast< TasksService*>(this));
    return QObject::qt_metacast(_clname);
}

int TasksService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 75)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 75;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Task**>(_v) = getActiveTask(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isMultiselectMode(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isMoveMode(); break;
        case 3: *reinterpret_cast< int*>(_v) = getSelectedTasksCount(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setMultiselectMode(*reinterpret_cast< bool*>(_v)); break;
        case 2: setMoveMode(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TasksService::activeTaskChanged(Task * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TasksService::taskCreated(const QVariantMap & _t1, const int & _t2, const int & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TasksService::taskUpdated(const QVariantMap & _t1, const int & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TasksService::taskDeleted(const int & _t1, const int & _t2, const int & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TasksService::taskClosedChanged(const int & _t1, const bool & _t2, const int & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TasksService::viewModeChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TasksService::taskMoved(const int _t1, const int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TasksService::multiselectModeChanged(const bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void TasksService::taskSelected(const int & _t1, const QVariantList & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void TasksService::taskDeselected(const int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void TasksService::allTasksDeselected()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void TasksService::taskMovedInBulk(const int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void TasksService::changedInRemember(const QVariantMap & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void TasksService::droppedRememberId(const int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void TasksService::droppedCalendarId(const int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void TasksService::parentIdChangedInDebug(const int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void TasksService::moveModeChanged(const bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void TasksService::selectedTasksCountChanged(const int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
QT_END_MOC_NAMESPACE
