/****************************************************************************
** Meta object code from reading C++ file 'DropboxService.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/services/DropboxService.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DropboxService.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DropboxService[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   16,   15,   15, 0x05,
      52,   43,   15,   15, 0x05,
      77,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     103,   97,   15,   15, 0x08,
     137,   16,   15,   15, 0x08,
     161,   97,   15,   15, 0x08,
     193,   97,   15,   15, 0x08,
     228,   97,   15,   15, 0x08,

 // methods: signature, parameters, type, tag, flags
     286,  264,   15,   15, 0x02,
     314,   43,   15,   15, 0x02,
     341,  332,   15,   15, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_DropboxService[] = {
    "DropboxService\0\0path\0fileUploaded(QString)\0"
    "tempLink\0tempLinkCreated(QString)\0"
    "fileLoaded(QString)\0reply\0"
    "processFileUpload(QNetworkReply*)\0"
    "createTempLink(QString)\0"
    "processTempLink(QNetworkReply*)\0"
    "processLoadingFile(QNetworkReply*)\0"
    "processDeletingFile(QNetworkReply*)\0"
    "fileName,dataToUpload\0uploadFile(QString,QString)\0"
    "loadFile(QString)\0fileName\0"
    "deleteFile(QString)\0"
};

void DropboxService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DropboxService *_t = static_cast<DropboxService *>(_o);
        switch (_id) {
        case 0: _t->fileUploaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->tempLinkCreated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->fileLoaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->processFileUpload((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->createTempLink((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->processTempLink((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->processLoadingFile((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->processDeletingFile((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 8: _t->uploadFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->loadFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->deleteFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DropboxService::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DropboxService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DropboxService,
      qt_meta_data_DropboxService, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DropboxService::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DropboxService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DropboxService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DropboxService))
        return static_cast<void*>(const_cast< DropboxService*>(this));
    return QObject::qt_metacast(_clname);
}

int DropboxService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void DropboxService::fileUploaded(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DropboxService::tempLinkCreated(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DropboxService::fileLoaded(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
