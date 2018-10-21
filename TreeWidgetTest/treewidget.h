#ifndef TREEWIDGET_H
#define TREEWIDGET_H

#include <QWidget>
#include <QContextMenuEvent>
#include <QMenu>
#include <QAction>
#include <QTreeWidgetItem>

namespace
Ui
{
class TreeWidget;
}

class TreeWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TreeWidget(QWidget *parent = 0);
    ~TreeWidget();

    void createMenu();

public:
    void contextMenuEvent(QContextMenuEvent *event);

private:
    void initTreeWidget();

private slots:
    void onAddSchool(bool); //添加学校

    void onAddClass(bool); //添加班级

    void onDelSchoolClass(bool); //删除班级、学校

    void onSetSchoolClassLabel(QTreeWidgetItem*,int);//点击tree实时看到树节点的名称

private:
    Ui::TreeWidget *ui;

    QMenu *m_Menu;

    QMenu *m_AddMenu;

    QAction *m_AddChoolAction;
    QAction *m_AddClassAction;

    QAction *m_DelAction;
};

#endif // TREEWIDGET_H
