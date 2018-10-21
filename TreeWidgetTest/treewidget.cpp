#include <QMessageBox>
#include <QHeaderView>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QInputDialog>
#include <QDir>
#include <QDebug>
#include "treewidget.h"
#include "ui_treewidget.h"

TreeWidget::TreeWidget(QWidget *parent) : QWidget(parent),ui(new Ui::TreeWidget)
{
    ui->setupUi(this);

    ui->schoolLabel->setMinimumWidth(150);
    ui->classLabel->setMinimumWidth(150);

    initTreeWidget();

    ui->treeWidget->setFocusPolicy(Qt::ClickFocus);
    ui->treeWidget->setHeaderLabel("School/Class");
    connect(ui->treeWidget , SIGNAL(itemClicked(QTreeWidgetItem*,int)) , this ,SLOT(onSetSchoolClassLabel(QTreeWidgetItem*,int)));

    createMenu();
}

TreeWidget::~TreeWidget()
{
    delete ui;
}

void TreeWidget::createMenu()
{
    m_Menu = new QMenu;

    m_AddMenu = new QMenu("Add");
    m_AddMenu->setIcon(QIcon("../icons/add.png"));

    m_AddChoolAction = new QAction("Add School" );
    m_AddClassAction = new QAction("Add Class" );

    m_AddMenu->addAction(m_AddChoolAction);
    m_AddMenu->addAction(m_AddClassAction);


    m_DelAction = new QAction("Del");
    m_DelAction->setIcon(QIcon("../icons/del.png"));

    m_Menu->addMenu(m_AddMenu);
    m_Menu->addAction(m_DelAction);

    connect(m_AddChoolAction, SIGNAL(triggered(bool)) , this ,SLOT(onAddSchool(bool)));
    connect(m_AddClassAction, SIGNAL(triggered(bool)) , this ,SLOT(onAddClass(bool)));

    connect(m_DelAction, SIGNAL(triggered(bool)) , this ,SLOT(onDelSchoolClass(bool)));
}

void TreeWidget::contextMenuEvent(QContextMenuEvent *e)
{
    if(ui->treeWidget->hasFocus())
    {
        m_Menu->move(cursor().pos());
        m_Menu->show();
    }
    e->accept();
}

void TreeWidget::initTreeWidget()
{
    QTreeWidgetItem *jinNiuSchool = new QTreeWidgetItem(ui->treeWidget);
    jinNiuSchool->setText( 0, "Jin Niu School" );
    {
        QTreeWidgetItem *jinNiuOnwClass = new QTreeWidgetItem(jinNiuSchool);
        jinNiuOnwClass->setText( 0, "Jin Niu Class One");

        QTreeWidgetItem *jinNiuTwoClass = new QTreeWidgetItem(jinNiuSchool);
        jinNiuTwoClass->setText( 0, "Jin Niu Class Two");

        QTreeWidgetItem *jinNiuThreeClass = new QTreeWidgetItem(jinNiuSchool);
        jinNiuThreeClass->setText( 0, "Jin Niu Class Three");
    }

    QTreeWidgetItem *qingYangSchool = new QTreeWidgetItem(ui->treeWidget);
    qingYangSchool->setText( 0, "Qin Yang School" );
    {
        QTreeWidgetItem *qingYangOnwClass = new QTreeWidgetItem(qingYangSchool);
        qingYangOnwClass->setText( 0,QString("Qin Yang Class One"));

        QTreeWidgetItem *qingYangTwoClass = new QTreeWidgetItem(qingYangSchool);
        qingYangTwoClass->setText( 0, QString("Qin Yang Class Two"));

        QTreeWidgetItem *qingYangThreeClass = new QTreeWidgetItem(qingYangSchool);
        qingYangThreeClass->setText( 0, "Qin Yang Class Three");
    }
}

void TreeWidget::onAddSchool(bool)
{
    qDebug()<<"Add School";

    bool ok;
    QString schoolName = QInputDialog::getText(this, "Input School Name" , "School Name:" , QLineEdit::Normal,  "", &ok);

    QTreeWidgetItem *schoolItem = new QTreeWidgetItem(ui->treeWidget);
    schoolItem->setText(0 , schoolName);
}

void TreeWidget::onAddClass(bool)
{
    qDebug()<<"Add Class";
    QTreeWidgetItem *currentItem = ui->treeWidget->currentItem();
    if(!currentItem) //未选中学校
    {
        QMessageBox::information(this ,"Information" , "Please Choose School");
        return ;
    }
    if(currentItem->parent())
    {
        bool ok;
        QString className = QInputDialog::getText(this, "Input School Name" , "School Name:" , QLineEdit::Normal,  "", &ok);

        QTreeWidgetItem *schoolItem = new QTreeWidgetItem(currentItem->parent());
        schoolItem->setText(0 , className);
        return ;
    }


    bool ok;
    QString className = QInputDialog::getText(this, "Input School Name" , "School Name:" , QLineEdit::Normal,  "", &ok);

    QTreeWidgetItem *schoolItem = new QTreeWidgetItem(currentItem);
    schoolItem->setText(0 , className);
}

void TreeWidget::onDelSchoolClass(bool)
{
    qDebug()<<"Del Action";

    QTreeWidgetItem *currentItem = ui->treeWidget->currentItem();
    if(currentItem)
    {
        if(currentItem->parent())
        {
            currentItem->parent()->removeChild(currentItem);
        }
        else
        {
            ui->treeWidget->takeTopLevelItem(ui->treeWidget->indexOfTopLevelItem(ui->treeWidget->currentItem()));
        }
    }
}

void TreeWidget::onSetSchoolClassLabel(QTreeWidgetItem*,int)
{
    QTreeWidgetItem *currentItem = ui->treeWidget->currentItem();
    if(currentItem->parent())
    {
        ui->schoolLabel->setText(currentItem->parent()->text(0));
        ui->classLabel->setText(currentItem->text(0));
    }
    else
    {
        ui->schoolLabel->setText(currentItem->text(0));
        ui->classLabel->setText("Did not choose the class");
    }
}

