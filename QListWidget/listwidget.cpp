#include "listwidget.h"
#include "ui_listwidget.h"
#include<QListWidgetItem>
#include<QMessageBox>
ListWidget::ListWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListWidget)
{
    ui->setupUi(this);

    setWindowTitle(tr("Device State"));
    for(int row = 0;row<=20;++row)
    {
        QListWidgetItem *item = new QListWidgetItem("Device:"+QString::number(row));
        item->setCheckState(Qt::Unchecked);
        ui->listWidget->addItem(item);
    }


    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(onOkBtn()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(onCancelBtn()));
    setFixedSize(250,400);
}

ListWidget::~ListWidget()
{
    delete ui;
}

void ListWidget::onOkBtn()
{
    int rowCount = ui->listWidget->count();
    QString checkedItems;
    for(int row=0;row<rowCount;++row)
    {
        if(ui->listWidget->item(row)->checkState()==Qt::Checked)
        {
            checkedItems += ui->listWidget->item(row)->text()+"\n";
        }
    }
    QMessageBox::information(this,"Info",checkedItems);
}

void ListWidget::onCancelBtn()
{
    close();
}
