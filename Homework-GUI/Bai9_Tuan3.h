#pragma once

#include <QDialog>
#include "ui_Bai9_Tuan3.h"
#include "qvalidator.h"
#include <string>

using namespace std;

class Bai9_Tuan3 : public QDialog
{
	Q_OBJECT

public:
	Bai9_Tuan3(QWidget* parent = Q_NULLPTR);
	~Bai9_Tuan3();

public slots:
	void inrakq();
	void setInput();
	void setInput2();
	void setInput3();

private:
	Ui::Bai9_Tuan3 ui;
	string input, input2, input3;
};