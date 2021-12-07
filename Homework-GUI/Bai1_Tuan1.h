#pragma once

#include <QWidget>
#include <qdialog.h>
#include "ui_Bai1_Tuan1.h"
#include <string>

using namespace std;

class Bai1_Tuan1 : public QDialog
{
	Q_OBJECT

public:
	Bai1_Tuan1(QWidget *parent);
	~Bai1_Tuan1();

public slots:
	void inrakq();

private:
	Ui::Bai1_Tuan1 ui;
};
