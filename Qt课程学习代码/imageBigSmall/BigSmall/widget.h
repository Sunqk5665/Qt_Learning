#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "QMouseEvent"//添加鼠标事件类

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

protected:      //键盘事件函数声明
    //void mousePressEvent(QMouseEvent *event);

private:
    Ui::Widget *ui;
    void paintEvent(QPaintEvent *);
};

#endif // WIDGET_H
