#include "widget.h"
#include "ui_widget.h"
#include<QPixmap>
#include<QBitmap>
#include<QPainter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPixmap pix;
    pix.load("../buguize/touming.png");//加载图片
    resize(pix.size());//设置窗口大小为图片大小
    setMask(pix.mask());//设置遮罩
}

Widget::~Widget()
{
    delete ui;
}
void Widget::paintEvent(QPaintEvent *){
    QPainter painter(this);
    painter.drawPixmap(0,0,QPixmap("../buguize/touming.png"));

}
void Widget::mousePressEvent(QMouseEvent *){
    close();
}

