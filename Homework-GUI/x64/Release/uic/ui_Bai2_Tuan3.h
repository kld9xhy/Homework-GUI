/********************************************************************************
** Form generated from reading UI file 'Bai2_Tuan3.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAI2_TUAN3_H
#define UI_BAI2_TUAN3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Bai2_Tuan3
{
public:
    QLabel *label;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;

    void setupUi(QDialog *Bai2_Tuan3)
    {
        if (Bai2_Tuan3->objectName().isEmpty())
            Bai2_Tuan3->setObjectName(QString::fromUtf8("Bai2_Tuan3"));
        Bai2_Tuan3->resize(400, 300);
        label = new QLabel(Bai2_Tuan3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 10, 271, 31));
        label_3 = new QLabel(Bai2_Tuan3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 80, 101, 21));
        lineEdit_2 = new QLineEdit(Bai2_Tuan3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 80, 281, 21));
        pushButton = new QPushButton(Bai2_Tuan3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 110, 75, 24));
        label_2 = new QLabel(Bai2_Tuan3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 50, 161, 21));
        lineEdit = new QLineEdit(Bai2_Tuan3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(220, 50, 113, 21));
        textEdit = new QTextEdit(Bai2_Tuan3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 140, 381, 151));

        retranslateUi(Bai2_Tuan3);

        QMetaObject::connectSlotsByName(Bai2_Tuan3);
    } // setupUi

    void retranslateUi(QDialog *Bai2_Tuan3)
    {
        Bai2_Tuan3->setWindowTitle(QCoreApplication::translate("Bai2_Tuan3", "Bai2_Tuan3", nullptr));
        label->setText(QCoreApplication::translate("Bai2_Tuan3", "In ra m\303\240n h\303\254nh t\341\272\245t c\341\272\243 c\303\241c s\341\273\221 nguy\303\252n t\341\273\221 c\341\273\247a d\303\243y s\341\273\221", nullptr));
        label_3->setText(QCoreApplication::translate("Bai2_Tuan3", "Nh\341\272\255p v\303\240o d\303\243y s\341\273\221:", nullptr));
        pushButton->setText(QCoreApplication::translate("Bai2_Tuan3", "In ra k\341\272\277t qu\341\272\243", nullptr));
        label_2->setText(QCoreApplication::translate("Bai2_Tuan3", "Nh\341\272\255p v\303\240o s\341\273\221 ph\341\272\247n t\341\273\255 c\341\273\247a d\303\243y:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bai2_Tuan3: public Ui_Bai2_Tuan3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAI2_TUAN3_H
