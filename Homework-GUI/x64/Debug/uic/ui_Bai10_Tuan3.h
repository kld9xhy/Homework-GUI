/********************************************************************************
** Form generated from reading UI file 'Bai10_Tuan3.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAI10_TUAN3_H
#define UI_BAI10_TUAN3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Bai10_Tuan3
{
public:
    QLabel *label;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;

    void setupUi(QDialog *Bai10_Tuan3)
    {
        if (Bai10_Tuan3->objectName().isEmpty())
            Bai10_Tuan3->setObjectName(QString::fromUtf8("Bai10_Tuan3"));
        Bai10_Tuan3->resize(400, 300);
        label = new QLabel(Bai10_Tuan3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 221, 41));
        label_3 = new QLabel(Bai10_Tuan3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 90, 101, 21));
        lineEdit_2 = new QLineEdit(Bai10_Tuan3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 90, 281, 21));
        pushButton = new QPushButton(Bai10_Tuan3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 120, 75, 24));
        label_2 = new QLabel(Bai10_Tuan3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 60, 161, 21));
        lineEdit = new QLineEdit(Bai10_Tuan3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(220, 60, 113, 21));
        textEdit = new QTextEdit(Bai10_Tuan3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 150, 381, 141));

        retranslateUi(Bai10_Tuan3);

        QMetaObject::connectSlotsByName(Bai10_Tuan3);
    } // setupUi

    void retranslateUi(QDialog *Bai10_Tuan3)
    {
        Bai10_Tuan3->setWindowTitle(QCoreApplication::translate("Bai10_Tuan3", "Bai10_Tuan3", nullptr));
        label->setText(QCoreApplication::translate("Bai10_Tuan3", "In ra s\341\273\221 l\306\260\341\273\243ng v\303\240 c\303\241c ch\341\273\211 s\341\273\221 \304\221\341\272\247u ti\303\252n c\341\273\247a\n"
"d\303\243y con d\303\240i nh\341\272\245t g\341\273\223m c\303\241c s\341\273\221 b\341\272\261ng nhau", nullptr));
        label_3->setText(QCoreApplication::translate("Bai10_Tuan3", "Nh\341\272\255p v\303\240o d\303\243y s\341\273\221:", nullptr));
        pushButton->setText(QCoreApplication::translate("Bai10_Tuan3", "In ra k\341\272\277t qu\341\272\243", nullptr));
        label_2->setText(QCoreApplication::translate("Bai10_Tuan3", "Nh\341\272\255p v\303\240o s\341\273\221 ph\341\272\247n t\341\273\255 c\341\273\247a d\303\243y:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bai10_Tuan3: public Ui_Bai10_Tuan3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAI10_TUAN3_H
