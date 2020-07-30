/********************************************************************************
** Form generated from reading UI file 'additionaldays.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITIONALDAYS_H
#define UI_ADDITIONALDAYS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_additionalDays
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textId;
    QTextEdit *textDays;

    void setupUi(QDialog *additionalDays)
    {
        if (additionalDays->objectName().isEmpty())
            additionalDays->setObjectName(QString::fromUtf8("additionalDays"));
        additionalDays->resize(400, 300);
        buttonBox = new QDialogButtonBox(additionalDays);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(additionalDays);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 100, 54, 12));
        label_2 = new QLabel(additionalDays);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 160, 161, 16));
        textId = new QTextEdit(additionalDays);
        textId->setObjectName(QString::fromUtf8("textId"));
        textId->setGeometry(QRect(220, 90, 161, 31));
        textDays = new QTextEdit(additionalDays);
        textDays->setObjectName(QString::fromUtf8("textDays"));
        textDays->setGeometry(QRect(220, 150, 161, 31));

        retranslateUi(additionalDays);
        QObject::connect(buttonBox, SIGNAL(accepted()), additionalDays, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), additionalDays, SLOT(reject()));

        QMetaObject::connectSlotsByName(additionalDays);
    } // setupUi

    void retranslateUi(QDialog *additionalDays)
    {
        additionalDays->setWindowTitle(QCoreApplication::translate("additionalDays", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("additionalDays", "\345\221\230\345\267\245\347\274\226\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("additionalDays", "\345\221\230\345\267\245\345\212\240\347\217\255\345\244\251\346\225\260\357\274\210\345\260\217\344\272\21631\345\244\251\357\274\211\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class additionalDays: public Ui_additionalDays {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITIONALDAYS_H
