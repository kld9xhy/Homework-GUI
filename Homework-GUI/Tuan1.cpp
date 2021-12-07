#include "Tuan1.h"

Tuan1::Tuan1(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	QObject::connect(ui.bai1, SIGNAL(clicked()), this, SLOT(showBai1()));
	QObject::connect(ui.bai2, SIGNAL(clicked()), this, SLOT(showBai2()));
	QObject::connect(ui.bai3, SIGNAL(clicked()), this, SLOT(showBai3()));
	QObject::connect(ui.bai4, SIGNAL(clicked()), this, SLOT(showBai4()));
	QObject::connect(ui.bai5, SIGNAL(clicked()), this, SLOT(showBai5()));
	QObject::connect(ui.bai6, SIGNAL(clicked()), this, SLOT(showBai6()));
	QObject::connect(ui.bai7, SIGNAL(clicked()), this, SLOT(showBai7()));
	QObject::connect(ui.bai8, SIGNAL(clicked()), this, SLOT(showBai8()));
	QObject::connect(ui.bai9, SIGNAL(clicked()), this, SLOT(showBai9()));
	QObject::connect(ui.bai10, SIGNAL(clicked()), this, SLOT(showBai10()));
	QObject::connect(ui.bai11, SIGNAL(clicked()), this, SLOT(showBai11()));
	QObject::connect(ui.bai12, SIGNAL(clicked()), this, SLOT(showBai12()));
}

Tuan1::~Tuan1()
{

}
