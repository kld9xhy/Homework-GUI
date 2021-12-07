#include "Bai7_Tuan1.h"

Bai7_Tuan1::Bai7_Tuan1(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(inrakq()));
}

Bai7_Tuan1::~Bai7_Tuan1()
{
}

void Bai7_Tuan1::inrakq()
{
	{
		string kq;
        int count_0 = 0, count_1 = 0, count_2 = 0, count_3 = 0;
        for (int i = 0; i <= 100; ++i)
        {
            switch (i % 5)
            {
            case 0:
                count_0++;
                break;
            case 1:
                count_1++;
                break;
            case 2:
                count_2++;
                break;
            case 3:
                count_3++;
                break;
            default:
                break;
            }
        }
        kq += "a. ";
        kq += to_string(count_0);
        kq += "\nb. ";
        kq += to_string(count_1);
        kq += "\nc. ";
        kq += to_string(count_2);
        kq += "\nd. ";
        kq += to_string(count_3);
		ui.textEdit->setText(QString::fromStdString(kq));
	}

}
