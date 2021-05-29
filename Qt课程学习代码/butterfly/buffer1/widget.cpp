#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    id1 = startTimer(300); // 开启一个1秒定时器，返回其ID
    id2 = startTimer(200);
    up = true; //设置bool值，便于状态的改变
    x = 20;
}

Widget::~Widget()
{
    delete ui;
}
void Widget::timerEvent(QTimerEvent *event) //函数重构
{
    if (event->timerId() == id1) {  // 判断是哪个定时器
        if(up){
            ui->label_2->show();
            ui->label->hide();
            up=!up;
        }
        else {
            ui->label->show();
            ui->label_2->hide();
            up=!up;
        }
    }
    else if(event->timerId()==id2)//判断是第二个定时器，改变坐标，实现图片的移动
    {   x=x+10;
        ui->label->move(x,x-10);
        ui->label_2->move(x,x-10);
    }
}
