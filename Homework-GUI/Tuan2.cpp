#include "Tuan2.h"

Tuan2::Tuan2(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	QObject::connect(ui.bai1, SIGNAL(clicked()), this, SLOT(showBai1()));
	QObject::connect(ui.bai2, SIGNAL(clicked()), this, SLOT(showBai2()));
	QObject::connect(ui.bai3, SIGNAL(clicked()), this, SLOT(showBai3()));
	QObject::connect(ui.bai4, SIGNAL(clicked()), this, SLOT(showBai4()));
}

Tuan2::~Tuan2()
{

}
