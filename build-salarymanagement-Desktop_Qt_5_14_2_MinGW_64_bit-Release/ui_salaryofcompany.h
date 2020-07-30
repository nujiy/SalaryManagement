/********************************************************************************
** Form generated from reading UI file 'salaryofcompany.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALARYOFCOMPANY_H
#define UI_SALARYOFCOMPANY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Salaryofcompany
{
public:
    QLabel *label;

    void setupUi(QDialog *Salaryofcompany)
    {
        if (Salaryofcompany->objectName().isEmpty())
            Salaryofcompany->setObjectName(QString::fromUtf8("Salaryofcompany"));
        Salaryofcompany->resize(400, 300);
        label = new QLabel(Salaryofcompany);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 130, 55, 16));

        retranslateUi(Salaryofcompany);

        QMetaObject::connectSlotsByName(Salaryofcompany);
    } // setupUi

    void retranslateUi(QDialog *Salaryofcompany)
    {
        Salaryofcompany->setWindowTitle(QCoreApplication::translate("Salaryofcompany", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Salaryofcompany", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Salaryofcompany: public Ui_Salaryofcompany {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALARYOFCOMPANY_H
