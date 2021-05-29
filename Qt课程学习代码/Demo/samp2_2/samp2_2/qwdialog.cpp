#include "qwdialog.h"
#include "ui_qwdialog.h"

QWDialog::QWDialog(QWidget *parent) ://QWDialog的构造函数
    QDialog(parent),
    ui(new Ui::QWDialog)
{
    ui->setupUi(this);// UI设计器可视化设计某个组件的信号响应槽函数，可以不用手工去将其关联起来，
                      //而是在界面类的构造函数里调用setupUi()自动完成了关联。
    connect(ui->rBtnBlue,SIGNAL(clicked()),this,SLOT(setTextFontColor())); //将3个RadioButton的clicked()
    connect(ui->rBtnRed,SIGNAL(clicked()),this,SLOT(setTextFontColor()));  //信号与同一个槽函数setTextFontColor()
    connect(ui->rBtnBlack,SIGNAL(clicked()),this,SLOT(setTextFontColor()));//相关联
}

QWDialog::~QWDialog()
{
    delete ui;
}

void QWDialog::on_chkBoxUnder_clicked(bool checked)//槽函数实现文本框字体下划线控制
{
    QFont font=ui->txtEdit->font();
    font.setUnderline(checked);
    ui->txtEdit->setFont(font);
}

void QWDialog::on_chkBoxitalic_clicked(bool checked)
{
    QFont font=ui->txtEdit->font();
    font.setItalic(checked);
    ui->txtEdit->setFont(font);
}

void QWDialog::on_chkBoxBold_clicked(bool checked)
{
    QFont font=ui->txtEdit->font();
    font.setBold(checked);
    ui->txtEdit->setFont(font);
}

void QWDialog::setTextFontColor()
{
    QPalette plet=ui->txtEdit->palette();
    if(ui->rBtnBlue->isChecked())
        plet.setColor(QPalette::Text,Qt::blue);
    else if(ui->rBtnRed->isChecked())
        plet.setColor(QPalette::Text,Qt::red);
    else if(ui->rBtnBlack->isChecked())
        plet.setColor(QPalette::Text,Qt::black);
    else
        plet.setColor(QPalette::Text,Qt::black);
    ui->txtEdit->setPalette(plet);
}

