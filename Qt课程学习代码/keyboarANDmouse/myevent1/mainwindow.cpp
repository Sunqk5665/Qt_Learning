#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "widget.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event){
    if(event->modifiers()==Qt::ControlModifier){
        if(event->key()==Qt::Key_N){
            Widget *w1=new Widget(this);//新建一个对象
            w1->show();
        }
    }
}

void MainWindow::mousePressEvent(QMouseEvent *event){
    if(event->button()==Qt::LeftButton){//事件判断
        if(windowState()!=Qt::WindowFullScreen)
            setWindowState(Qt::WindowFullScreen);
        else
            setWindowState(Qt::WindowNoState);
    }
}
