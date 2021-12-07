#include "Bai1_Tuan3.h"
#include "funtion.h"

Bai1_Tuan3::Bai1_Tuan3(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	ui.lineEdit->setValidator(new QIntValidator(0, 2147483647, this));

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(inrakq()));
	QObject::connect(ui.lineEdit, SIGNAL(editingFinished()), this, SLOT(setInput()));
	QObject::connect(ui.lineEdit_2, SIGNAL(editingFinished()), this, SLOT(setInput2()));
}

Bai1_Tuan3::~Bai1_Tuan3()
{
}

void Bai1_Tuan3::setInput()
{
	input = ui.lineEdit->text().toStdString();
}

void Bai1_Tuan3::setInput2()
{
	input2 = ui.lineEdit_2->text().toStdString();
}

void Bai1_Tuan3::inrakq()
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
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			if (arr[i] < arr[j])
			{
				Swap(&arr[i], &arr[j]);
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		kq += to_string(arr[i]);
		kq += " ";
	}
	ui.textEdit->setText(QString::fromStdString(kq));
	fill_n(arr, n, 0);
}