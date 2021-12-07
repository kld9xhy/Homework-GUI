/********************************************************************************
** Form generated from reading UI file 'Tuan2.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUAN2_H
#define UI_TUAN2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Tuan2
{
public:
    QLabel *title;
    QPushButton *bai1;
    QPushButton *bai2;
    QPushButton *bai3;
    QPushButton *bai4;

    void setupUi(QDialog *Tuan2)
    {
        if (Tuan2->objectName().isEmpty())
            Tuan2->setObjectName(QString::fromUtf8("Tuan2"));
        Tuan2->resize(400, 300);
        title = new QLabel(Tuan2);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(160, 40, 91, 16));
        bai1 = new QPushButton(Tuan2);
        bai1->setObjectName(QString::fromUtf8("bai1"));
        bai1->setGeometry(QRect(90, 90, 75, 24));
        bai2 = new QPushButton(Tuan2);
        bai2->setObjectName(QString::fromUtf8("bai2"));
        bai2->setGeometry(QRect(240, 90, 75, 24));
        bai3 = new QPushButton(Tuan2);
        bai3->setObjectName(QString::fromUtf8("bai3"));
        bai3->setGeometry(QRect(90, 180, 75, 24));
        bai4 = new QPushButton(Tuan2);
        bai4->setObjectName(QString::fromUtf8("bai4"));
        bai4->setGeometry(QRect(240, 180, 75, 24));

        retranslateUi(Tuan2);

        QMetaObject::connectSlotsByName(Tuan2);
    } // setupUi

    void retranslateUi(QDialog *Tuan2)
    {
        Tuan2->setWindowTitle(QCoreApplication::translate("Tuan2", "Tuan2", nullptr));
        title->setText(QCoreApplication::translate("Tuan2", "L\341\273\261a ch\341\273\215n b\303\240i t\341\272\255p", nullptr));
        bai1->setText(QCoreApplication::translate("Tuan2", "B\303\240i 1", nullptr));
        bai2->setText(QCoreApplication::translate("Tuan2", "B\303\240i 2", nullptr));
        bai3->setText(QCoreApplication::translate("Tuan2", "B\303\240i 3", nullptr));
        bai4->setText(QCoreApplication::translate("Tuan2", "B\303\240i 4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tuan2: public Ui_Tuan2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUAN2_H
