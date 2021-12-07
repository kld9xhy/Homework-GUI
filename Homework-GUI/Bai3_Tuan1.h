#pragma once

#include <QDialog>
#include "ui_Bai3_Tuan1.h"
#include <string>

using namespace std;

class Bai3_Tuan1 : public QDialog
{
	Q_OBJECT

public:
	Bai3_Tuan1(QWidget *parent = Q_NULLPTR);
	~Bai3_Tuan1();

public slots:
	void inrakq();

private:
	Ui::Bai3_Tuan1 ui;
};
