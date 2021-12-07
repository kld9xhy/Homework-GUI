#ifndef BAI11_TUAN1_H
#define BAI11_TUAN1_H

#pragma once

#include <QDialog>
#include "ui_Bai11_Tuan1.h"
#include "qvalidator.h"
#include <string>

using namespace std;

class Bai11_Tuan1 : public QDialog
{
	Q_OBJECT

public:
	Bai11_Tuan1(QWidget* parent = Q_NULLPTR);
	~Bai11_Tuan1();

public slots:
	void inrakq();
	void setInput();
	void setInput2();

private:
	Ui::Bai11_Tuan1 ui;
	string input, input2;
};

#endif