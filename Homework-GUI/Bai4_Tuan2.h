#pragma once

#include <QDialog>
#include "ui_Bai4_Tuan2.h"
#include "qvalidator.h"
#include <string>

using namespace std;

class Bai4_Tuan2 : public QDialog
{
	Q_OBJECT

public:
	Bai4_Tuan2(QWidget* parent = Q_NULLPTR);
	~Bai4_Tuan2();

public slots:
	void inrakq();
	void setInput();

private:
	Ui::Bai4_Tuan2 ui;
	string input;
};
