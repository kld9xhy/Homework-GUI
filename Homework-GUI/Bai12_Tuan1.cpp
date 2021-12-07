#include "Bai12_Tuan1.h"

Bai12_Tuan1::Bai12_Tuan1(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	ui.lineEdit->setValidator(new QIntValidator(2, 10, this));

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(intamgiacxuoi()));
	QObject::connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(intamgiacnguoc()));
	QObject::connect(ui.lineEdit, SIGNAL(editingFinished()), this, SLOT(setInput()));
}

Bai12_Tuan1::~Bai12_Tuan1()
{
}

void Bai12_Tuan1::setInput()
{
	input = ui.lineEdit->text().toStdString();
}

void Bai12_Tuan1::intamgiacxuoi()
{
	string kq;
	int h = stoi(input);
	for (int i = 1; i <= h; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			kq += "*";
		}
		kq += "\n";
	}
	ui.textEdit->setText(QString::fromStdString(kq));
}

void Bai12_Tuan1::intamgiacnguoc()
{
	string kq;
	int h = stoi(input);
	for (int i = h; i >= 1; --i)
	{
		for (int j = 1; j <= i; ++j)
		{
			kq += "*";
		}
		kq += "\n";
	}
	ui.textEdit->setText(QString::fromStdString(kq));
}

