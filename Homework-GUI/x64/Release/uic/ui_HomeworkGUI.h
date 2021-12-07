/********************************************************************************
** Form generated from reading UI file 'HomeworkGUI.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEWORKGUI_H
#define UI_HOMEWORKGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeworkGUIClass
{
public:
    QWidget *centralWidget;
    QPushButton *tuan1;
    QPushButton *tuan2;
    QPushButton *tuan3;
    QLabel *label;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HomeworkGUIClass)
    {
        if (HomeworkGUIClass->objectName().isEmpty())
            HomeworkGUIClass->setObjectName(QString::fromUtf8("HomeworkGUIClass"));
        HomeworkGUIClass->resize(520, 396);
        centralWidget = new QWidget(HomeworkGUIClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tuan1 = new QPushButton(centralWidget);
        tuan1->setObjectName(QString::fromUtf8("tuan1"));
        tuan1->setGeometry(QRect(220, 100, 75, 24));
        tuan2 = new QPushButton(centralWidget);
        tuan2->setObjectName(QString::fromUtf8("tuan2"));
        tuan2->setGeometry(QRect(220, 170, 75, 24));
        tuan3 = new QPushButton(centralWidget);
        tuan3->setObjectName(QString::fromUtf8("tuan3"));
        tuan3->setGeometry(QRect(220, 250, 75, 24));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 50, 81, 16));
        HomeworkGUIClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(HomeworkGUIClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        HomeworkGUIClass->setStatusBar(statusBar);

        retranslateUi(HomeworkGUIClass);

        QMetaObject::connectSlotsByName(HomeworkGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *HomeworkGUIClass)
    {
        HomeworkGUIClass->setWindowTitle(QCoreApplication::translate("HomeworkGUIClass", "HomeworkGUI", nullptr));
        tuan1->setText(QCoreApplication::translate("HomeworkGUIClass", "Tu\341\272\247n 1", nullptr));
        tuan2->setText(QCoreApplication::translate("HomeworkGUIClass", "Tu\341\272\247n 2", nullptr));
        tuan3->setText(QCoreApplication::translate("HomeworkGUIClass", "Tu\341\272\247n 3", nullptr));
        label->setText(QCoreApplication::translate("HomeworkGUIClass", "L\341\273\261a ch\341\273\215n tu\341\272\247n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomeworkGUIClass: public Ui_HomeworkGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWORKGUI_H
