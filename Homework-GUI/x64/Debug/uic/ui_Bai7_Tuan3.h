/********************************************************************************
** Form generated from reading UI file 'Bai7_Tuan3.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAI7_TUAN3_H
#define UI_BAI7_TUAN3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Bai7_Tuan3
{
public:
    QLabel *label;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;

    void setupUi(QDialog *Bai7_Tuan3)
    {
        if (Bai7_Tuan3->objectName().isEmpty())
            Bai7_Tuan3->setObjectName(QString::fromUtf8("Bai7_Tuan3"));
        Bai7_Tuan3->resize(400, 300);
        label = new QLabel(Bai7_Tuan3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 351, 31));
        label_3 = new QLabel(Bai7_Tuan3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 80, 101, 21));
        lineEdit_2 = new QLineEdit(Bai7_Tuan3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 80, 281, 21));
        pushButton = new QPushButton(Bai7_Tuan3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 110, 75, 24));
        label_2 = new QLabel(Bai7_Tuan3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 50, 161, 21));
        lineEdit = new QLineEdit(Bai7_Tuan3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(220, 50, 113, 21));
        textEdit = new QTextEdit(Bai7_Tuan3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 140, 381, 151));

        retranslateUi(Bai7_Tuan3);

        QMetaObject::connectSlotsByName(Bai7_Tuan3);
    } // setupUi

    void retranslateUi(QDialog *Bai7_Tuan3)
    {
        Bai7_Tuan3->setWindowTitle(QCoreApplication::translate("Bai7_Tuan3", "Bai7_Tuan3", nullptr));
        label->setText(QCoreApplication::translate("Bai7_Tuan3", "T\303\254m 1 s\341\273\221 t\341\273\261 nhi\303\252n nh\341\273\217 nh\341\272\245t c kh\303\264ng b\341\272\261ng b\341\272\245t c\341\273\251 s\341\273\221 n\303\240o trong d\303\243y", nullptr));
        label_3->setText(QCoreApplication::translate("Bai7_Tuan3", "Nh\341\272\255p v\303\240o d\303\243y s\341\273\221:", nullptr));
        pushButton->setText(QCoreApplication::translate("Bai7_Tuan3", "In ra k\341\272\277t qu\341\272\243", nullptr));
        label_2->setText(QCoreApplication::translate("Bai7_Tuan3", "Nh\341\272\255p v\303\240o s\341\273\221 ph\341\272\247n t\341\273\255 c\341\273\247a d\303\243y:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bai7_Tuan3: public Ui_Bai7_Tuan3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAI7_TUAN3_H
