#include "gettime.h"
#include <QTime>

getTime::getTime(QWidget *parent) :
    QDialog(parent)
{
    this->resize(300,400);
    label = new QLabel("label",this);
    btn =new QPushButton("getTime",this);
    label->move(150,200);
    btn->move(125,300);

    connect(btn,SIGNAL(clicked()),
            this,SLOT(currentTime()));

    connect(this,SIGNAL(getData(QString)),
            label,SLOT(setText(QString)));
}

getTime::~getTime()
{
    delete label;
    delete btn;
}

void getTime::currentTime(void)
{
    emit getData(QTime::currentTime().toString("hh:mm"));
}














