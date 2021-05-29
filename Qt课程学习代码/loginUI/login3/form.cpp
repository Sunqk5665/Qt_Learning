#include "form.h"
#include "ui_form.h"
#include "dialog.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_clicked()
{
    close();
    Dialog w;
    if(w.exec()==QDialog::Accepted)
        w.show();
}
