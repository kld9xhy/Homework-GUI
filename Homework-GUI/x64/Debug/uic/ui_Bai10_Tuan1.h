/********************************************************************************
** Form generated from reading UI file 'Bai10_Tuan1.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAI10_TUAN1_H
#define UI_BAI10_TUAN1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Bai10_Tuan1
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QDialog *Bai10_Tuan1)
    {
        if (Bai10_Tuan1->objectName().isEmpty())
            Bai10_Tuan1->setObjectName(QString::fromUtf8("Bai10_Tuan1"));
        Bai10_Tuan1->resize(400, 300);
        label = new QLabel(Bai10_Tuan1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 321, 31));
        label_2 = new QLabel(Bai10_Tuan1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 50, 49, 21));
        lineEdit = new QLineEdit(Bai10_Tuan1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 50, 113, 21));
        pushButton = new QPushButton(Bai10_Tuan1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 80, 75, 24));
        textEdit = new QTextEdit(Bai10_Tuan1);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 120, 381, 171));

        retranslateUi(Bai10_Tuan1);

        QMetaObject::connectSlotsByName(Bai10_Tuan1);
    } // setupUi

    void retranslateUi(QDialog *Bai10_Tuan1)
    {
        Bai10_Tuan1->setWindowTitle(QCoreApplication::translate("Bai10_Tuan1", "Bai10_Tuan1", nullptr));
        label->setText(QCoreApplication::translate("Bai10_Tuan1", "In ra m\303\240n h\303\254nh t\341\272\245t c\341\272\243 c\303\241c \306\260\341\273\233c s\341\273\221 nguy\303\252n t\341\273\221 kh\303\241c nhau c\341\273\247a N", nullptr));
        label_2->setText(QCoreApplication::translate("Bai10_Tuan1", "Nh\341\272\255p N:", nullptr));
        pushButton->setText(QCoreApplication::translate("Bai10_Tuan1", "In ra k\341\272\277t qu\341\272\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bai10_Tuan1: public Ui_Bai10_Tuan1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAI10_TUAN1_H
