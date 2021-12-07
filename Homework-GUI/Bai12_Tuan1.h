#pragma once

#include <QDialog>
#include "ui_Bai12_Tuan1.h"
#include "qvalidator.h"
#include <string>

using namespace std;

class Bai12_Tuan1 : public QDialog
{
	Q_OBJECT

public:
	Bai12_Tuan1(QWidget* parent = Q_NULLPTR);
	~Bai12_Tuan1();

public slots:
	void intamgiacxuoi();
	void intamgiacnguoc();
	void setInput();

private:
	Ui::Bai12_Tuan1 ui;
	string input;
};