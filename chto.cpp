#include "chto.h"

chTo::chTo(QWidget *parent) : QMainWindow(parent)
{
    this->resize(350,350);
    QLabel *label = new QLabel(this);
    label->setText("ChToEng");
    QPushButton *end = new QPushButton(this);
    end->setText("返回主界面");
    end->move(300,300);
    connect(end,&QPushButton::clicked,[this](){
        this->hide();
        emit isClicked();
    });
}
