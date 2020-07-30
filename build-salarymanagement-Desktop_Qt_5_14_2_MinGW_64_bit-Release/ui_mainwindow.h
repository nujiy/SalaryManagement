/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_8;
    QAction *action_9;
    QAction *action_10;
    QAction *action_11;
    QAction *action_12;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QMenu *menu_6;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(830, 683);
        MainWindow->setAutoFillBackground(true);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        action_8 = new QAction(MainWindow);
        action_8->setObjectName(QString::fromUtf8("action_8"));
        action_9 = new QAction(MainWindow);
        action_9->setObjectName(QString::fromUtf8("action_9"));
        action_10 = new QAction(MainWindow);
        action_10->setObjectName(QString::fromUtf8("action_10"));
        action_11 = new QAction(MainWindow);
        action_11->setObjectName(QString::fromUtf8("action_11"));
        action_12 = new QAction(MainWindow);
        action_12->setObjectName(QString::fromUtf8("action_12"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setMinimumSize(QSize(801, 581));
        tableView->setAcceptDrops(true);
        tableView->setAutoFillBackground(true);
        tableView->setDragEnabled(true);
        tableView->setDragDropMode(QAbstractItemView::DragOnly);

        horizontalLayout->addWidget(tableView);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 830, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_5 = new QMenu(menubar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        menu_6 = new QMenu(menubar);
        menu_6->setObjectName(QString::fromUtf8("menu_6"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_6->menuAction());
        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menubar->addAction(menu_5->menuAction());
        menu->addAction(action);
        menu_2->addAction(action_2);
        menu_2->addAction(action_10);
        menu_3->addAction(action_3);
        menu_3->addAction(action_12);
        menu_4->addAction(action_4);
        menu_5->addAction(action_5);
        menu_5->addSeparator();
        menu_5->addAction(action_6);
        menu_6->addAction(action_7);
        menu_6->addAction(action_8);
        menu_6->addAction(action_9);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\267\245\347\247\215", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\221\230\345\267\245\350\200\203\345\213\244\346\203\205\345\206\265", nullptr));
#if QT_CONFIG(tooltip)
        action_2->setToolTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\350\200\203\345\213\244", nullptr));
#endif // QT_CONFIG(tooltip)
        action_3->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\212\240\347\217\255\346\264\245\350\264\264\346\203\205\345\206\265", nullptr));
#if QT_CONFIG(tooltip)
        action_3->setToolTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\212\240\347\217\255\346\264\245\350\264\264\346\203\205\345\206\265", nullptr));
#endif // QT_CONFIG(tooltip)
        action_4->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\221\230\345\267\245\345\237\272\346\234\254\344\277\241\346\201\257", nullptr));
#if QT_CONFIG(tooltip)
        action_4->setToolTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\221\230\345\267\245\345\237\272\346\234\254\344\277\241\346\201\257", nullptr));
#endif // QT_CONFIG(tooltip)
        action_5->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\351\203\250\351\227\250\346\200\273\345\267\245\350\265\204", nullptr));
#if QT_CONFIG(tooltip)
        action_5->setToolTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\351\203\250\351\227\250\346\200\273\345\267\245\350\265\204", nullptr));
#endif // QT_CONFIG(tooltip)
        action_6->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\205\254\345\217\270\346\200\273\345\267\245\350\265\204", nullptr));
#if QT_CONFIG(tooltip)
        action_6->setToolTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\205\254\345\217\270\346\200\273\345\267\245\350\265\204", nullptr));
#endif // QT_CONFIG(tooltip)
        action_7->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236\345\221\230\345\267\245\344\277\241\346\201\257", nullptr));
        action_8->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\221\230\345\267\245\344\277\241\346\201\257", nullptr));
        action_9->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\345\221\230\345\267\245\344\277\241\346\201\257", nullptr));
        action_10->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\345\221\230\345\267\245\350\200\203\345\213\244\345\244\251\346\225\260", nullptr));
        action_11->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\345\221\230\345\267\245\345\212\240\347\217\255\345\244\251\346\225\260", nullptr));
        action_12->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\345\221\230\345\267\245\345\212\240\347\217\255\345\244\251\346\225\260", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\345\267\245\347\247\215", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\350\200\203\345\213\244", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\345\212\240\347\217\255\346\264\245\350\264\264", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\345\221\230\345\267\245\345\237\272\346\234\254\344\277\241\346\201\257", nullptr));
        menu_5->setTitle(QCoreApplication::translate("MainWindow", "\346\200\273\345\267\245\350\265\204", nullptr));
        menu_6->setTitle(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\345\221\230\345\267\245\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
