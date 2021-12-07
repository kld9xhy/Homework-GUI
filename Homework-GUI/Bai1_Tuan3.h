#ifndef BAI1_TUAN3_H
#define BAI1_TUAN3_H

#pragma once

#include <QDialog>
#include "ui_Bai1_Tuan3.h"
#include "qvalidator.h"
#include <string>

using namespace std;

class Bai1_Tuan3 : public QDialog
{
	Q_OBJECT

public:
	Bai1_Tuan3(QWidget* parent = Q_NULLPTR);
	~Bai1_Tuan3();

public slots:
	void inrakq();
	void setInput();
	void setInput2();

private:
	Ui::Bai1_Tuan3 ui;
	string input, input2;
};

#endif // !BAI1_TUAN3_H