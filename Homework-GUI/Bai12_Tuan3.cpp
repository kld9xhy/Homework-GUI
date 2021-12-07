#include "Bai12_Tuan3.h"
#include "funtion.h"

	Bai12_Tuan3::Bai12_Tuan3(QWidget * parent)
		: QDialog(parent)
	{
		ui.setupUi(this);

		ui.lineEdit->setValidator(new QIntValidator(0, 2147483647, this));

		QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(inrakq()));
		QObject::connect(ui.lineEdit, SIGNAL(editingFinished()), this, SLOT(setInput()));
		QObject::connect(ui.lineEdit_2, SIGNAL(editingFinished()), this, SLOT(setInput2()));
		QObject::connect(ui.lineEdit_3, SIGNAL(editingFinished()), this, SLOT(setInput3()));
		QObject::connect(ui.lineEdit_4, SIGNAL(editingFinished()), this, SLOT(setInput4()));
	}

	Bai12_Tuan3::~Bai12_Tuan3()
	{
	}

	void Bai12_Tuan3::setInput()
	{
		input = ui.lineEdit->text().toStdString();
	}

	void Bai12_Tuan3::setInput2()
	{
		input2 = ui.lineEdit_2->text().toStdString();
	}

	void Bai12_Tuan3::setInput3()
	{
		input3 = ui.lineEdit_3->text().toStdString();
	}

	void Bai12_Tuan3::setInput4()
	{
		input4 = ui.lineEdit_4->text().toStdString();
	}

	void Bai12_Tuan3::inrakq()
	{
		string kq;
		int n = stoi(input);
		int m = stoi(input3);
		int a[999];
		int b[999];
		int j = 0;
		fill_n(a, n, 0);
		fill_n(b, m, 0);
		for (int i = 0; i < input2.length(); i++) {
			if (input2[i] == ',')
				continue;
			if (input2[i] == ' ') {
				j++;
			}
			else {
				a[j] = a[j] * 10 + (input2[i] - 48);
			}
		}
		j = 0;
		for (int i = 0; i < input4.length(); i++) {
			if (input4[i] == ',')
				continue;
			if (input4[i] == ' ') {
				j++;
			}
			else {
				b[j] = b[j] * 10 + (input4[i] - 48);
			}
		}
		if (is_b_contain_a(a, n, b, m))
		{
			kq += "a la day con cua b";
		}
		else
		{
			kq += "a khong la day con cua b";
		}
		ui.textEdit->setText(QString::fromStdString(kq));
		fill_n(a, n, 0);
		fill_n(b, m, 0);
	}
