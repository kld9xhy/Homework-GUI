/********************************************************************************
** Form generated from reading UI file 'Bai4_Tuan1.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAI4_TUAN1_H
#define UI_BAI4_TUAN1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Bai4_Tuan1
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QTextEdit *textEdit;

    void setupUi(QDialog *Bai4_Tuan1)
    {
        if (Bai4_Tuan1->objectName().isEmpty())
            Bai4_Tuan1->setObjectName(QString::fromUtf8("Bai4_Tuan1"));
        Bai4_Tuan1->resize(400, 300);
        pushButton = new QPushButton(Bai4_Tuan1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 50, 75, 24));
        label = new QLabel(Bai4_Tuan1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 10, 361, 31));
        textEdit = new QTextEdit(Bai4_Tuan1);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 90, 381, 201));

        retranslateUi(Bai4_Tuan1);

        QMetaObject::connectSlotsByName(Bai4_Tuan1);
    } // setupUi

    void retranslateUi(QDialog *Bai4_Tuan1)
    {
        Bai4_Tuan1->setWindowTitle(QCoreApplication::translate("Bai4_Tuan1", "Bai4_Tuan1", nullptr));
        pushButton->setText(QCoreApplication::translate("Bai4_Tuan1", "In ra k\341\272\277t qu\341\272\243", nullptr));
        label->setText(QCoreApplication::translate("Bai4_Tuan1", "In ra m\303\240n h\303\254nh c\303\241c s\341\273\221 <100 v\303\240 chia h\341\272\277t cho 3,7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bai4_Tuan1: public Ui_Bai4_Tuan1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAI4_TUAN1_H
