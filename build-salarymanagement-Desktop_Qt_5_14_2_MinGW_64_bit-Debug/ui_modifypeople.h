/********************************************************************************
** Form generated from reading UI file 'modifypeople.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYPEOPLE_H
#define UI_MODIFYPEOPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_modifyPeople
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QTextEdit *textId;
    QLabel *label_2;
    QTextEdit *textJob;
    QTextEdit *textName;
    QTextEdit *textSex;
    QTextEdit *textDepartment;
    QTextEdit *textPhonenum;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *modifyPeople)
    {
        if (modifyPeople->objectName().isEmpty())
            modifyPeople->setObjectName(QString::fromUtf8("modifyPeople"));
        modifyPeople->resize(551, 450);
        buttonBox = new QDialogButtonBox(modifyPeople);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(190, 410, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(modifyPeople);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 60, 121, 16));
        textId = new QTextEdit(modifyPeople);
        textId->setObjectName(QString::fromUtf8("textId"));
        textId->setGeometry(QRect(170, 50, 256, 31));
        label_2 = new QLabel(modifyPeople);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 90, 51, 31));
        textJob = new QTextEdit(modifyPeople);
        textJob->setObjectName(QString::fromUtf8("textJob"));
        textJob->setGeometry(QRect(170, 330, 256, 31));
        textName = new QTextEdit(modifyPeople);
        textName->setObjectName(QString::fromUtf8("textName"));
        textName->setGeometry(QRect(170, 130, 256, 31));
        textSex = new QTextEdit(modifyPeople);
        textSex->setObjectName(QString::fromUtf8("textSex"));
        textSex->setGeometry(QRect(170, 180, 256, 31));
        textDepartment = new QTextEdit(modifyPeople);
        textDepartment->setObjectName(QString::fromUtf8("textDepartment"));
        textDepartment->setGeometry(QRect(170, 280, 256, 31));
        textPhonenum = new QTextEdit(modifyPeople);
        textPhonenum->setObjectName(QString::fromUtf8("textPhonenum"));
        textPhonenum->setGeometry(QRect(170, 230, 256, 31));
        label_4 = new QLabel(modifyPeople);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 340, 141, 20));
        label_5 = new QLabel(modifyPeople);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 240, 141, 20));
        label_6 = new QLabel(modifyPeople);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 290, 141, 20));
        label_7 = new QLabel(modifyPeople);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 140, 141, 20));
        label_8 = new QLabel(modifyPeople);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 190, 141, 20));

        retranslateUi(modifyPeople);
        QObject::connect(buttonBox, SIGNAL(accepted()), modifyPeople, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), modifyPeople, SLOT(reject()));

        QMetaObject::connectSlotsByName(modifyPeople);
    } // setupUi

    void retranslateUi(QDialog *modifyPeople)
    {
        modifyPeople->setWindowTitle(QCoreApplication::translate("modifyPeople", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("modifyPeople", "\350\276\223\345\205\245\350\246\201\344\277\256\346\224\271\345\221\230\345\267\245\347\232\204Id\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("modifyPeople", "\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
        label_4->setText(QCoreApplication::translate("modifyPeople", "\350\276\223\345\205\245\350\246\201\344\277\256\346\224\271\345\221\230\345\267\245\347\232\204\350\201\214\345\212\241\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("modifyPeople", "\350\276\223\345\205\245\350\246\201\344\277\256\346\224\271\345\221\230\345\267\245\347\232\204\347\224\265\350\257\235\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("modifyPeople", "\350\276\223\345\205\245\350\246\201\344\277\256\346\224\271\345\221\230\345\267\245\347\232\204\351\203\250\351\227\250\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("modifyPeople", "\350\276\223\345\205\245\350\246\201\344\277\256\346\224\271\345\221\230\345\267\245\347\232\204\345\247\223\345\220\215\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("modifyPeople", "\350\276\223\345\205\245\350\246\201\344\277\256\346\224\271\345\221\230\345\267\245\347\232\204\346\200\247\345\210\253\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifyPeople: public Ui_modifyPeople {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYPEOPLE_H
