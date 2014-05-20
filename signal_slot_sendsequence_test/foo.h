#ifndef FOO_H
#define FOO_H

#include <QObject>
#include <QtGui>

class Foo:public QObject
{
    Q_OBJECT
public:
    Foo();
    int value() const { return val; }
    ~Foo(){}
public slots:
    void setValue( int );
    void connect_on( int);
signals:
    void valueChanged( int a);

private:
    int val;
};

#endif // FOO_H
