#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_HomeworkGUI.h"
#include "Tuan1.h"
#include "Tuan2.h"
#include "Tuan3.h"

#include <QtWidgets/qmessagebox.h>

class Ui_HomeworkGUIClass;
class HomeworkGUI : public QMainWindow
{
    Q_OBJECT

public:

    HomeworkGUI(QWidget* parent = 0);
    ~HomeworkGUI();

public slots:
	void showMessage()
	{
		QMessageBox::StandardButton reply;
		reply = QMessageBox::question(this, "Exit", "Are you sure you want to quit?", QMessageBox::Yes | QMessageBox::No);

		if (reply == QMessageBox::Yes)
			QApplication::quit();
	}

	void showTuan1()
	{
		Tuan1 *mTuan1 = new Tuan1(this);
		mTuan1->show();
	}

	void showTuan2()
	{
		Tuan2* mTuan2 = new Tuan2(this);
		mTuan2->show();
	}

	void showTuan3()
	{
		Tuan3* mTuan3 = new Tuan3(this);
		mTuan3->show();
	}

private:
    Ui::HomeworkGUIClass ui;
};
