/********************************************************************************
** Form generated from reading UI file 'gettime.ui'
**
** Created: Tue May 20 18:06:33 2014
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETTIME_H
#define UI_GETTIME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_getTime
{
public:

    void setupUi(QDialog *getTime)
    {
        if (getTime->objectName().isEmpty())
            getTime->setObjectName(QString::fromUtf8("getTime"));
        getTime->resize(400, 300);

        retranslateUi(getTime);

        QMetaObject::connectSlotsByName(getTime);
    } // setupUi

    void retranslateUi(QDialog *getTime)
    {
        getTime->setWindowTitle(QApplication::translate("getTime", "getTime", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class getTime: public Ui_getTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETTIME_H
