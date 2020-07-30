/********************************************************************************
** Form generated from reading UI file 'workdays.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKDAYS_H
#define UI_WORKDAYS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_workDays
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textId;
    QTextEdit *textDays;

    void setupUi(QDialog *workDays)
    {
        if (workDays->objectName().isEmpty())
            workDays->setObjectName(QString::fromUtf8("workDays"));
        workDays->resize(400, 300);
        buttonBox = new QDialogButtonBox(workDays);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(workDays);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 100, 54, 12));
        label_2 = new QLabel(workDays);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 170, 151, 16));
        textId = new QTextEdit(workDays);
        textId->setObjectName(QString::fromUtf8("textId"));
        textId->setGeometry(QRect(180, 90, 161, 31));
        textDays = new QTextEdit(workDays);
        textDays->setObjectName(QString::fromUtf8("textDays"));
        textDays->setGeometry(QRect(180, 160, 161, 31));

        retranslateUi(workDays);
        QObject::connect(buttonBox, SIGNAL(accepted()), workDays, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), workDays, SLOT(reject()));

        QMetaObject::connectSlotsByName(workDays);
    } // setupUi

    void retranslateUi(QDialog *workDays)
    {
        workDays->setWindowTitle(QCoreApplication::translate("workDays", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("workDays", "\345\221\230\345\267\245\347\274\226\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("workDays", "\350\256\276\347\275\256\350\200\203\345\213\244\345\244\251\346\225\260\357\274\210\345\260\217\344\272\21631\357\274\211\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class workDays: public Ui_workDays {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKDAYS_H
