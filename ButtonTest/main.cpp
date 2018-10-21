#include "mybutton.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyButton w;
    w.show();

    return a.exec();
}
