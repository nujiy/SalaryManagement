/********************************************************************************
** Form generated from reading UI file 'additionaldays_show.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITIONALDAYS_SHOW_H
#define UI_ADDITIONALDAYS_SHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Additionaldays_show
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;

    void setupUi(QDialog *Additionaldays_show)
    {
        if (Additionaldays_show->objectName().isEmpty())
            Additionaldays_show->setObjectName(QString::fromUtf8("Additionaldays_show"));
        Additionaldays_show->resize(400, 300);
        horizontalLayout = new QHBoxLayout(Additionaldays_show);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(Additionaldays_show);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Additionaldays_show);

        QMetaObject::connectSlotsByName(Additionaldays_show);
    } // setupUi

    void retranslateUi(QDialog *Additionaldays_show)
    {
        Additionaldays_show->setWindowTitle(QCoreApplication::translate("Additionaldays_show", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Additionaldays_show: public Ui_Additionaldays_show {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITIONALDAYS_SHOW_H
