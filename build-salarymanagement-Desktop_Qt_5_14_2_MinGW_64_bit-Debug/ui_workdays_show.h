/********************************************************************************
** Form generated from reading UI file 'workdays_show.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKDAYS_SHOW_H
#define UI_WORKDAYS_SHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_workdays_show
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;

    void setupUi(QDialog *workdays_show)
    {
        if (workdays_show->objectName().isEmpty())
            workdays_show->setObjectName(QString::fromUtf8("workdays_show"));
        workdays_show->resize(400, 300);
        horizontalLayout = new QHBoxLayout(workdays_show);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(workdays_show);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(workdays_show);

        QMetaObject::connectSlotsByName(workdays_show);
    } // setupUi

    void retranslateUi(QDialog *workdays_show)
    {
        workdays_show->setWindowTitle(QCoreApplication::translate("workdays_show", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class workdays_show: public Ui_workdays_show {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKDAYS_SHOW_H
