/****************************************************************************
** Meta object code from reading C++ file 'PushNotificationService.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/services/PushNotificationService.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PushNotificationService.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PushNotificationService[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,
      42,   24,   24,   24, 0x05,
      61,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      96,   85,   24,   24, 0x08,
     161,  144,   24,   24, 0x08,
     223,  217,   24,   24, 0x08,
     259,  217,   24,   24, 0x08,

 // methods: signature, parameters, type, tag, flags
     301,   24,   24,   24, 0x02,
     319,   24,   24,   24, 0x02,
     353,   24,  340,   24, 0x02,
     398,  370,   24,   24, 0x02,
     465,  445,   24,   24, 0x02,
     508,   24,   24,   24, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_PushNotificationService[] = {
    "PushNotificationService\0\0channelCreated()\0"
    "channelDestroyed()\0channelCreationFailed()\0"
    "pushStatus\0createSessionCompleted(bb::network::PushStatus)\0"
    "pushStatus,token\0"
    "createChannelCompleted(bb::network::PushStatus,QString)\0"
    "reply\0pushMessageResponse(QNetworkReply*)\0"
    "subscriptionQueryResponse(QNetworkReply*)\0"
    "initPushService()\0destroyPushService()\0"
    "PushService*\0getPushService()\0"
    "userPin,priority,title,body\0"
    "pushMessageToUser(QString,int,QString,QString)\0"
    "priority,title,body\0"
    "pushMessageToUserList(int,QString,QString)\0"
    "requestSubscribedUserList()\0"
};

void PushNotificationService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PushNotificationService *_t = static_cast<PushNotificationService *>(_o);
        switch (_id) {
        case 0: _t->channelCreated(); break;
        case 1: _t->channelDestroyed(); break;
        case 2: _t->channelCreationFailed(); break;
        case 3: _t->createSessionCompleted((*reinterpret_cast< const bb::network::PushStatus(*)>(_a[1]))); break;
        case 4: _t->createChannelCompleted((*reinterpret_cast< const bb::network::PushStatus(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->pushMessageResponse((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->subscriptionQueryResponse((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->initPushService(); break;
        case 8: _t->destroyPushService(); break;
        case 9: { PushService* _r = _t->getPushService();
            if (_a[0]) *reinterpret_cast< PushService**>(_a[0]) = _r; }  break;
        case 10: _t->pushMessageToUser((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 11: _t->pushMessageToUserList((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 12: _t->requestSubscribedUserList(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PushNotificationService::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PushNotificationService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PushNotificationService,
      qt_meta_data_PushNotificationService, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PushNotificationService::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PushNotificationService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PushNotificationService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PushNotificationService))
        return static_cast<void*>(const_cast< PushNotificationService*>(this));
    return QObject::qt_metacast(_clname);
}

int PushNotificationService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void PushNotificationService::channelCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void PushNotificationService::channelDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void PushNotificationService::channelCreationFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
