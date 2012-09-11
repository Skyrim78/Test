/********************************************************************************
** Form generated from reading UI file 'l2_base.ui'
**
** Created: Mon 10. Sep 17:47:00 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_L2_BASE_H
#define UI_L2_BASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_l2_base
{
public:
    QAction *actionNPS;
    QAction *actionArmor;
    QAction *actionWeapon;
    QAction *actionMaterials;
    QAction *actionReceipt;
    QAction *actionVersion;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuEditor;
    QMenu *menuItems;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *l2_base)
    {
        if (l2_base->objectName().isEmpty())
            l2_base->setObjectName(QString::fromUtf8("l2_base"));
        l2_base->resize(811, 560);
        actionNPS = new QAction(l2_base);
        actionNPS->setObjectName(QString::fromUtf8("actionNPS"));
        actionArmor = new QAction(l2_base);
        actionArmor->setObjectName(QString::fromUtf8("actionArmor"));
        actionWeapon = new QAction(l2_base);
        actionWeapon->setObjectName(QString::fromUtf8("actionWeapon"));
        actionMaterials = new QAction(l2_base);
        actionMaterials->setObjectName(QString::fromUtf8("actionMaterials"));
        actionReceipt = new QAction(l2_base);
        actionReceipt->setObjectName(QString::fromUtf8("actionReceipt"));
        actionVersion = new QAction(l2_base);
        actionVersion->setObjectName(QString::fromUtf8("actionVersion"));
        centralWidget = new QWidget(l2_base);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        l2_base->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(l2_base);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 811, 21));
        menuEditor = new QMenu(menuBar);
        menuEditor->setObjectName(QString::fromUtf8("menuEditor"));
        menuItems = new QMenu(menuEditor);
        menuItems->setObjectName(QString::fromUtf8("menuItems"));
        l2_base->setMenuBar(menuBar);
        mainToolBar = new QToolBar(l2_base);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        l2_base->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(l2_base);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        l2_base->setStatusBar(statusBar);

        menuBar->addAction(menuEditor->menuAction());
        menuEditor->addAction(actionVersion);
        menuEditor->addAction(menuItems->menuAction());
        menuEditor->addAction(actionNPS);
        menuItems->addAction(actionArmor);
        menuItems->addAction(actionWeapon);
        menuItems->addAction(actionMaterials);
        menuItems->addAction(actionReceipt);

        retranslateUi(l2_base);

        QMetaObject::connectSlotsByName(l2_base);
    } // setupUi

    void retranslateUi(QMainWindow *l2_base)
    {
        l2_base->setWindowTitle(QApplication::translate("l2_base", "l2_base", 0, QApplication::UnicodeUTF8));
        actionNPS->setText(QApplication::translate("l2_base", "NPS", 0, QApplication::UnicodeUTF8));
        actionArmor->setText(QApplication::translate("l2_base", "Armor", 0, QApplication::UnicodeUTF8));
        actionWeapon->setText(QApplication::translate("l2_base", "Weapon", 0, QApplication::UnicodeUTF8));
        actionMaterials->setText(QApplication::translate("l2_base", "Material", 0, QApplication::UnicodeUTF8));
        actionReceipt->setText(QApplication::translate("l2_base", "Receipt", 0, QApplication::UnicodeUTF8));
        actionVersion->setText(QApplication::translate("l2_base", "version", 0, QApplication::UnicodeUTF8));
        menuEditor->setTitle(QApplication::translate("l2_base", "Editor", 0, QApplication::UnicodeUTF8));
        menuItems->setTitle(QApplication::translate("l2_base", "Items", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class l2_base: public Ui_l2_base {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_L2_BASE_H
