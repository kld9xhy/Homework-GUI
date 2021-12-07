#include "Bai1_Tuan2.h"

Bai1_Tuan2::Bai1_Tuan2(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	ui.lineEdit->setValidator(new QIntValidator(0, 2147483647, this));

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(inrakq()));
	QObject::connect(ui.lineEdit, SIGNAL(editingFinished()), this, SLOT(setInput()));
}

Bai1_Tuan2::~Bai1_Tuan2()
{
}

void Bai1_Tuan2::setInput()
{
	input = ui.lineEdit->text().toStdString();
}

void Bai1_Tuan2::inrakq()
{
	string kq;
	int n = stoi(input);
	float s = 0, t = 0;
	for (int i = 1; i <= n; ++i)
	{
		t += i;
		s += (float)1 / t;
	}
	kq += to_string(s);
	ui.textEdit->setText(QString::fromStdString(kq));
}
