/********************************************************************************
** Form generated from reading UI file 'Bai9_Tuan1.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAI9_TUAN1_H
#define UI_BAI9_TUAN1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Bai9_Tuan1
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QDialog *Bai9_Tuan1)
    {
        if (Bai9_Tuan1->objectName().isEmpty())
            Bai9_Tuan1->setObjectName(QString::fromUtf8("Bai9_Tuan1"));
        Bai9_Tuan1->resize(400, 300);
        label = new QLabel(Bai9_Tuan1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 351, 41));
        label_2 = new QLabel(Bai9_Tuan1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 60, 49, 21));
        lineEdit = new QLineEdit(Bai9_Tuan1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 60, 131, 21));
        pushButton = new QPushButton(Bai9_Tuan1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 90, 75, 24));
        textEdit = new QTextEdit(Bai9_Tuan1);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 120, 381, 171));

        retranslateUi(Bai9_Tuan1);

        QMetaObject::connectSlotsByName(Bai9_Tuan1);
    } // setupUi

    void retranslateUi(QDialog *Bai9_Tuan1)
    {
        Bai9_Tuan1->setWindowTitle(QCoreApplication::translate("Bai9_Tuan1", "Bai9_Tuan1", nullptr));
        label->setText(QCoreApplication::translate("Bai9_Tuan1", "                         Cho s\341\273\221 t\341\273\261 nhi\303\252n N>1 b\341\272\245t k\341\273\263\n"
"In ra khai tri\341\273\203n th\303\240nh t\303\255ch c\303\241c s\341\273\221 nguy\303\252n t\341\273\221 t\303\255nh t\341\273\253 nh\341\273\217 \304\221\341\272\277n l\341\273\233n", nullptr));
        label_2->setText(QCoreApplication::translate("Bai9_Tuan1", "Nh\341\272\255p N:", nullptr));
        pushButton->setText(QCoreApplication::translate("Bai9_Tuan1", "In ra k\341\272\277t qu\341\272\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bai9_Tuan1: public Ui_Bai9_Tuan1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAI9_TUAN1_H
