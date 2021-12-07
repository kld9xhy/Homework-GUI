#include "HomeworkGUI.h"

HomeworkGUI::HomeworkGUI(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    // connect Button with MainWindow
    QObject::connect(ui.tuan1, SIGNAL(clicked()), this, SLOT(showTuan1()));
    QObject::connect(ui.tuan2, SIGNAL(clicked()), this, SLOT(showTuan2()));
    QObject::connect(ui.tuan3, SIGNAL(clicked()), this, SLOT(showTuan3()));
}
HomeworkGUI::~HomeworkGUI()
{
    
}
