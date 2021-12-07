#include "Bai4_Tuan2.h"

Bai4_Tuan2::Bai4_Tuan2(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	ui.lineEdit->setValidator(new QIntValidator(0, 2147483647, this));

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(inrakq()));
	QObject::connect(ui.lineEdit, SIGNAL(editingFinished()), this, SLOT(setInput()));
}

Bai4_Tuan2::~Bai4_Tuan2()
{
}

void Bai4_Tuan2::setInput()
{
	input = ui.lineEdit->text().toStdString();
}

int Fibonacci(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

void Bai4_Tuan2::inrakq()
{
	string kq;
	int n = stoi(input);
	int s = Fibonacci(n);
	kq += "So Fibonacci thu N: ";
	kq += to_string(s);
	ui.textEdit->setText(QString::fromStdString(kq));
}
