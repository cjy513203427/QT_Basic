#include "listview.h"
#include "ui_listview.h"
#include<QMessageBox>
ListView::ListView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListView)
{
    ui->setupUi(this);

    initModel();

    ui->listView->setModel(m_studentModel);
}

ListView::~ListView()
{
    delete ui;
}

void ListView::on_BtnOK_clicked()
{
    QString currentModel = ui->comboBox->currentText();
    QString checkedStr;

    if(currentModel.contains("学生"))
    {
        for(int i=0;i<m_studentModel->rowCount();++i)
        {
            if(m_studentModel->item(i,0)->checkState() == Qt::Checked)
            {
                checkedStr += m_studentModel->item(i,0)->text() + "\n";
            }
        }
    }

    if(currentModel.contains("老师"))
    {
        for(int i=0;i<m_teacherModel->rowCount();++i)
        {
            if(m_teacherModel->item(i,0)->checkState() == Qt::Checked)
            {
                checkedStr += m_teacherModel->item(i,0)->text() + "\n";
            }
        }
    }

    if(currentModel.contains("工人"))
    {
        for(int i=0;i<m_workerModel->rowCount();++i)
        {
            if(m_workerModel->item(i,0)->checkState() == Qt::Checked)
            {
                checkedStr += m_workerModel->item(i,0)->text() + "\n";
            }
        }
    }

    QMessageBox msgBox;
    msgBox.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    msgBox.setText("当前模型:"+currentModel);
    msgBox.setInformativeText(checkedStr);

    //不论yes还是no均关闭窗口
    if(msgBox.exec()==QMessageBox::Accepted)
    {
        close();
    }

}

void ListView::initModel()
{
    m_studentModel = new QStandardItemModel(0,1);

    for(int i=0;i<10;++i)
    {
        QStandardItem *item = new QStandardItem(QString("学生:%1").arg(i));
        item->setCheckState(Qt::Checked);
        item->setCheckable(true);
        m_studentModel->appendRow(item);
    }


    m_teacherModel = new QStandardItemModel(0,1);
    for(int i=0;i<10;++i)
    {
        QStandardItem *item = new QStandardItem(QString("教师:%1").arg(i));
        item->setCheckState(Qt::Checked);
        item->setCheckable(true);
        m_teacherModel->appendRow(item);
    }

    m_workerModel = new QStandardItemModel(0,1);
    for(int i=0;i<10;++i)
    {
        QStandardItem *item = new QStandardItem(QString("工人:%1").arg(i));
        item->setCheckState(Qt::Checked);
        item->setCheckable(true);
        m_workerModel->appendRow(item);
    }

}


//监控combobox索引变化
void ListView::on_comboBox_currentIndexChanged(const QString &arg1)
{
    if(arg1.contains("学生"))
    {
        ui->listView->setModel(m_studentModel);
    }
    if(arg1.contains("老师"))
    {
        ui->listView->setModel(m_teacherModel);
    }
    if(arg1.contains("工人"))
    {
        ui->listView->setModel(m_workerModel);
    }
}
