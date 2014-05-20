#include <QtGui/QApplication>
#include "signal_slot.h"
#include "foo.h"
#include <QtGui>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
//    signal_slot w;
//    w.show();

    Foo a, b;
//    QObject::connect(&a,SIGNAL(valueChanged(int)),
//            &b,SLOT(setValue(int)),
//                     Qt::QueuedConnection);
    QObject::connect(&b,SIGNAL(valueChanged(int)),
            &a,SLOT(setValue(int)));
    QObject::connect(&b,SIGNAL(valueChanged(int)),
            &a,SLOT(connect_on(int)));
    b.setValue( 11 );
    qDebug()<<"++++++++++++++++++++";
    qDebug()<<"a.val:"<<a.value();
    qDebug()<<"b.val:"<<b.value();
    qDebug()<<"--------------------";

    a.setValue( 79 );
    qDebug()<<"a.val:"<<a.value();
    qDebug()<<"b.val:"<<b.value();
    
//    return app.exec();
    return 0;
}
