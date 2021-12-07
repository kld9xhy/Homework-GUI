#pragma once

#include <QDialog>
#include "ui_Bai13_Tuan3.h"
#include "qvalidator.h"
#include <string>

using namespace std;

class Bai13_Tuan3 : public QDialog
{
	Q_OBJECT

public:
	Bai13_Tuan3(QWidget* parent = Q_NULLPTR);
	~Bai13_Tuan3();

public slots:
	void inrakq();
	void setInput();

private:
	Ui::Bai13_Tuan3 ui;
	string input;
};