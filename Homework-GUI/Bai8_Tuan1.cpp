#include "Bai8_Tuan1.h"

Bai8_Tuan1::Bai8_Tuan1(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	ui.lineEdit->setValidator(new QIntValidator(0, 2147483647, this));

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(inrakq()));
	QObject::connect(ui.lineEdit, SIGNAL(editingFinished()), this, SLOT(setInput()));
}

Bai8_Tuan1::~Bai8_Tuan1()
{
}

void Bai8_Tuan1::setInput()
{
	input = ui.lineEdit->text().toStdString();
}

void Bai8_Tuan1::inrakq()
{
	string kq;
	int n = stoi(input);
	for (int i = 2; i <= n; ++i)
	{
		if (n % i == 0)
		{
			kq += " ";
			kq += to_string(i);
			break;
		}
	}
	ui.textEdit->setText(QString::fromStdString(kq));
}
