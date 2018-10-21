#include <QApplication>
#include<QSlider>
#include<QSpinBox>
#include<QHBoxLayout>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *widget = new QWidget;
    widget->setWindowTitle("layout");

    QSlider *slider = new QSlider(Qt::Horizontal);
    QSpinBox *spinbox = new QSpinBox;
    slider->setRange(0,100);
    spinbox->setRange(0,100);

    //信号槽
    QObject::connect(slider,SIGNAL(valueChanged(int)),spinbox,SLOT(setValue(int)));
    QObject::connect(spinbox,SIGNAL(valueChanged(int)),slider,SLOT(setValue(int)));

    //采用水平布局
    QHBoxLayout *hLayout = new QHBoxLayout;
    hLayout->addWidget(slider);
    hLayout->addWidget(spinbox);
    //把布局放到widget里面
    widget->setLayout(hLayout);
    widget->show();
    return a.exec();
}
