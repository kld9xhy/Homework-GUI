#pragma once

#include <QDialog>
#include "ui_Bai8_Tuan3.h"
#include "qvalidator.h"
#include <string>

using namespace std;

class Bai8_Tuan3 : public QDialog
{
	Q_OBJECT

public:
	Bai8_Tuan3(QWidget* parent = Q_NULLPTR);
	~Bai8_Tuan3();

public slots:
	void inrakq();
	void setInput();
	void setInput2();

private:
	Ui::Bai8_Tuan3 ui;
	string input, input2;
};