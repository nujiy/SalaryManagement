/********************************************************************************
** Form generated from reading UI file 'kinds.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KINDS_H
#define UI_KINDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kinds
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;

    void setupUi(QDialog *kinds)
    {
        if (kinds->objectName().isEmpty())
            kinds->setObjectName(QString::fromUtf8("kinds"));
        kinds->resize(400, 300);
        kinds->setMouseTracking(false);
        verticalLayoutWidget = new QWidget(kinds);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 40, 291, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);


        retranslateUi(kinds);

        QMetaObject::connectSlotsByName(kinds);
    } // setupUi

    void retranslateUi(QDialog *kinds)
    {
        kinds->setWindowTitle(QCoreApplication::translate("kinds", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("kinds", "Manager", nullptr));
        label_4->setText(QCoreApplication::translate("kinds", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("kinds", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("kinds", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kinds: public Ui_kinds {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KINDS_H
