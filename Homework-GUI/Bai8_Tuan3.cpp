#include "Bai8_Tuan3.h"
#include "funtion.h"

Bai8_Tuan3::Bai8_Tuan3(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	ui.lineEdit->setValidator(new QIntValidator(0, 2147483647, this));

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(inrakq()));
	QObject::connect(ui.lineEdit, SIGNAL(editingFinished()), this, SLOT(setInput()));
	QObject::connect(ui.lineEdit_2, SIGNAL(editingFinished()), this, SLOT(setInput2()));
}

Bai8_Tuan3::~Bai8_Tuan3()
{
}

void Bai8_Tuan3::setInput()
{
	input = ui.lineEdit->text().toStdString();
}

void Bai8_Tuan3::setInput2()
{
	input2 = ui.lineEdit_2->text().toStdString();
}

void Bai8_Tuan3::inrakq()
{
	string kq;
	int n = stoi(input);
	int m = n;
	int arr[99999];
	vector <int> a;
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
	for (int i = 0; i < n; ++i)
		a.push_back(arr[i]);
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == 0)
		{
			a.erase(a.begin() + i);
			--i;
			--n;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		kq += to_string(a[i]);
		kq += " ";
	}
	ui.textEdit->setText(QString::fromStdString(kq));
	fill_n(arr, m, 0);
}