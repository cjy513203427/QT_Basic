#ifndef LISTWIDGET_H
#define LISTWIDGET_H

#include <QWidget>

namespace Ui {
class ListWidget;
}

class ListWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ListWidget(QWidget *parent = nullptr);
    ~ListWidget();

private:
    Ui::ListWidget *ui;
private slots:
    void onOkBtn();
    void onCancelBtn();
};

#endif // LISTWIDGET_H
