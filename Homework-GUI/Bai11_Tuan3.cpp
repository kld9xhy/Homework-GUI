#include "Bai11_Tuan3.h"

Bai11_Tuan3::Bai11_Tuan3(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	ui.lineEdit->setValidator(new QIntValidator(0, 2147483647, this));

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(inrakq()));
	QObject::connect(ui.lineEdit, SIGNAL(editingFinished()), this, SLOT(setInput()));
	QObject::connect(ui.lineEdit_2, SIGNAL(editingFinished()), this, SLOT(setInput2()));
}

Bai11_Tuan3::~Bai11_Tuan3()
{
}

void Bai11_Tuan3::setInput()
{
	input = ui.lineEdit->text().toStdString();
}

void Bai11_Tuan3::setInput2()
{
	input2 = ui.lineEdit_2->text().toStdString();
}

void Bai11_Tuan3::inrakq()
{
		string kq;
		int n = stoi(input);
		int arr[999], l[999], t[999];
		int j = 0;
		fill_n(arr, n, 0);
		for (int i = 0; i < input2.length(); i++) {
			if (input2[i] == ',')
				continue;
			if (input2[i] == ' ') {
				j++;
			}
			else {
				arr[j] = arr[j] * 10 + (input2[i] - 48);
			}
		}
		for (int i = 0; i <= n; ++i)
		{
			l[i] = 0;
		}
		l[n + 1] = 1;
		for (int i = n; i >= 0; --i)
		{
			int jMax = i;
			for (int j = i + 1; j <= n + 1; j++)
			{
				if (arr[i] < arr[j] && l[j] > l[jMax])
				{
					jMax = j;
				}
			}
			l[i] = l[jMax] + 1;
			t[i] = jMax;
		}
		int k = 0;
		kq += "Day con tang dai nhat: ";
		int count = 0;
		while (t[k] < n + 1)
		{
			if (count == (l[0] - 1)) break;
			kq += to_string(arr[k]);
			kq += " ";
			k = t[k];
			count++;
		}
		ui.textEdit->setText(QString::fromStdString(kq));
		fill_n(arr, n, 0);
}