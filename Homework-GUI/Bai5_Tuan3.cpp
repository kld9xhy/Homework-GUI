#include "Bai5_Tuan3.h"
#include "funtion.h"

Bai5_Tuan3::Bai5_Tuan3(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	ui.lineEdit->setValidator(new QIntValidator(0, 2147483647, this));

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(inrakq()));
	QObject::connect(ui.lineEdit, SIGNAL(editingFinished()), this, SLOT(setInput()));
	QObject::connect(ui.lineEdit_2, SIGNAL(editingFinished()), this, SLOT(setInput2()));
}

Bai5_Tuan3::~Bai5_Tuan3()
{
}

void Bai5_Tuan3::setInput()
{
	input = ui.lineEdit->text().toStdString();
}

void Bai5_Tuan3::setInput2()
{
	input2 = ui.lineEdit_2->text().toStdString();
}

void Bai5_Tuan3::inrakq()
{
	string kq;
	int n = stoi(input);
	int arr[99999];
	int j = 0, i;
	for (i = 0; i < input2.length(); i++) {
		if (input2[i] == ',')
			continue;
		if (input2[i] == ' ') {
			j++;
		}
		else {
			arr[j] = arr[j] * 10 + (input2[i] - 48);
		}
	}
	int count_prime = 0;
	int count_compositeNum = 0;
	for (int i = 0; i < n; ++i)
	{
		if (isPrime(arr[i]))
		{
			count_prime++;
		}
		else
		{
			if (arr[i] != 1)
			{
				count_compositeNum++;
			}
		}
	}
	kq += "So cac so nguyen to: ";
	kq += to_string(count_prime);
	kq += "\nSo cac hop so: ";
	kq += to_string(count_compositeNum);
	ui.textEdit->setText(QString::fromStdString(kq));
	fill_n(arr, n, 0);
}