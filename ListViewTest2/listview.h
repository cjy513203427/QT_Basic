#ifndef LISTVIEW_H
#define LISTVIEW_H

#include <QWidget>
#include<QStandardItemModel>

namespace Ui {
class ListView;
}

class ListView : public QWidget
{
    Q_OBJECT

public:
    explicit ListView(QWidget *parent = nullptr);
    ~ListView();

private slots:
    void on_BtnOK_clicked();


    void on_comboBox_currentIndexChanged(const QString &arg1);

private:
    void initModel();
private:
    Ui::ListView *ui;

    QStandardItemModel *m_studentModel;
    QStandardItemModel *m_teacherModel;
    QStandardItemModel *m_workerModel;
};

#endif // LISTVIEW_H
