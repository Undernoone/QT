#include "mywidget.h"
#include "ui_mywidget.h"
#include "QPushButton"

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    // 创建一个按钮
    QPushButton * Qpb = new QPushButton;
    Qpb->show(); // show以顶层方式弹出窗口控件
    // 但是我想让这个按钮在MyWidget中
    QPushButton * Qpb2 = new QPushButton;
    Qpb2->setParent(this);
    Qpb2->show();
    Qpb2->setText("第一个按钮");
    QPushButton * Qpb3 = new QPushButton("第三个按钮",this); // 可以看到第三个按钮把第二个按钮遮盖了
    resize(600,400);
    Qpb3->move(100,100);
    setWindowTitle("Coder729");
}

MyWidget::~MyWidget()
{
    delete ui;
}
