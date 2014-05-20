#include "foo.h"

Foo::Foo()
{
}

void Foo::setValue( int v )
{
    qDebug()<<"setval:"<<v;
    if ( v != val ) {
        val = v;
        emit valueChanged(v);
    }

}
void Foo::connect_on(int v)
{
   qDebug()<<"connect_on:"<<v;
}

void Foo::valueChanged(int a )
{
    qDebug()<<"emit signal:"<<a;
}
