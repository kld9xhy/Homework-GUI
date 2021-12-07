#include "Bai6_Tuan1.h"

Bai6_Tuan1::Bai6_Tuan1(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(inrakq()));
}

Bai6_Tuan1::~Bai6_Tuan1()
{
}

void Bai6_Tuan1::inrakq()
	{
		string kq;
		kq += "1 ";
		int count = 0;
		for (int i = 2; ++i;)
		{
			if (count == 4) break;
			int divisor_sum = 0;
			for (int j = 1; j <= i / 2; j++)
			{
				if (i % j == 0)
				{
					divisor_sum += j;
				}
			}
			if (divisor_sum == i)
			{
				kq += to_string(i);
				kq += " ";
				count++;
			}
		}
		ui.textEdit->setText(QString::fromStdString(kq));
	}

