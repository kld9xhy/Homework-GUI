#pragma once

#include <QDialog>
#include "ui_Bai9_Tuan1.h"
#include "qvalidator.h"
#include <string>

using namespace std;

class Bai9_Tuan1 : public QDialog
{
	Q_OBJECT

public:
	Bai9_Tuan1(QWidget* parent = Q_NULLPTR);
	~Bai9_Tuan1();

public slots:
	void inrakq();
	void setInput();

private:
	Ui::Bai9_Tuan1 ui;
	string input;
};