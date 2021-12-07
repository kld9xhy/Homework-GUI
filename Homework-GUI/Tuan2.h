#ifndef TUAN2_H
#define TUAN2_H

#pragma once

#include <QWidget>
#include <qdialog.h>
#include "ui_Tuan2.h"
#include "Bai1_Tuan2.h"
#include "Bai2_Tuan2.h"
#include "Bai3_Tuan2.h"
#include "Bai4_Tuan2.h"

class Tuan2 : public QDialog
{
	Q_OBJECT

public:
	Tuan2(QWidget* parent);
	~Tuan2();

public slots:
	void showBai1()
	{
		Bai1_Tuan2* mBai1 = new Bai1_Tuan2(this);
		mBai1->show();
	}
	void showBai2()
	{
		Bai2_Tuan2* mBai2 = new Bai2_Tuan2(this);
		mBai2->show();
	}
	void showBai3()
	{
		Bai3_Tuan2* mBai3 = new Bai3_Tuan2(this);
		mBai3->show();
	}
	void showBai4()
	{
		Bai4_Tuan2* mBai4 = new Bai4_Tuan2(this);
		mBai4->show();
	}
private:
	Ui::Tuan2 ui;
};

#endif