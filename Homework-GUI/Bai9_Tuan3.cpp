#include "Bai9_Tuan3.h"
#include "funtion.h"

Bai9_Tuan3::Bai9_Tuan3(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	ui.lineEdit->setValidator(new QIntValidator(0, 2147483647, this));

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(inrakq()));
	QObject::connect(ui.lineEdit, SIGNAL(editingFinished()), this, SLOT(setInput()));
	QObject::connect(ui.lineEdit_2, SIGNAL(editingFinished()), this, SLOT(setInput2()));
	QObject::connect(ui.lineEdit_3, SIGNAL(editingFinished()), this, SLOT(setInput3()));
}

Bai9_Tuan3::~Bai9_Tuan3()
{
}

void Bai9_Tuan3::setInput()
{
	input = ui.lineEdit->text().toStdString();
}

void Bai9_Tuan3::setInput2()
{
	input2 = ui.lineEdit_2->text().toStdString();
}

void Bai9_Tuan3::setInput3()
{
	input3 = ui.lineEdit_3->text().toStdString();
}

void Bai9_Tuan3::inrakq()
{
	string kq;
	int n = stoi(input);
	int c = stoi(input3);
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
	int low = 0, high = 0, equal = 0;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] > c)
		{
			high++;
		}
		else
		{
			if (arr[i] == c)
			{
				equal++;
			}
			else
			{
				low++;
			}
		}
	}
	kq += "So cac so bang c: ";
	kq += to_string(equal);
	kq += "\nSo cac so lon hon c: ";
	kq += to_string(high);
	kq += "\nSo cac so nho hon c: ";
	kq += to_string(low);
	ui.textEdit->setText(QString::fromStdString(kq));
	fill_n(arr, n, 0);
}