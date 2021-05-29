#include "dialog.h"
#include <QApplication>
#include "form.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    Form w1;
    if(w.exec()==QDialog::Accepted){
        w1.show();
        return a.exec();
    }

    return 0;
}
