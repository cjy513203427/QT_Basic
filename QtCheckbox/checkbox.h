#ifndef CHECKBOX_H
#define CHECKBOX_H

#include <QMainWindow>

namespace Ui {
class Checkbox;
}

class Checkbox : public QMainWindow
{
    Q_OBJECT

public:
    explicit Checkbox(QWidget *parent = nullptr);
    ~Checkbox();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Checkbox *ui;
};

#endif // CHECKBOX_H
