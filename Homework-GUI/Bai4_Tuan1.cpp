#include "Bai4_Tuan1.h"

Bai4_Tuan1::Bai4_Tuan1(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(inrakq()));
}

Bai4_Tuan1::~Bai4_Tuan1()
{
}

void Bai4_Tuan1::inrakq()
{
	{
		string kq;
		for (int i = 21; i < 100; i += 21)
		{
			if (i % 3 == 0 && i % 7 == 0)
			{
				kq += " ";
				kq += to_string(i);
			}
		}
		ui.textEdit->setText(QString::fromStdString(kq));
	}

}
