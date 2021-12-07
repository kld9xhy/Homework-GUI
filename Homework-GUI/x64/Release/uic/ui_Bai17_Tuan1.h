/********************************************************************************
** Form generated from reading UI file 'Bai17_Tuan1.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAI17_TUAN1_H
#define UI_BAI17_TUAN1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Bai17_Tuan1
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QLabel *label;

    void setupUi(QDialog *Bai17_Tuan1)
    {
        if (Bai17_Tuan1->objectName().isEmpty())
            Bai17_Tuan1->setObjectName(QString::fromUtf8("Bai17_Tuan1"));
        Bai17_Tuan1->resize(400, 300);
        pushButton = new QPushButton(Bai17_Tuan1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 60, 75, 24));
        textEdit = new QTextEdit(Bai17_Tuan1);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 100, 381, 191));
        label = new QLabel(Bai17_Tuan1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(8, 16, 371, 31));

        retranslateUi(Bai17_Tuan1);

        QMetaObject::connectSlotsByName(Bai17_Tuan1);
    } // setupUi

    void retranslateUi(QDialog *Bai17_Tuan1)
    {
        Bai17_Tuan1->setWindowTitle(QCoreApplication::translate("Bai17_Tuan1", "Bai17_Tuan1", nullptr));
        pushButton->setText(QCoreApplication::translate("Bai17_Tuan1", "In ra k\341\272\277t qu\341\272\243", nullptr));
        label->setText(QCoreApplication::translate("Bai17_Tuan1", "\304\220\341\273\201 b\303\240i", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bai17_Tuan1: public Ui_Bai17_Tuan1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAI17_TUAN1_H
