/********************************************************************************
** Form generated from reading UI file 'Bai1_Tuan1.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAI1_TUAN1_H
#define UI_BAI1_TUAN1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Bai1_Tuan1
{
public:
    QLabel *title;
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *Bai1_Tuan1)
    {
        if (Bai1_Tuan1->objectName().isEmpty())
            Bai1_Tuan1->setObjectName(QString::fromUtf8("Bai1_Tuan1"));
        Bai1_Tuan1->resize(400, 300);
        title = new QLabel(Bai1_Tuan1);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(110, 20, 201, 31));
        pushButton = new QPushButton(Bai1_Tuan1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 60, 75, 24));
        textEdit = new QTextEdit(Bai1_Tuan1);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 110, 381, 171));

        retranslateUi(Bai1_Tuan1);

        QMetaObject::connectSlotsByName(Bai1_Tuan1);
    } // setupUi

    void retranslateUi(QWidget *Bai1_Tuan1)
    {
        Bai1_Tuan1->setWindowTitle(QCoreApplication::translate("Bai1_Tuan1", "Bai1_Tuan1", nullptr));
        title->setText(QCoreApplication::translate("Bai1_Tuan1", "In ra m\303\240n h\303\254nh t\341\272\245t c\341\272\243 c\303\241c h\341\273\243p s\341\273\221 <100\n"
"", nullptr));
        pushButton->setText(QCoreApplication::translate("Bai1_Tuan1", "In ra k\341\272\277t qu\341\272\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bai1_Tuan1: public Ui_Bai1_Tuan1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAI1_TUAN1_H
