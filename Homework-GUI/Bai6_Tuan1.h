#pragma once

#include <QDialog>
#include "ui_Bai6_Tuan1.h"
#include <string>

using namespace std;

class Bai6_Tuan1 : public QDialog
{
	Q_OBJECT

public:
	Bai6_Tuan1(QWidget* parent = Q_NULLPTR);
	~Bai6_Tuan1();

public slots:
	void inrakq();

private:
	Ui::Bai6_Tuan1 ui;
};
