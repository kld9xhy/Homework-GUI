/********************************************************************************
** Form generated from reading UI file 'Bai12_Tuan1.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAI12_TUAN1_H
#define UI_BAI12_TUAN1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Bai12_Tuan1
{
public:
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Bai12_Tuan1)
    {
        if (Bai12_Tuan1->objectName().isEmpty())
            Bai12_Tuan1->setObjectName(QString::fromUtf8("Bai12_Tuan1"));
        Bai12_Tuan1->resize(400, 300);
        lineEdit = new QLineEdit(Bai12_Tuan1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 50, 113, 21));
        label_2 = new QLabel(Bai12_Tuan1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(58, 50, 111, 21));
        label = new QLabel(Bai12_Tuan1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 10, 211, 31));
        pushButton = new QPushButton(Bai12_Tuan1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 80, 101, 24));
        textEdit = new QTextEdit(Bai12_Tuan1);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 120, 381, 171));
        pushButton_2 = new QPushButton(Bai12_Tuan1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 80, 111, 24));

        retranslateUi(Bai12_Tuan1);

        QMetaObject::connectSlotsByName(Bai12_Tuan1);
    } // setupUi

    void retranslateUi(QDialog *Bai12_Tuan1)
    {
        Bai12_Tuan1->setWindowTitle(QCoreApplication::translate("Bai12_Tuan1", "Bai12_Tuan1", nullptr));
        label_2->setText(QCoreApplication::translate("Bai12_Tuan1", "Nh\341\272\255p 2 <= h <= 10:", nullptr));
        label->setText(QCoreApplication::translate("Bai12_Tuan1", "In ra m\303\240n h\303\254nh tam gi\303\241c c\303\263 chi\341\273\201u cao h", nullptr));
        pushButton->setText(QCoreApplication::translate("Bai12_Tuan1", "In tam gi\303\241c xu\303\264i", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Bai12_Tuan1", "In tam gi\303\241c ng\306\260\341\273\243c", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bai12_Tuan1: public Ui_Bai12_Tuan1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAI12_TUAN1_H
