/********************************************************************************
** Form generated from reading UI file 'Bai7_Tuan1.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAI7_TUAN1_H
#define UI_BAI7_TUAN1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Bai7_Tuan1
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QTextEdit *textEdit;

    void setupUi(QDialog *Bai7_Tuan1)
    {
        if (Bai7_Tuan1->objectName().isEmpty())
            Bai7_Tuan1->setObjectName(QString::fromUtf8("Bai7_Tuan1"));
        Bai7_Tuan1->resize(400, 300);
        pushButton = new QPushButton(Bai7_Tuan1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 100, 75, 24));
        label = new QLabel(Bai7_Tuan1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 431, 91));
        textEdit = new QTextEdit(Bai7_Tuan1);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 130, 381, 161));

        retranslateUi(Bai7_Tuan1);

        QMetaObject::connectSlotsByName(Bai7_Tuan1);
    } // setupUi

    void retranslateUi(QDialog *Bai7_Tuan1)
    {
        Bai7_Tuan1->setWindowTitle(QCoreApplication::translate("Bai7_Tuan1", "Bai7_Tuan1", nullptr));
        pushButton->setText(QCoreApplication::translate("Bai7_Tuan1", "In ra k\341\272\277t qu\341\272\243", nullptr));
        label->setText(QCoreApplication::translate("Bai7_Tuan1", "Trong c\303\241c s\341\273\221 t\341\273\261 nhi\303\252n <=100, \304\221\341\272\277m c\303\263 bao nhi\303\252u s\341\273\221:\n"
"a. Chia h\341\272\277t cho 5\n"
"b. Chia 5 d\306\260 1\n"
"c. Chia 5 d\306\260 2\n"
"d. Chia 5 d\306\260 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bai7_Tuan1: public Ui_Bai7_Tuan1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAI7_TUAN1_H
