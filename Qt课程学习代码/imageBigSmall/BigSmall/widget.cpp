#include "widget.h"
#include "ui_widget.h"
//#include <QKeyEvent>
//#include <QWheelEvent>
#include<QPainter>
#include<QPixmap>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::paintEvent(QPaintEvent *){
    QPainter painter(this);
    QPixmap pix;
    pix.load("../BigSmall/1.jpg");
    painter.drawPixmap(0,0,260,400,pix);

    qreal width = pix.width(); //获得以前图片的宽和高
    qreal height = pix.height();

    pix = pix.scaled(width*2,height*2,Qt::KeepAspectRatio);
        //将图片的宽和高都扩大两倍，并且在给定的矩形内保持宽高的比值
    painter.drawPixmap(260,400,pix);
}
//void Widget::mousePressEvent(QMouseEvent *event){
//    if(event->button()==Qt::LeftButton){//事件判断
//        QPainter painter(this);
//        QPixmap pix;
//        pix.load("../BigSmall/1.jpg");
//        painter.drawPixmap(0,0,260,400,pix);
//    }
//    else if(event->button()==Qt::RightButton){
//        QPainter painter(this);
//        QPixmap pix;
//        pix.load("../BigSmall/1.jpg");
//        float width = pix.width(); //获得以前图片的宽和高
//        float height = pix.height();

//        pix = pix.scaled(width*2,height*2,Qt::KeepAspectRatio);
//        //将图片的宽和高都扩大两倍，并且在给定的矩形内保持宽高的比值
//        painter.drawPixmap(100,100,pix);
//    }
//}

