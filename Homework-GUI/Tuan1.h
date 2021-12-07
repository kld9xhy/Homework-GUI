#ifndef TUAN1_H
#define TUAN1_H

#pragma once

#include <QWidget>
#include <qdialog.h>
#include "ui_Tuan1.h"
#include "Bai1_Tuan1.h"
#include "Bai2_Tuan1.h"
#include "Bai3_Tuan1.h"
#include "Bai4_Tuan1.h"
#include "Bai5_Tuan1.h"
#include "Bai6_Tuan1.h"
#include "Bai7_Tuan1.h"
#include "Bai8_Tuan1.h"
#include "Bai9_Tuan1.h"
#include "Bai10_Tuan1.h"
#include "Bai11_Tuan1.h"
#include "Bai12_Tuan1.h"

class Tuan1 : public QDialog
{
	Q_OBJECT

public:
	Tuan1(QWidget* parent);
	~Tuan1();

public slots:
	void showBai1()
	{
		Bai1_Tuan1* mBai1 = new Bai1_Tuan1(this);
		mBai1->show();
	}
	void showBai2()
	{
		Bai2_Tuan1* mBai2 = new Bai2_Tuan1(this);
		mBai2->show();
	}
	void showBai3()
	{
		Bai3_Tuan1* mBai3 = new Bai3_Tuan1(this);
		mBai3->show();
	}
	void showBai4()
	{
		Bai4_Tuan1* mBai4 = new Bai4_Tuan1(this);
		mBai4->show();
	}
	void showBai5()
	{
		Bai5_Tuan1* mBai5 = new Bai5_Tuan1(this);
		mBai5->show();
	}
	void showBai6()
	{
		Bai6_Tuan1* mBai6 = new Bai6_Tuan1(this);
		mBai6->show();
	}
	void showBai7()
	{
		Bai7_Tuan1* mBai7 = new Bai7_Tuan1(this);
		mBai7->show();
	}
	void showBai8()
	{
		Bai8_Tuan1* mBai8 = new Bai8_Tuan1(this);
		mBai8->show();
	}
	void showBai9()
	{
		Bai9_Tuan1* mBai9 = new Bai9_Tuan1(this);
		mBai9->show();
	}
	void showBai10()
	{
		Bai10_Tuan1* mBai10 = new Bai10_Tuan1(this);
		mBai10->show();
	}
	void showBai11()
	{
		Bai11_Tuan1* mBai11 = new Bai11_Tuan1(this);
		mBai11->show();
	}
	void showBai12()
	{
		Bai12_Tuan1* mBai12 = new Bai12_Tuan1(this);
		mBai12->show();
	}
private:
	Ui::Tuan1 ui;
};

#endif