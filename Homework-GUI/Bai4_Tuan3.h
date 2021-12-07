#pragma once

#include <QDialog>
#include "ui_Bai4_Tuan3.h"
#include "qvalidator.h"
#include <string>

using namespace std;

class Bai4_Tuan3 : public QDialog
{
	Q_OBJECT

public:
	Bai4_Tuan3(QWidget* parent = Q_NULLPTR);
	~Bai4_Tuan3();

public slots:
	void inrakq();
	void setInput();
	void setInput2();

private:
	Ui::Bai4_Tuan3 ui;
	string input, input2;
};