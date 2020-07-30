/********************************************************************************
** Form generated from reading UI file 'addpeople.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPEOPLE_H
#define UI_ADDPEOPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addPeople
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *textName;
    QTextEdit *textId;
    QTextEdit *textSex;
    QTextEdit *textPhoneNumber;
    QTextEdit *textDepartment;
    QTextEdit *textJob;
    QTextEdit *textSalary;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *addPeople)
    {
        if (addPeople->objectName().isEmpty())
            addPeople->setObjectName(QString::fromUtf8("addPeople"));
        addPeople->resize(635, 500);
        buttonBox = new QDialogButtonBox(addPeople);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(250, 450, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textName = new QTextEdit(addPeople);
        textName->setObjectName(QString::fromUtf8("textName"));
        textName->setGeometry(QRect(160, 60, 271, 31));
        textId = new QTextEdit(addPeople);
        textId->setObjectName(QString::fromUtf8("textId"));
        textId->setGeometry(QRect(160, 110, 271, 31));
        textSex = new QTextEdit(addPeople);
        textSex->setObjectName(QString::fromUtf8("textSex"));
        textSex->setGeometry(QRect(160, 160, 271, 31));
        textPhoneNumber = new QTextEdit(addPeople);
        textPhoneNumber->setObjectName(QString::fromUtf8("textPhoneNumber"));
        textPhoneNumber->setGeometry(QRect(160, 210, 271, 31));
        textDepartment = new QTextEdit(addPeople);
        textDepartment->setObjectName(QString::fromUtf8("textDepartment"));
        textDepartment->setGeometry(QRect(160, 260, 271, 31));
        textJob = new QTextEdit(addPeople);
        textJob->setObjectName(QString::fromUtf8("textJob"));
        textJob->setGeometry(QRect(160, 310, 271, 31));
        textSalary = new QTextEdit(addPeople);
        textSalary->setObjectName(QString::fromUtf8("textSalary"));
        textSalary->setGeometry(QRect(160, 360, 271, 31));
        label = new QLabel(addPeople);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 70, 61, 16));
        label_2 = new QLabel(addPeople);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 120, 61, 16));
        label_3 = new QLabel(addPeople);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 170, 61, 16));
        label_4 = new QLabel(addPeople);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 220, 61, 16));
        label_5 = new QLabel(addPeople);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 270, 61, 16));
        label_6 = new QLabel(addPeople);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 320, 61, 16));
        label_7 = new QLabel(addPeople);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 370, 61, 16));

        retranslateUi(addPeople);
        QObject::connect(buttonBox, SIGNAL(accepted()), addPeople, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addPeople, SLOT(reject()));

        QMetaObject::connectSlotsByName(addPeople);
    } // setupUi

    void retranslateUi(QDialog *addPeople)
    {
        addPeople->setWindowTitle(QCoreApplication::translate("addPeople", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addPeople", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("addPeople", "\347\274\226\345\217\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("addPeople", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("addPeople", "\347\224\265\350\257\235\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("addPeople", "\351\203\250\351\227\250\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("addPeople", "\350\201\214\345\212\241\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("addPeople", "\350\226\252\350\265\204\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addPeople: public Ui_addPeople {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPEOPLE_H
