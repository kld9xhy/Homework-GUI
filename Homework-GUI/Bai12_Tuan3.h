#pragma once

#include <QDialog>
#include "ui_Bai12_Tuan3.h"
#include "qvalidator.h"
#include <string>

using namespace std;

class Bai12_Tuan3 : public QDialog
{
	Q_OBJECT

public:
	Bai12_Tuan3(QWidget* parent = Q_NULLPTR);
	~Bai12_Tuan3();

public slots:
	void inrakq();
	void setInput();
	void setInput2();
	void setInput3();
	void setInput4();

private:
	Ui::Bai12_Tuan3 ui;
	string input, input2, input3, input4;
};