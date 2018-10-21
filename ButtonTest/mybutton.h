#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QDialog>
#include<QEvent>

namespace Ui {
class MyButton;
}

class MyButton : public QDialog
{
    Q_OBJECT

public:
    explicit MyButton(QWidget *parent = nullptr);
    ~MyButton();

private slots:
    void on_pushButton1_clicked();
    void on_Button2();
    void enterEvent(QEvent *event);//鼠标进入按钮
    void leaveEvent(QEvent *event);//鼠标离开
    bool eventFilter(QObject *o,QEvent *e);
private:
    Ui::MyButton *ui;
};

#endif // MYBUTTON_H
