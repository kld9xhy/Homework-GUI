#include "Bai10_Tuan3.h"
#include "funtion.h"

Bai10_Tuan3::Bai10_Tuan3(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	ui.lineEdit->setValidator(new QIntValidator(0, 2147483647, this));

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(inrakq()));
	QObject::connect(ui.lineEdit, SIGNAL(editingFinished()), this, SLOT(setInput()));
	QObject::connect(ui.lineEdit_2, SIGNAL(editingFinished()), this, SLOT(setInput2()));
}

Bai10_Tuan3::~Bai10_Tuan3()
{
}

void Bai10_Tuan3::setInput()
{
	input = ui.lineEdit->text().toStdString();
}

void Bai10_Tuan3::setInput2()
{
	input2 = ui.lineEdit_2->text().toStdString();
}

void Bai10_Tuan3::inrakq()
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
	int count = 1;
	int max = 0;
	int max_index = 0;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] != arr[i + 1])
		{
			if (count > max) {
				max = count;
				max_index = i - count + 1;
			}
			count = 1;
		}
		else
		{
			++count;
		}
	}
	kq += "Do dai cua day con dai nhat: ";
	kq += to_string(max);
	kq += "\nChi so dau tien cua day con dai nhat: ";
	kq += to_string(max_index);
	ui.textEdit->setText(QString::fromStdString(kq));
	fill_n(arr, n, 0);
}