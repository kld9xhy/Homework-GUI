#ifndef TUAN3_H
#define TUAN3_H

#pragma once

#include <QWidget>
#include <qdialog.h>
#include "ui_Tuan3.h"
#include "Bai1_Tuan3.h"
#include "Bai2_Tuan3.h"
#include "Bai3_Tuan3.h"
#include "Bai4_Tuan3.h"
#include "Bai5_Tuan3.h"
#include "Bai6_Tuan3.h"
#include "Bai7_Tuan3.h"
#include "Bai8_Tuan3.h"
#include "Bai9_Tuan3.h"
#include "Bai10_Tuan3.h"
#include "Bai11_Tuan3.h"
#include "Bai12_Tuan3.h"
#include "Bai13_Tuan3.h"

class Tuan3 : public QDialog
{
	Q_OBJECT

public:
	Tuan3(QWidget* parent);
	~Tuan3();

public slots:
	void showBai1()
	{
		Bai1_Tuan3* mBai1 = new Bai1_Tuan3(this);
		mBai1->show();
	}
	void showBai2()
	{
		Bai2_Tuan3* mBai2 = new Bai2_Tuan3(this);
		mBai2->show();
	}
	void showBai3()
	{
		Bai3_Tuan3* mBai3 = new Bai3_Tuan3(this);
		mBai3->show();
	}
	void showBai4()
	{
		Bai4_Tuan3* mBai4 = new Bai4_Tuan3(this);
		mBai4->show();
	}
	void showBai5()
	{
		Bai5_Tuan3* mBai5 = new Bai5_Tuan3(this);
		mBai5->show();
	}
	void showBai6()
	{
		Bai6_Tuan3* mBai6 = new Bai6_Tuan3(this);
		mBai6->show();
	}
	void showBai7()
	{
		Bai7_Tuan3* mBai7 = new Bai7_Tuan3(this);
		mBai7->show();
	}
	void showBai8()
	{
		Bai8_Tuan3* mBai8 = new Bai8_Tuan3(this);
		mBai8->show();
	}
	void showBai9()
	{
		Bai9_Tuan3* mBai9 = new Bai9_Tuan3(this);
		mBai9->show();
	}
	void showBai10()
	{
		Bai10_Tuan3* mBai10 = new Bai10_Tuan3(this);
		mBai10->show();
	}
	void showBai11()
	{
		Bai11_Tuan3* mBai11 = new Bai11_Tuan3(this);
		mBai11->show();
	}
	void showBai12()
	{
		Bai12_Tuan3* mBai12 = new Bai12_Tuan3(this);
		mBai12->show();
	}
	void showBai13()
	{
		Bai13_Tuan3* mBai13 = new Bai13_Tuan3(this);
		mBai13->show();
	}
private:
	Ui::Tuan3 ui;
};

#endif