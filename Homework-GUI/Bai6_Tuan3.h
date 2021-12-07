#pragma once

#include <QDialog>
#include "ui_Bai6_Tuan3.h"
#include "qvalidator.h"
#include <string>

using namespace std;

class Bai6_Tuan3 : public QDialog
{
	Q_OBJECT

public:
	Bai6_Tuan3(QWidget* parent = Q_NULLPTR);
	~Bai6_Tuan3();

public slots:
	void setInput();
	void setInput2();
	void inrakq();

private:
	Ui::Bai6_Tuan3 ui;
	string input, input2;
};