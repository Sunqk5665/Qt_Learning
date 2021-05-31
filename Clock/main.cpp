#include "widget.h"
#include <QApplication>
#include<QTextCodec>
#include<QPainter>
#include<QtGui>
#include<QDebug>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
    Widget w;
    w.show();

    return a.exec();
}
