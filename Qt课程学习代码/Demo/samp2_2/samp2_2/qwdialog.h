#ifndef QWDIALOG_H
#define QWDIALOG_H

#include <QDialog>

namespace Ui {
class QWDialog;
}

class QWDialog : public QDialog
{
    Q_OBJECT

public:
    explicit QWDialog(QWidget *parent = 0);
    ~QWDialog();

private slots://自动增加的一个槽函数声明，函数名是根据发射对象及其信号名称自动命名的
    void on_chkBoxUnder_clicked(bool checked);

    void on_chkBoxitalic_clicked(bool checked);

    void on_chkBoxBold_clicked(bool checked);

    void setTextFontColor();//增加一个槽函数,实现将3个RadioButton的clicked()信号关联到这一个槽函数，简化设计

    //void on_pushButton_clicked();

private:
    Ui::QWDialog *ui;
};

#endif // QWDIALOG_H
