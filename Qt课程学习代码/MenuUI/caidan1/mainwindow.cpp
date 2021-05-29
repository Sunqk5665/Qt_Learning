#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_2->setText("Hello!!!");
    ui->statusBar->addPermanentWidget(ui->label_2);//永久显示
    ui->statusBar->showMessage(tr("temp show!!"),2000);//显示2秒
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_N_2_triggered()
{
    ui->label->setText("改了个寂寞");
}
