#pragma once

#include <QDialog>
#include "ui_Bai8_Tuan1.h"
#include "qvalidator.h"
#include <string>

using namespace std;

class Bai8_Tuan1 : public QDialog
{
	Q_OBJECT

public:
	Bai8_Tuan1(QWidget *parent = Q_NULLPTR);
	~Bai8_Tuan1();

public slots:
	void inrakq();
	void setInput();

private:
	Ui::Bai8_Tuan1 ui;
	string input;
};
