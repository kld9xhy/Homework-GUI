/********************************************************************************
** Form generated from reading UI file 'Bai4_Tuan2.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAI4_TUAN2_H
#define UI_BAI4_TUAN2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Bai4_Tuan2
{
public:
    QLabel *label;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *Bai4_Tuan2)
    {
        if (Bai4_Tuan2->objectName().isEmpty())
            Bai4_Tuan2->setObjectName(QString::fromUtf8("Bai4_Tuan2"));
        Bai4_Tuan2->resize(400, 300);
        label = new QLabel(Bai4_Tuan2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 10, 371, 31));
        textEdit = new QTextEdit(Bai4_Tuan2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 100, 381, 191));
        lineEdit = new QLineEdit(Bai4_Tuan2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 40, 101, 21));
        pushButton = new QPushButton(Bai4_Tuan2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 70, 75, 24));
        label_2 = new QLabel(Bai4_Tuan2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 40, 49, 20));

        retranslateUi(Bai4_Tuan2);

        QMetaObject::connectSlotsByName(Bai4_Tuan2);
    } // setupUi

    void retranslateUi(QDialog *Bai4_Tuan2)
    {
        Bai4_Tuan2->setWindowTitle(QCoreApplication::translate("Bai4_Tuan2", "Bai4_Tuan2", nullptr));
        label->setText(QCoreApplication::translate("Bai4_Tuan2", "T\303\255nh s\341\273\221 Fibonaxi th\341\273\251 N", nullptr));
        pushButton->setText(QCoreApplication::translate("Bai4_Tuan2", "In ra k\341\272\277t qu\341\272\243", nullptr));
        label_2->setText(QCoreApplication::translate("Bai4_Tuan2", "Nh\341\272\255p N:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bai4_Tuan2: public Ui_Bai4_Tuan2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAI4_TUAN2_H
