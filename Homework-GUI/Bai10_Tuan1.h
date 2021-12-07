#pragma once

#include <QDialog>
#include "ui_Bai10_Tuan1.h"
#include "qvalidator.h"
#include <string>

using namespace std;

class Bai10_Tuan1 : public QDialog
{
	Q_OBJECT

public:
	Bai10_Tuan1(QWidget* parent = Q_NULLPTR);
	~Bai10_Tuan1();

public slots:
	void inrakq();
	void setInput();

private:
	Ui::Bai10_Tuan1 ui;
	string input;
};