#include "Bai5_Tuan1.h"

Bai5_Tuan1::Bai5_Tuan1(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(inrakq()));
}

Bai5_Tuan1::~Bai5_Tuan1()
{
}

void Bai5_Tuan1::inrakq()
	{
		string kq;
		for (int i = 1000; i < 2000;)
		{
			if (i % 3 == 0 && i % 5 == 0 && i % 7 == 0)
			{
				kq += to_string(i);
				kq += " ";
				i += 3 * 5 * 7;
			}
			else
			{
				i++;
			}
		}
		ui.textEdit->setText(QString::fromStdString(kq));
	}
