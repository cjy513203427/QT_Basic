#include "extentiondialog.h"
#include "ui_extentiondialog.h"
#include<QLayout>

ExtentionDialog::ExtentionDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExtentionDialog)
{
    ui->setupUi(this);

    ui->groupBox_2->hide();
    layout()->setSizeConstraint(QLayout::SetFixedSize);
}

ExtentionDialog::~ExtentionDialog()
{
    delete ui;
}

void ExtentionDialog::on_pushButton_3_clicked()
{
    if(ui->groupBox_2->isVisible())
    {
        ui->groupBox_2->hide();
        ui->pushButton_3->setText("详细信息<<<");
    }
    else
    {
        ui->groupBox_2->show();
        ui->pushButton_3->setText("详细信息>>>");
    }
}
