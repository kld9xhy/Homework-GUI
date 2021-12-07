/********************************************************************************
** Form generated from reading UI file 'Bai8_Tuan1.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAI8_TUAN1_H
#define UI_BAI8_TUAN1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Bai8_Tuan1
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QDialog *Bai8_Tuan1)
    {
        if (Bai8_Tuan1->objectName().isEmpty())
            Bai8_Tuan1->setObjectName(QString::fromUtf8("Bai8_Tuan1"));
        Bai8_Tuan1->resize(400, 300);
        label = new QLabel(Bai8_Tuan1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 371, 21));
        label_2 = new QLabel(Bai8_Tuan1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 40, 49, 20));
        lineEdit = new QLineEdit(Bai8_Tuan1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 40, 101, 21));
        pushButton = new QPushButton(Bai8_Tuan1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 70, 75, 24));
        textEdit = new QTextEdit(Bai8_Tuan1);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 100, 381, 191));

        retranslateUi(Bai8_Tuan1);

        QMetaObject::connectSlotsByName(Bai8_Tuan1);
    } // setupUi

    void retranslateUi(QDialog *Bai8_Tuan1)
    {
        Bai8_Tuan1->setWindowTitle(QCoreApplication::translate("Bai8_Tuan1", "Bai8_Tuan1", nullptr));
        label->setText(QCoreApplication::translate("Bai8_Tuan1", " In ra \306\260\341\273\233c s\341\273\221 nguy\303\252n t\341\273\221 nh\341\273\217 nh\341\272\245t c\341\273\247a N", nullptr));
        label_2->setText(QCoreApplication::translate("Bai8_Tuan1", "Nh\341\272\255p N:", nullptr));
        pushButton->setText(QCoreApplication::translate("Bai8_Tuan1", "In ra k\341\272\277t qu\341\272\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bai8_Tuan1: public Ui_Bai8_Tuan1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAI8_TUAN1_H
