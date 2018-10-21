#include "treewidget.h"
#include <QApplication>


void setStyleSheet(QString sheetName)
{
    //设置样式表
    QFile file("../css/" + sheetName + ".css");
    file.open(QFile::ReadOnly);
    QString styleSheet = QString::fromLatin1(file.readAll());
    qApp->setStyleSheet(styleSheet);
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString sheetName1 = "styleSheet";
    setStyleSheet(sheetName1 );

    TreeWidget w;
    w.show();

    return a.exec();
}
