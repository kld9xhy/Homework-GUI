#include "Bai2_Tuan1.h"

Bai2_Tuan1::Bai2_Tuan1(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(inrakq()));
}

Bai2_Tuan1::~Bai2_Tuan1()
{
}