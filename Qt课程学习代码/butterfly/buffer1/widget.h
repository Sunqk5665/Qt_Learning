#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    bool up;
    int x;
    int id1,id2;
protected:
    void timerEvent(QTimerEvent *event);//定时器声明
};

#endif // WIDGET_H
