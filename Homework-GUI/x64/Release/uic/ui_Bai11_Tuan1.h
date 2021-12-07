/********************************************************************************
** Form generated from reading UI file 'Bai11_Tuan1.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAI11_TUAN1_H
#define UI_BAI11_TUAN1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Bai11_Tuan1
{
public:
    QTextEdit *textEdit;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_3;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *Bai11_Tuan1)
    {
        if (Bai11_Tuan1->objectName().isEmpty())
            Bai11_Tuan1->setObjectName(QString::fromUtf8("Bai11_Tuan1"));
        Bai11_Tuan1->resize(400, 300);
        textEdit = new QTextEdit(Bai11_Tuan1);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 140, 381, 151));
        label_2 = new QLabel(Bai11_Tuan1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 50, 161, 21));
        lineEdit = new QLineEdit(Bai11_Tuan1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(220, 50, 113, 21));
        label = new QLabel(Bai11_Tuan1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 10, 201, 31));
        pushButton = new QPushButton(Bai11_Tuan1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 110, 75, 24));
        label_3 = new QLabel(Bai11_Tuan1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 80, 101, 21));
        lineEdit_2 = new QLineEdit(Bai11_Tuan1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 80, 281, 21));

        retranslateUi(Bai11_Tuan1);

        QMetaObject::connectSlotsByName(Bai11_Tuan1);
    } // setupUi

    void retranslateUi(QDialog *Bai11_Tuan1)
    {
        Bai11_Tuan1->setWindowTitle(QCoreApplication::translate("Bai11_Tuan1", "Bai11_Tuan1", nullptr));
        label_2->setText(QCoreApplication::translate("Bai11_Tuan1", "Nh\341\272\255p v\303\240o s\341\273\221 ph\341\272\247n t\341\273\255 c\341\273\247a d\303\243y:", nullptr));
        label->setText(QCoreApplication::translate("Bai11_Tuan1", "Tr\303\241o \304\221\341\273\225i ng\341\272\253u nhi\303\252n v\341\273\213 tr\303\255 m\341\273\231t d\303\243y s\341\273\221", nullptr));
        pushButton->setText(QCoreApplication::translate("Bai11_Tuan1", "In ra k\341\272\277t qu\341\272\243", nullptr));
        label_3->setText(QCoreApplication::translate("Bai11_Tuan1", "Nh\341\272\255p v\303\240o d\303\243y s\341\273\221:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bai11_Tuan1: public Ui_Bai11_Tuan1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAI11_TUAN1_H
