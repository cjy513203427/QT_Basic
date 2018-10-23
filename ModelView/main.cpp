#include "widget.h"
#include <QApplication>
#include <QFileSystemModel>
#include <QDir>
#include<QSplitter>
#include<QTreeView>
#include<QListView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    //splitter起到分割界面的作用
    QSplitter *splitter = new QSplitter;

    QFileSystemModel *model = new QFileSystemModel;
    model->setRootPath(QDir::currentPath());

    QTreeView *treeView = new QTreeView(splitter);
    treeView->setModel(model);
    //从模型获取当前路径
    treeView->setRootIndex(model->index(QDir::currentPath()));

    QListView *listView = new QListView(splitter);
    listView->setModel(model);
    listView->setRootIndex(model->index(QDir::currentPath()));

    splitter->show();
    return a.exec();
}
