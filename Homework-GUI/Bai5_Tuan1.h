#pragma once

#include <QDialog>
#include "ui_Bai5_Tuan1.h"
#include <string>

using namespace std;

class Bai5_Tuan1 : public QDialog
{
	Q_OBJECT

public:
	Bai5_Tuan1(QWidget* parent = Q_NULLPTR);
	~Bai5_Tuan1();

public slots:
	void inrakq();

private:
	Ui::Bai5_Tuan1 ui;
};
