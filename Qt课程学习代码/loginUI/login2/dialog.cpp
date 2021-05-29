#include "dialog.h"
#include "ui_dialog.h"
#include "QMessageBox"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    if(ui->lineEdit->text().trimmed()=="sqk5665"&&ui->lineEdit_2->text().trimmed()=="123456"){
        accept();
    }
    else {
        QMessageBox::warning(this,tr("登陆警告"),tr("用户名或密码错误！"),QMessageBox::Yes);
    }

}
