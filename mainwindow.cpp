#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , eTc (new engTo(nullptr))
    , cTe (new chTo(nullptr))
{
    ui->setupUi(this);
    //设置标签
    QLabel *label = new QLabel(this);
    label->setText("CET4");
    //进入中英得两个按钮
    QPushButton *button1 = new QPushButton(this);
    button1->setText("EngToCh");
    button1->move(100,100);
    QPushButton *button2 = new QPushButton(this);
    button2->setText("ChToEng");
    button2->move(100,200);
    //进入英译中的界面
    connect(button1,&QPushButton::clicked,[this](){
        this->hide();
        eTc->show();
    });
    //进入中译英的界面
    connect(button2,&QPushButton::clicked,[this](){
        this->hide();
        cTe->show();
    });
    //收到信号返回主界面
    connect(eTc,&engTo::isClicked,[this](){
        this->show();
    });
    connect(cTe,&chTo::isClicked,[this](){
        this->show();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

