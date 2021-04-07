/****************************************************************************
** Meta object code from reading C++ file 'AppConfig.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/config/AppConfig.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AppConfig.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AppConfig[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       5,   69, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   29,   10,   10, 0x08,

 // methods: signature, parameters, type, tag, flags
      87,   75,   66,   10, 0x02,
     113,  108,   66,   10, 0x22,
     137,  126,   10,   10, 0x02,
     164,   10,  159,   10, 0x02,
     196,   10,   10,   10, 0x02,
     223,   10,   10,   10, 0x02,
     235,   10,  159,   10, 0x02,
     267,   10,  159,   10, 0x02,
     288,   10,  280,   10, 0x02,

 // properties: name, type, flags
     306,  159, 0x01095001,
     334,  280, 0x0a095001,
     356,  280, 0x0a095001,
     363,  159, 0x01095001,
     387,  280, 0x0a095001,

       0        // eod
};

static const char qt_meta_stringdata_AppConfig[] = {
    "AppConfig\0\0settingsChanged()\0isOnline\0"
    "onOnlineStatusChanged(bool)\0QVariant\0"
    "name,defVal\0get(QString,QString)\0name\0"
    "get(QString)\0name,value\0set(QString,QVariant)\0"
    "bool\0isUsingPublicPushProxyGateway()\0"
    "getProviderApplicationId()\0getPpgUrl()\0"
    "shouldLaunchApplicationOnPush()\0"
    "hasNetwork()\0QString\0getPublicAssets()\0"
    "usingPublicPushProxyGateway\0"
    "providerApplicationId\0ppgUrl\0"
    "launchApplicationOnPush\0publicAssets\0"
};

void AppConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AppConfig *_t = static_cast<AppConfig *>(_o);
        switch (_id) {
        case 0: _t->settingsChanged(); break;
        case 1: _t->onOnlineStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: { QVariant _r = _t->get((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 3: { QVariant _r = _t->get((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 4: _t->set((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 5: { bool _r = _t->isUsingPublicPushProxyGateway();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->getProviderApplicationId(); break;
        case 7: _t->getPpgUrl(); break;
        case 8: { bool _r = _t->shouldLaunchApplicationOnPush();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->hasNetwork();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->getPublicAssets();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AppConfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AppConfig::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AppConfig,
      qt_meta_data_AppConfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AppConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AppConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AppConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AppConfig))
        return static_cast<void*>(const_cast< AppConfig*>(this));
    return QObject::qt_metacast(_clname);
}

int AppConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isUsingPublicPushProxyGateway(); break;
        case 1: *reinterpret_cast< QString*>(_v) = getProviderApplicationId(); break;
        case 2: *reinterpret_cast< QString*>(_v) = getPpgUrl(); break;
        case 3: *reinterpret_cast< bool*>(_v) = shouldLaunchApplicationOnPush(); break;
        case 4: *reinterpret_cast< QString*>(_v) = getPublicAssets(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AppConfig::settingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
