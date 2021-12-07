#include "Bai3_Tuan1.h"

Bai3_Tuan1::Bai3_Tuan1(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(inrakq()));
}

Bai3_Tuan1::~Bai3_Tuan1()
{
}

void Bai3_Tuan1::inrakq()
{
	{
		string kq;
		for (int i = 1000; i < 2000; ++i)
		{
			int divisor_count = 0;
			for (int j = 2; j <= sqrt(i); j++)
			{
				if (i % j == 0)
				{
					divisor_count++;
				}
			}
			if (divisor_count == 0)
			{
				kq += " ";
				kq += to_string(i);
			}
		}
		ui.textEdit->setText(QString::fromStdString(kq));
	}

}