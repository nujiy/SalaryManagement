/********************************************************************************
** Form generated from reading UI file 'salaryofdepartment.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALARYOFDEPARTMENT_H
#define UI_SALARYOFDEPARTMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Salaryofdepartment
{
public:
    QLabel *label;

    void setupUi(QDialog *Salaryofdepartment)
    {
        if (Salaryofdepartment->objectName().isEmpty())
            Salaryofdepartment->setObjectName(QString::fromUtf8("Salaryofdepartment"));
        Salaryofdepartment->resize(400, 300);
        label = new QLabel(Salaryofdepartment);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 130, 55, 16));

        retranslateUi(Salaryofdepartment);

        QMetaObject::connectSlotsByName(Salaryofdepartment);
    } // setupUi

    void retranslateUi(QDialog *Salaryofdepartment)
    {
        Salaryofdepartment->setWindowTitle(QCoreApplication::translate("Salaryofdepartment", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Salaryofdepartment", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Salaryofdepartment: public Ui_Salaryofdepartment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALARYOFDEPARTMENT_H
