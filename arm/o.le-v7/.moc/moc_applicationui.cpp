/****************************************************************************
** Meta object code from reading C++ file 'applicationui.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/applicationui.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'applicationui.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ApplicationUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       1,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   15,   14,   14, 0x05,
      48,   14,   14,   14, 0x05,
      64,   14,   14,   14, 0x05,
      87,   79,   14,   14, 0x05,
     136,  124,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     177,  169,   14,   14, 0x0a,
     218,  214,   14,   14, 0x0a,
     236,   14,   14,   14, 0x08,
     275,  262,   14,   14, 0x08,

 // methods: signature, parameters, type, tag, flags
     304,  124,   14,   14, 0x02,
     355,  328,   14,   14, 0x02,
     397,  386,   14,   14, 0x02,
     437,  432,  423,   14, 0x02,
     463,   14,   14,   14, 0x02,
     470,   14,   14,   14, 0x02,
     491,   14,   14,   14, 0x02,

 // properties: name, type, flags
     519,  506, 0x09095001,

       0        // eod
};

static const char qt_meta_stringdata_ApplicationUI[] = {
    "ApplicationUI\0\0data\0taskSheetRequested(QString)\0"
    "tasksReceived()\0taskCardDone()\0taskMap\0"
    "taskCreatedFromExternal(QVariantMap)\0"
    "taskId,path\0folderPageRequested(int,QString)\0"
    "request\0onInvoked(bb::system::InvokeRequest)\0"
    "msg\0cardDone(QString)\0onSystemLanguageChanged()\0"
    "tasksContent\0processTasksContent(QString)\0"
    "openFolder(int,QString)\0"
    "eventId,folderId,accountId\0"
    "openCalendarEvent(int,int,int)\0"
    "rememberId\0openRememberNote(QString)\0"
    "QVariant\0html\0loadHtmlAsObject(QString)\0"
    "sync()\0createFromExternal()\0tutorialDone()\0"
    "QVariantList\0images\0"
};

void ApplicationUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ApplicationUI *_t = static_cast<ApplicationUI *>(_o);
        switch (_id) {
        case 0: _t->taskSheetRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->tasksReceived(); break;
        case 2: _t->taskCardDone(); break;
        case 3: _t->taskCreatedFromExternal((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 4: _t->folderPageRequested((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->onInvoked((*reinterpret_cast< const bb::system::InvokeRequest(*)>(_a[1]))); break;
        case 6: _t->cardDone((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onSystemLanguageChanged(); break;
        case 8: _t->processTasksContent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->openFolder((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->openCalendarEvent((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 11: _t->openRememberNote((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: { QVariant _r = _t->loadHtmlAsObject((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 13: _t->sync(); break;
        case 14: _t->createFromExternal(); break;
        case 15: _t->tutorialDone(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ApplicationUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ApplicationUI::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ApplicationUI,
      qt_meta_data_ApplicationUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ApplicationUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ApplicationUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ApplicationUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ApplicationUI))
        return static_cast<void*>(const_cast< ApplicationUI*>(this));
    return QObject::qt_metacast(_clname);
}

int ApplicationUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = getImages(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ApplicationUI::taskSheetRequested(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ApplicationUI::tasksReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ApplicationUI::taskCardDone()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void ApplicationUI::taskCreatedFromExternal(const QVariantMap & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ApplicationUI::folderPageRequested(const int & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
