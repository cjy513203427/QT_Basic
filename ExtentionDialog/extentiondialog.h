#ifndef EXTENTIONDIALOG_H
#define EXTENTIONDIALOG_H

#include <QDialog>

namespace Ui {
class ExtentionDialog;
}

class ExtentionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ExtentionDialog(QWidget *parent = nullptr);
    ~ExtentionDialog();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::ExtentionDialog *ui;
};

#endif // EXTENTIONDIALOG_H
