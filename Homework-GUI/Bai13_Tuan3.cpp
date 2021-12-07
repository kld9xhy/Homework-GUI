#include "Bai13_Tuan3.h"

Bai13_Tuan3::Bai13_Tuan3(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	ui.lineEdit->setValidator(new QIntValidator(0, 2147483647, this));

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(inrakq()));
	QObject::connect(ui.lineEdit, SIGNAL(editingFinished()), this, SLOT(setInput()));
}

Bai13_Tuan3::~Bai13_Tuan3()
{
}

void Bai13_Tuan3::setInput()
{
	input = ui.lineEdit->text().toStdString();
}

void Bai13_Tuan3::inrakq()
{
	string kq;
	int n = stoi(input);
	int a[10][10];
	int t = 0, value = 1;
	int col = n - 1, row = n - 1;
	while (t <= n / 2)
	{
		for (int i = t; i <= col; ++i) a[t][i] = value++;
		for (int i = t + 1; i <= row; ++i) a[i][col] = value++;
		for (int i = col - 1; i >= t; --i) a[row][i] = value++;
		for (int i = row - 1; i > t; --i) a[i][t] = value++;
		t++;
		row--;
		col--;
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			kq += to_string(a[i][j]);
			kq += "     ";
		}
		kq += "\n";
	}
	ui.textEdit->setText(QString::fromStdString(kq));
	//fill_n(a, n, 0);
}