/********************************************************************************
** Form generated from reading UI file 'Bai9_Tuan3.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAI9_TUAN3_H
#define UI_BAI9_TUAN3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Bai9_Tuan3
{
public:
    QLabel *label;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QLineEdit *lineEdit_3;
    QLabel *label_4;

    void setupUi(QDialog *Bai9_Tuan3)
    {
        if (Bai9_Tuan3->objectName().isEmpty())
            Bai9_Tuan3->setObjectName(QString::fromUtf8("Bai9_Tuan3"));
        Bai9_Tuan3->resize(400, 300);
        label = new QLabel(Bai9_Tuan3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 0, 361, 31));
        label_3 = new QLabel(Bai9_Tuan3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 90, 101, 21));
        lineEdit_2 = new QLineEdit(Bai9_Tuan3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 90, 281, 21));
        pushButton = new QPushButton(Bai9_Tuan3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 120, 75, 24));
        label_2 = new QLabel(Bai9_Tuan3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 60, 161, 21));
        lineEdit = new QLineEdit(Bai9_Tuan3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(220, 60, 113, 21));
        textEdit = new QTextEdit(Bai9_Tuan3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 150, 381, 141));
        lineEdit_3 = new QLineEdit(Bai9_Tuan3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(180, 30, 113, 21));
        label_4 = new QLabel(Bai9_Tuan3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 30, 61, 21));

        retranslateUi(Bai9_Tuan3);

        QMetaObject::connectSlotsByName(Bai9_Tuan3);
    } // setupUi

    void retranslateUi(QDialog *Bai9_Tuan3)
    {
        Bai9_Tuan3->setWindowTitle(QCoreApplication::translate("Bai9_Tuan3", "Bai9_Tuan3", nullptr));
        label->setText(QCoreApplication::translate("Bai9_Tuan3", "\304\220\341\272\277m trong d\303\243y s\341\273\221 c\303\263 bao nhi\303\252u s\341\273\221 b\341\272\261ng c, l\341\273\233n h\306\241n c, nh\341\273\217 h\306\241n c", nullptr));
        label_3->setText(QCoreApplication::translate("Bai9_Tuan3", "Nh\341\272\255p v\303\240o d\303\243y s\341\273\221:", nullptr));
        pushButton->setText(QCoreApplication::translate("Bai9_Tuan3", "In ra k\341\272\277t qu\341\272\243", nullptr));
        label_2->setText(QCoreApplication::translate("Bai9_Tuan3", "Nh\341\272\255p v\303\240o s\341\273\221 ph\341\272\247n t\341\273\255 c\341\273\247a d\303\243y:", nullptr));
        label_4->setText(QCoreApplication::translate("Bai9_Tuan3", "Nh\341\272\255p s\341\273\221 c:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bai9_Tuan3: public Ui_Bai9_Tuan3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAI9_TUAN3_H
