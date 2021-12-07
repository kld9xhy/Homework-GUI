#include "Bai1_Tuan1.h"

Bai1_Tuan1::Bai1_Tuan1(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(inrakq()));
}

Bai1_Tuan1::~Bai1_Tuan1()
{

}

void Bai1_Tuan1::inrakq()
{
	{
		string kq;
		for (int i = 4; i < 100; ++i)
		{
			if (i % 2 == 0) { kq += " ";  kq += to_string(i); }
			else
			{
				for (int j = 3; j <= sqrt(i); j += 2)
					if (i % j == 0)
					{
						kq += " ";
						kq += to_string(i);
						break;
					}
			}
		}
		ui.textEdit->setText(QString::fromStdString(kq));
	}

}
