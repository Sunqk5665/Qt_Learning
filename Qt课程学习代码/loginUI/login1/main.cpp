#include "dialog.h"
#include <QApplication>
#include"mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    MainWindow w1;
    if(w.exec()==QDialog::Accepted){
        w1.show();
    }

    return a.exec();
}
