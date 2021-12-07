#include "Bai10_Tuan1.h"

Bai10_Tuan1::Bai10_Tuan1(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	ui.lineEdit->setValidator(new QIntValidator(0, 2147483647, this));

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(inrakq()));
	QObject::connect(ui.lineEdit, SIGNAL(editingFinished()), this, SLOT(setInput()));
}

Bai10_Tuan1::~Bai10_Tuan1()
{
}

void Bai10_Tuan1::setInput()
{
	input = ui.lineEdit->text().toStdString();
}

void Bai10_Tuan1::inrakq()
{
	string kq;
	int n = stoi(input);
	int count;
	for (int i = 2; i <= n; ++i)
		{
		count = 0;
		while (n % i == 0) {
			++count;
			n /= i;
		}
		if (count) {
			kq += to_string(i);
			kq += " ";
			}
		}
	ui.textEdit->setText(QString::fromStdString(kq));
}