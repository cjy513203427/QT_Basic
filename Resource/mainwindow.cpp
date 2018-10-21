#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //方法1在ui文件里面改变样式表
    //方法2用代码引用图片
    QPixmap pixmap(":/new/image/timg.jpg");
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(pixmap));

    this->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}
