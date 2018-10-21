#include "checkbox.h"
#include "ui_checkbox.h"
#include<QMessageBox>
Checkbox::Checkbox(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Checkbox)
{
    ui->setupUi(this);
    ui->checkBox1->setCheckState(Qt::PartiallyChecked);//可以看到部分选择的状态
}

Checkbox::~Checkbox()
{
    delete ui;
}

void Checkbox::on_pushButton_clicked()
{
    if(ui->checkBox1->checkState()==Qt::Checked)
    {
        QMessageBox::information(this,"Information","Checked");

    }
    else if(ui->checkBox1->checkState()==Qt::Unchecked)
    {
        QMessageBox::information(this,"Information","Unchecked");
    }
    else if(ui->checkBox1->checkState()==Qt::PartiallyChecked)
    {
        QMessageBox::information(this,"Information","PartiallyChecked");
    }
}



void Checkbox::on_pushButton_2_clicked()
{
    if(ui->checkBox2->checkState()==Qt::Checked)
    {
        ui->checkBox2->setCheckState(Qt::Unchecked);
    }else if(ui->checkBox2->checkState()==Qt::Unchecked)
    {
        ui->checkBox2->setCheckState(Qt::Checked);
    }
}
