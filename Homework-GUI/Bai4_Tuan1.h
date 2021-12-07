#pragma once

#include <QDialog>
#include "ui_Bai4_Tuan1.h"
#include <string>

using namespace std;

class Bai4_Tuan1 : public QDialog
{
	Q_OBJECT

public:
	Bai4_Tuan1(QWidget *parent = Q_NULLPTR);
	~Bai4_Tuan1();

public slots:
	void inrakq();

private:
	Ui::Bai4_Tuan1 ui;
};
