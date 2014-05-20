/********************************************************************************
** Form generated from reading UI file 'signal_slot.ui'
**
** Created: Tue May 20 17:52:20 2014
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNAL_SLOT_H
#define UI_SIGNAL_SLOT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signal_slot
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *signal_slot)
    {
        if (signal_slot->objectName().isEmpty())
            signal_slot->setObjectName(QString::fromUtf8("signal_slot"));
        signal_slot->resize(400, 300);
        menuBar = new QMenuBar(signal_slot);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        signal_slot->setMenuBar(menuBar);
        mainToolBar = new QToolBar(signal_slot);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        signal_slot->addToolBar(mainToolBar);
        centralWidget = new QWidget(signal_slot);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        signal_slot->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(signal_slot);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        signal_slot->setStatusBar(statusBar);

        retranslateUi(signal_slot);

        QMetaObject::connectSlotsByName(signal_slot);
    } // setupUi

    void retranslateUi(QMainWindow *signal_slot)
    {
        signal_slot->setWindowTitle(QApplication::translate("signal_slot", "signal_slot", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class signal_slot: public Ui_signal_slot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNAL_SLOT_H
