/********************************************************************************
** Form generated from reading UI file 'Bai6_Tuan1.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAI6_TUAN1_H
#define UI_BAI6_TUAN1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Bai6_Tuan1
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QTextEdit *textEdit;

    void setupUi(QDialog *Bai6_Tuan1)
    {
        if (Bai6_Tuan1->objectName().isEmpty())
            Bai6_Tuan1->setObjectName(QString::fromUtf8("Bai6_Tuan1"));
        Bai6_Tuan1->resize(400, 300);
        pushButton = new QPushButton(Bai6_Tuan1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 50, 75, 24));
        label = new QLabel(Bai6_Tuan1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 361, 31));
        textEdit = new QTextEdit(Bai6_Tuan1);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 90, 381, 201));

        retranslateUi(Bai6_Tuan1);

        QMetaObject::connectSlotsByName(Bai6_Tuan1);
    } // setupUi

    void retranslateUi(QDialog *Bai6_Tuan1)
    {
        Bai6_Tuan1->setWindowTitle(QCoreApplication::translate("Bai6_Tuan1", "Bai6_Tuan1", nullptr));
        pushButton->setText(QCoreApplication::translate("Bai6_Tuan1", "In ra k\341\272\277t qu\341\272\243", nullptr));
        label->setText(QCoreApplication::translate("Bai6_Tuan1", "In ra m\303\240n h\303\254nh 5 s\341\273\221 ho\303\240n h\341\272\243o \304\221\341\272\247u ti\303\252n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bai6_Tuan1: public Ui_Bai6_Tuan1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAI6_TUAN1_H
