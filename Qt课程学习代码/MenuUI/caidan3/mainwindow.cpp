#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->mainToolBar->addWidget(ui->lineEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_C_triggered()
{
    QString s = ui->lineEdit->text();
    ui->textEdit->setText(s);
    ui->lineEdit->clear();  //写完后清楚输入框
}

void MainWindow::on_lineEdit_returnPressed()
{
    QString s = ui->lineEdit->text();
    ui->textEdit->setText(s);
    ui->lineEdit->clear();  //写完后清楚输入框
}
