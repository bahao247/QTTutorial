/****************************************************************************
** Meta object code from reading C++ file 'httpconnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MyServer/http/httpconnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httpconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HttpConnection_t {
    QByteArrayData data[17];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HttpConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HttpConnection_t qt_meta_stringdata_HttpConnection = {
    {
QT_MOC_LITERAL(0, 0, 14), // "HttpConnection"
QT_MOC_LITERAL(1, 15, 9), // "connected"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "disconnected"
QT_MOC_LITERAL(4, 39, 9), // "readyRead"
QT_MOC_LITERAL(5, 49, 12), // "bytesWritten"
QT_MOC_LITERAL(6, 62, 5), // "bytes"
QT_MOC_LITERAL(7, 68, 12), // "stateChanged"
QT_MOC_LITERAL(8, 81, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(9, 110, 11), // "socketState"
QT_MOC_LITERAL(10, 122, 5), // "error"
QT_MOC_LITERAL(11, 128, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(12, 157, 11), // "socketError"
QT_MOC_LITERAL(13, 169, 7), // "started"
QT_MOC_LITERAL(14, 177, 10), // "transfered"
QT_MOC_LITERAL(15, 188, 8), // "finished"
QT_MOC_LITERAL(16, 197, 13) // "transferError"

    },
    "HttpConnection\0connected\0\0disconnected\0"
    "readyRead\0bytesWritten\0bytes\0stateChanged\0"
    "QAbstractSocket::SocketState\0socketState\0"
    "error\0QAbstractSocket::SocketError\0"
    "socketError\0started\0transfered\0finished\0"
    "transferError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HttpConnection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    1,   67,    2, 0x0a /* Public */,
       7,    1,   70,    2, 0x0a /* Public */,
      10,    1,   73,    2, 0x0a /* Public */,
      13,    0,   76,    2, 0x0a /* Public */,
      14,    1,   77,    2, 0x0a /* Public */,
      15,    0,   80,    2, 0x0a /* Public */,
      16,    0,   81,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HttpConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpConnection *_t = static_cast<HttpConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->readyRead(); break;
        case 3: _t->bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->stateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 5: _t->error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 6: _t->started(); break;
        case 7: _t->transfered((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 8: _t->finished(); break;
        case 9: _t->transferError(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject HttpConnection::staticMetaObject = {
    { &TcpConnecton::staticMetaObject, qt_meta_stringdata_HttpConnection.data,
      qt_meta_data_HttpConnection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HttpConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HttpConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HttpConnection.stringdata0))
        return static_cast<void*>(const_cast< HttpConnection*>(this));
    return TcpConnecton::qt_metacast(_clname);
}

int HttpConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TcpConnecton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE