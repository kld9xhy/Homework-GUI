#pragma once

#include <QDialog>
#include "ui_Bai7_Tuan1.h"
#include <string>

using namespace std;

class Bai7_Tuan1 : public QDialog
{
	Q_OBJECT

public:
	Bai7_Tuan1(QWidget* parent = Q_NULLPTR);
	~Bai7_Tuan1();

public slots:
	void inrakq();

private:
	Ui::Bai7_Tuan1 ui;
};
