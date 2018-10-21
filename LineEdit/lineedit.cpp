#include "lineedit.h"
#include "ui_lineedit.h"
#include<QAction>
#include<QIcon>
#include<QMessageBox>

LineEdit::LineEdit(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LineEdit)
{
    ui->setupUi(this);

    ui->lineEdit->setEchoMode(QLineEdit::Normal);
    ui->lineEdit->setPlaceholderText("QLineEdit::Normal");

    ui->lineEdit_2->setEchoMode(QLineEdit::NoEcho);
    ui->lineEdit_2->setPlaceholderText("QLineEdit::NoEcho");

    ui->lineEdit_3->setEchoMode(QLineEdit::Password);
    ui->lineEdit_3->setPlaceholderText("QLineEdit::Password");

    ui->lineEdit_4->setEchoMode(QLineEdit::PasswordEchoOnEdit);
    ui->lineEdit_4->setPlaceholderText("QLineEdit::PasswordEchoOnEdit");

    QAction *action = new QAction;
    action->setIcon(QIcon("../Icon/QQ.ico"));//图标显示不出来

    ui->lineEdit_5->addAction(action,QLineEdit::TrailingPosition);

    connect(action,SIGNAL(triggered(bool)),this,SLOT(onClearContents()));
}

LineEdit::~LineEdit()
{
    delete ui;
}

void LineEdit::onClearContents()
{
    ui->lineEdit_5->clear();
}

void LineEdit::on_pushButton_clicked()
{
    QMessageBox::information(this,"Echo",ui->lineEdit->text());
    ui->lineEdit->clear();
}

void LineEdit::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"Echo",ui->lineEdit_2->text());
    ui->lineEdit_2->clear();
}

void LineEdit::on_pushButton_3_clicked()
{
    QMessageBox::information(this,"Echo",ui->lineEdit_3->text());
    ui->lineEdit_3->clear();
}

void LineEdit::on_pushButton_4_clicked()
{
    QMessageBox::information(this,"Echo",ui->lineEdit_4->text());
    ui->lineEdit_4->clear();
}
