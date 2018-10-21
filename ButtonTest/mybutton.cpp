#include "mybutton.h"
#include "ui_mybutton.h"
#include<QDebug>
#include<QMessageBox>
#include<QMenu>
MyButton::MyButton(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyButton)
{
    ui->setupUi(this);
    connect(ui->pushButton2,SIGNAL(clicked(bool)),this,SLOT(on_Button2()));
    ui->pushButton3->installEventFilter(this);

    QMenu *menu = new QMenu;
    menu->addAction("打开");
    menu->addAction("关闭");
    ui->pushButton4->setMenu(menu);

}

MyButton::~MyButton()
{
    delete ui;
}

void MyButton::on_pushButton1_clicked()
{
    qDebug()<<"You clicked Btn1";
}

void MyButton::on_Button2()
{
    QMessageBox::information(this,"Btn2","you clicked Btn2");
}

void MyButton::enterEvent(QEvent *event)
{

}

void MyButton::leaveEvent(QEvent *event)
{

}

bool MyButton::eventFilter(QObject *o, QEvent *e)
{
    if(e->type()==QEvent::HoverEnter)
    {
        if(o==ui->pushButton3)
        {
            ui->pushButton3->setStyleSheet("background-color: rgb(255, 0, 0);");
            qDebug()<<"Btn Enter";
        }
        else
        {
            return QObject::eventFilter(o,e);
        }
    }
    else if(e->type()==QEvent::HoverLeave)
    {
        if(o==ui->pushButton3)
        {
            ui->pushButton3->setStyleSheet("background-color: rgb(255, 255, 127);");
            qDebug()<<"Btn Leave";
        }
        else
        {
            return QObject::eventFilter(o,e);
        }
    }else
    {
        return QObject::eventFilter(o,e);
    }
}
