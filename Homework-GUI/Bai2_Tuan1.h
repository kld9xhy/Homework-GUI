#pragma once

#include <QWidget>
#include "ui_Bai2_Tuan1.h"
#include <qdialog.h>
#include <string>

using namespace std;

class Bai2_Tuan1 : public QDialog
{
	Q_OBJECT

public:
	Bai2_Tuan1(QWidget *parent);
	~Bai2_Tuan1();

public slots:
	void inrakq()
	{
		string kq;
        int count = 0;
        for (int i = 2; i < 1000; ++i)
        {
            if (count == 20) break;
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
                count++;
            }
        }
		ui.textEdit->setText(QString::fromStdString(kq));
	}

private:
	Ui::Bai2_Tuan1 ui;
};
