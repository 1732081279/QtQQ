/****************************************************************************
** Meta object code from reading C++ file 'PersonDataSet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../littleWidgets/PersonDataSet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PersonDataSet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PersonDataSet_t {
    QByteArrayData data[9];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PersonDataSet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PersonDataSet_t qt_meta_stringdata_PersonDataSet = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PersonDataSet"
QT_MOC_LITERAL(1, 14, 19), // "signal_userInfoSave"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7), // "user_id"
QT_MOC_LITERAL(4, 43, 9), // "user_info"
QT_MOC_LITERAL(5, 53, 19), // "signal_userHeadSave"
QT_MOC_LITERAL(6, 73, 9), // "head_path"
QT_MOC_LITERAL(7, 83, 23), // "slot_btnSaveSet_clicked"
QT_MOC_LITERAL(8, 107, 25) // "slot_btnCancelSet_clicked"

    },
    "PersonDataSet\0signal_userInfoSave\0\0"
    "user_id\0user_info\0signal_userHeadSave\0"
    "head_path\0slot_btnSaveSet_clicked\0"
    "slot_btnCancelSet_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PersonDataSet[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       5,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   44,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::QVariantMap,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    3,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PersonDataSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PersonDataSet *_t = static_cast<PersonDataSet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_userInfoSave((*reinterpret_cast< const quint32(*)>(_a[1])),(*reinterpret_cast< const QMap<QString,QVariant>(*)>(_a[2]))); break;
        case 1: _t->signal_userHeadSave((*reinterpret_cast< const quint32(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->slot_btnSaveSet_clicked(); break;
        case 3: _t->slot_btnCancelSet_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PersonDataSet::*_t)(const quint32 , const QMap<QString,QVariant> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PersonDataSet::signal_userInfoSave)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PersonDataSet::*_t)(const quint32 , const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PersonDataSet::signal_userHeadSave)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject PersonDataSet::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PersonDataSet.data,
      qt_meta_data_PersonDataSet,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PersonDataSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PersonDataSet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PersonDataSet.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PersonDataSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PersonDataSet::signal_userInfoSave(const quint32 _t1, const QMap<QString,QVariant> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PersonDataSet::signal_userHeadSave(const quint32 _t1, const QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
