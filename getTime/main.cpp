#include <QtGui/QApplication>
#include "gettime.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    getTime w;
    w.show();
    
    return a.exec();
}
