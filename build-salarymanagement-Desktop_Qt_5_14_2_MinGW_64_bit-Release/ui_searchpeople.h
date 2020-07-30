/********************************************************************************
** Form generated from reading UI file 'searchpeople.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHPEOPLE_H
#define UI_SEARCHPEOPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_searchPeople
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *textId;
    QTextEdit *textPhonenum;
    QTextEdit *textJob;
    QTextEdit *textDepartment;
    QTextEdit *textName;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *searchPeople)
    {
        if (searchPeople->objectName().isEmpty())
            searchPeople->setObjectName(QString::fromUtf8("searchPeople"));
        searchPeople->resize(510, 398);
        buttonBox = new QDialogButtonBox(searchPeople);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(130, 340, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textId = new QTextEdit(searchPeople);
        textId->setObjectName(QString::fromUtf8("textId"));
        textId->setGeometry(QRect(170, 70, 221, 31));
        textPhonenum = new QTextEdit(searchPeople);
        textPhonenum->setObjectName(QString::fromUtf8("textPhonenum"));
        textPhonenum->setGeometry(QRect(170, 130, 221, 31));
        textJob = new QTextEdit(searchPeople);
        textJob->setObjectName(QString::fromUtf8("textJob"));
        textJob->setGeometry(QRect(170, 190, 221, 31));
        textDepartment = new QTextEdit(searchPeople);
        textDepartment->setObjectName(QString::fromUtf8("textDepartment"));
        textDepartment->setGeometry(QRect(170, 250, 221, 31));
        textName = new QTextEdit(searchPeople);
        textName->setObjectName(QString::fromUtf8("textName"));
        textName->setGeometry(QRect(170, 20, 221, 31));
        label = new QLabel(searchPeople);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 30, 41, 16));
        label_2 = new QLabel(searchPeople);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 80, 41, 16));
        label_3 = new QLabel(searchPeople);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 140, 61, 20));
        label_4 = new QLabel(searchPeople);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 200, 41, 16));
        label_5 = new QLabel(searchPeople);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(110, 260, 41, 16));

        retranslateUi(searchPeople);
        QObject::connect(buttonBox, SIGNAL(accepted()), searchPeople, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), searchPeople, SLOT(reject()));

        QMetaObject::connectSlotsByName(searchPeople);
    } // setupUi

    void retranslateUi(QDialog *searchPeople)
    {
        searchPeople->setWindowTitle(QCoreApplication::translate("searchPeople", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("searchPeople", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("searchPeople", "\347\274\226\345\217\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("searchPeople", "\346\211\213\346\234\272\345\217\267\347\240\201\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("searchPeople", "\350\201\214\345\212\241\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("searchPeople", "\351\203\250\351\227\250\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class searchPeople: public Ui_searchPeople {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHPEOPLE_H
