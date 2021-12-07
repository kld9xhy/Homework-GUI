/********************************************************************************
** Form generated from reading UI file 'Bai13_Tuan3.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAI13_TUAN3_H
#define UI_BAI13_TUAN3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Bai13_Tuan3
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QTextEdit *textEdit;

    void setupUi(QDialog *Bai13_Tuan3)
    {
        if (Bai13_Tuan3->objectName().isEmpty())
            Bai13_Tuan3->setObjectName(QString::fromUtf8("Bai13_Tuan3"));
        Bai13_Tuan3->resize(400, 300);
        pushButton = new QPushButton(Bai13_Tuan3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 80, 101, 24));
        label = new QLabel(Bai13_Tuan3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 10, 241, 31));
        lineEdit = new QLineEdit(Bai13_Tuan3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(192, 50, 113, 21));
        label_2 = new QLabel(Bai13_Tuan3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 50, 111, 21));
        textEdit = new QTextEdit(Bai13_Tuan3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 120, 381, 171));

        retranslateUi(Bai13_Tuan3);

        QMetaObject::connectSlotsByName(Bai13_Tuan3);
    } // setupUi

    void retranslateUi(QDialog *Bai13_Tuan3)
    {
        Bai13_Tuan3->setWindowTitle(QCoreApplication::translate("Bai13_Tuan3", "Bai13_Tuan3", nullptr));
        pushButton->setText(QCoreApplication::translate("Bai13_Tuan3", "In ma tr\341\272\255n", nullptr));
        label->setText(QCoreApplication::translate("Bai13_Tuan3", "In ra m\303\240n h\303\254nh ma tr\341\272\255n vu\303\264ng c\341\272\245p n xo\341\272\257n \341\273\221c", nullptr));
        label_2->setText(QCoreApplication::translate("Bai13_Tuan3", "Nh\341\272\255p 3 <= n <= 8:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bai13_Tuan3: public Ui_Bai13_Tuan3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAI13_TUAN3_H
