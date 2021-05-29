#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QKeyEvent"//添加键盘事件类
#include "QMouseEvent"//添加鼠标事件类

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;


protected:      //键盘事件函数声明
    void keyPressEvent(QKeyEvent *event);

protected:     //鼠标事件函数声明
    void mousePressEvent(QMouseEvent *event);
};

#endif // MAINWINDOW_H
