/********************************************************************************
** Form generated from reading UI file 'Bai3_Tuan1.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAI3_TUAN1_H
#define UI_BAI3_TUAN1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Bai3_Tuan1
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QTextEdit *textEdit;

    void setupUi(QDialog *Bai3_Tuan1)
    {
        if (Bai3_Tuan1->objectName().isEmpty())
            Bai3_Tuan1->setObjectName(QString::fromUtf8("Bai3_Tuan1"));
        Bai3_Tuan1->resize(403, 300);
        pushButton = new QPushButton(Bai3_Tuan1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 60, 75, 24));
        label = new QLabel(Bai3_Tuan1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 341, 31));
        textEdit = new QTextEdit(Bai3_Tuan1);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 100, 381, 191));

        retranslateUi(Bai3_Tuan1);

        QMetaObject::connectSlotsByName(Bai3_Tuan1);
    } // setupUi

    void retranslateUi(QDialog *Bai3_Tuan1)
    {
        Bai3_Tuan1->setWindowTitle(QCoreApplication::translate("Bai3_Tuan1", "Bai3_Tuan1", nullptr));
        pushButton->setText(QCoreApplication::translate("Bai3_Tuan1", "In ra k\341\272\277t qu\341\272\243", nullptr));
        label->setText(QCoreApplication::translate("Bai3_Tuan1", "In ra m\303\240n h\303\254nh t\341\272\245t c\341\272\243 c\303\241c s\341\273\221 nguy\303\252n t\341\273\221 t\341\273\253 1000 \304\221\341\272\277n 2000", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bai3_Tuan1: public Ui_Bai3_Tuan1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAI3_TUAN1_H
