/****************************************************************************
** Meta object code from reading C++ file 'signal_slot.h'
**
** Created: Tue May 20 17:52:26 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../signal_slot_sendsequence_test/signal_slot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signal_slot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_signal_slot[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_signal_slot[] = {
    "signal_slot\0"
};

const QMetaObject signal_slot::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_signal_slot,
      qt_meta_data_signal_slot, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &signal_slot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *signal_slot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *signal_slot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_signal_slot))
        return static_cast<void*>(const_cast< signal_slot*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int signal_slot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
