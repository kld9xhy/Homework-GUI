/********************************************************************************
** Form generated from reading UI file 'Bai2_Tuan1.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAI2_TUAN1_H
#define UI_BAI2_TUAN1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Bai2_Tuan1
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *Bai2_Tuan1)
    {
        if (Bai2_Tuan1->objectName().isEmpty())
            Bai2_Tuan1->setObjectName(QString::fromUtf8("Bai2_Tuan1"));
        Bai2_Tuan1->resize(400, 300);
        label = new QLabel(Bai2_Tuan1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 15, 211, 31));
        pushButton = new QPushButton(Bai2_Tuan1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 60, 75, 24));
        textEdit = new QTextEdit(Bai2_Tuan1);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 100, 381, 191));

        retranslateUi(Bai2_Tuan1);

        QMetaObject::connectSlotsByName(Bai2_Tuan1);
    } // setupUi

    void retranslateUi(QWidget *Bai2_Tuan1)
    {
        Bai2_Tuan1->setWindowTitle(QCoreApplication::translate("Bai2_Tuan1", "Bai2_Tuan1", nullptr));
        label->setText(QCoreApplication::translate("Bai2_Tuan1", "In ra m\303\240n h\303\254nh 20 s\341\273\221 nguy\303\252n t\341\273\221 \304\221\341\272\247u ti\303\252n\n"
"", nullptr));
        pushButton->setText(QCoreApplication::translate("Bai2_Tuan1", "In ra k\341\272\277t qu\341\272\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bai2_Tuan1: public Ui_Bai2_Tuan1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAI2_TUAN1_H
