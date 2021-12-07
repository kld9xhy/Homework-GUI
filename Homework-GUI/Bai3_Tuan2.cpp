#include "Bai3_Tuan2.h"

Bai3_Tuan2::Bai3_Tuan2(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	ui.lineEdit->setValidator(new QIntValidator(0, 2147483647, this));

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(inrakq()));
	QObject::connect(ui.lineEdit, SIGNAL(editingFinished()), this, SLOT(setInput()));
}

Bai3_Tuan2::~Bai3_Tuan2()
{
}

void Bai3_Tuan2::setInput()
{
	input = ui.lineEdit->text().toStdString();
}

void Bai3_Tuan2::inrakq()
{
	string kq;
	int n = stoi(input);
	float s = 0, t = 0, f = 1;
	for (int i = 1; i <= n; ++i)
	{
		f *= i;
		t += f;
		s += (float)1 / t;
	}
	kq += to_string(s);
	ui.textEdit->setText(QString::fromStdString(kq));
}
