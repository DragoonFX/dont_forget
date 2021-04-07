/****************************************************************************
** Meta object code from reading C++ file 'AttachmentsService.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/services/AttachmentsService.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AttachmentsService.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AttachmentsService[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   20,   19,   19, 0x05,
      63,   60,   19,   19, 0x05,

 // methods: signature, parameters, type, tag, flags
      99,   19,   86,   19, 0x02,
     121,   60,  109,   19, 0x02,
     142,  135,   86,   19, 0x02,
     160,  135,   86,   19, 0x02,
     213,  187,   19,   19, 0x02,
     246,   60,   19,   19, 0x02,
     258,   19,   19,   19, 0x22,
     280,  267,   19,   19, 0x02,
     325,  320,  312,   19, 0x02,
     360,  347,  312,   19, 0x02,
     392,  388,  312,   19, 0x22,
     412,  347,  109,   19, 0x02,
     445,  388,  109,   19, 0x22,

       0        // eod
};

static const char qt_meta_stringdata_AttachmentsService[] = {
    "AttachmentsService\0\0attachment\0"
    "attachmentAdded(QVariantMap)\0id\0"
    "attachmentRemoved(int)\0QVariantList\0"
    "findAll()\0QVariantMap\0findById(int)\0"
    "taskId\0findByTaskId(int)\0"
    "getEncodedAttachments(int)\0"
    "taskid,name,path,mimeType\0"
    "add(int,QString,QString,QString)\0"
    "remove(int)\0remove()\0uri,mimeType\0"
    "showAttachment(QString,QString)\0QString\0"
    "path\0getExtension(QString)\0ext,mimeType\0"
    "getIconBig(QString,QString)\0ext\0"
    "getIconBig(QString)\0"
    "getIconColorMap(QString,QString)\0"
    "getIconColorMap(QString)\0"
};

void AttachmentsService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AttachmentsService *_t = static_cast<AttachmentsService *>(_o);
        switch (_id) {
        case 0: _t->attachmentAdded((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 1: _t->attachmentRemoved((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: { QVariantList _r = _t->findAll();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 3: { QVariantMap _r = _t->findById((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 4: { QVariantList _r = _t->findByTaskId((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 5: { QVariantList _r = _t->getEncodedAttachments((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 6: _t->add((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 7: _t->remove((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 8: _t->remove(); break;
        case 9: _t->showAttachment((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: { QString _r = _t->getExtension((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->getIconBig((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->getIconBig((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { QVariantMap _r = _t->getIconColorMap((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 14: { QVariantMap _r = _t->getIconColorMap((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AttachmentsService::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AttachmentsService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AttachmentsService,
      qt_meta_data_AttachmentsService, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AttachmentsService::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AttachmentsService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AttachmentsService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AttachmentsService))
        return static_cast<void*>(const_cast< AttachmentsService*>(this));
    return QObject::qt_metacast(_clname);
}

int AttachmentsService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void AttachmentsService::attachmentAdded(const QVariantMap _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AttachmentsService::attachmentRemoved(const int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
