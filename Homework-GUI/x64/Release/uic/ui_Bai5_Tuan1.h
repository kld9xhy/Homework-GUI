/********************************************************************************
** Form generated from reading UI file 'Bai5_Tuan1.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAI5_TUAN1_H
#define UI_BAI5_TUAN1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Bai5_Tuan1
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QTextEdit *textEdit;

    void setupUi(QDialog *Bai5_Tuan1)
    {
        if (Bai5_Tuan1->objectName().isEmpty())
            Bai5_Tuan1->setObjectName(QString::fromUtf8("Bai5_Tuan1"));
        Bai5_Tuan1->resize(400, 300);
        pushButton = new QPushButton(Bai5_Tuan1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 50, 75, 24));
        label = new QLabel(Bai5_Tuan1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 441, 31));
        textEdit = new QTextEdit(Bai5_Tuan1);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 90, 381, 201));

        retranslateUi(Bai5_Tuan1);

        QMetaObject::connectSlotsByName(Bai5_Tuan1);
    } // setupUi

    void retranslateUi(QDialog *Bai5_Tuan1)
    {
        Bai5_Tuan1->setWindowTitle(QCoreApplication::translate("Bai5_Tuan1", "Bai5_Tuan1", nullptr));
        pushButton->setText(QCoreApplication::translate("Bai5_Tuan1", "In ra k\341\272\277t qu\341\272\243", nullptr));
        label->setText(QCoreApplication::translate("Bai5_Tuan1", "In ra m\303\240n h\303\254nh c\303\241c s\341\273\221 n\341\272\261m gi\341\273\257a 1000 v\303\240 2000 \304\221\341\273\223ng th\341\273\235i chia h\341\272\277t cho 3,5,7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bai5_Tuan1: public Ui_Bai5_Tuan1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAI5_TUAN1_H
