#include <QApplication>
#include<QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPushButton *btn = new QPushButton(QObject::tr("quit"));
    QObject::connect(btn,SIGNAL(clicked(bool)),&a,SLOT(quit()) );
    btn->show();
    return a.exec();
}
