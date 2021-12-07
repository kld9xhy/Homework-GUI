#include "Bai4_Tuan3.h"

Bai4_Tuan3::Bai4_Tuan3(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	ui.lineEdit->setValidator(new QIntValidator(0, 2147483647, this));

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(inrakq()));
	QObject::connect(ui.lineEdit, SIGNAL(editingFinished()), this, SLOT(setInput()));
	QObject::connect(ui.lineEdit_2, SIGNAL(editingFinished()), this, SLOT(setInput2()));
}

Bai4_Tuan3::~Bai4_Tuan3()
{
}

void Bai4_Tuan3::setInput()
{
	input = ui.lineEdit->text().toStdString();
}

void Bai4_Tuan3::setInput2()
{
	input2 = ui.lineEdit_2->text().toStdString();
}

void Bai4_Tuan3::inrakq()
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
	vector <int> index;
	int max = arr[0];
	index.push_back(0);
	for (int i = 1; i < n; ++i)
	{
		if (max < arr[i])
		{
			max = arr[i];
			index.clear();
			index.push_back(i);
		}
		else
		{
			if (max == arr[i])
			{
				index.push_back(i);
			}
		}
	}
	kq += "Max = ";
	kq += to_string(max);
	kq += "\nChi so ung voi gia tri Max: ";
	for (int i = 0; i < index.size(); ++i)
	{
		kq += to_string(index[i]);
		kq += " ";
	}
	ui.textEdit->setText(QString::fromStdString(kq));
	fill_n(arr, n, 0);
}