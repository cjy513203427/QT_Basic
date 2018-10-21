#ifndef TABLEWIDGET_H
#define TABLEWIDGET_H

#include <QWidget>

namespace Ui {
class TableWidget;
}

class TableWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TableWidget(QWidget *parent = nullptr);
    ~TableWidget();

private slots:
    void on_BtnAdd_clicked();

    void on_BtnSerach_clicked();

    void on_Search_textChanged(const QString &arg1);

private:
    Ui::TableWidget *ui;
};

#endif // TABLEWIDGET_H
