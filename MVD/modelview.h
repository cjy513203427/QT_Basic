#ifndef MODELVIEW_H
#define MODELVIEW_H

#include <QWidget>
#include<QStandardItemModel>
namespace Ui {
class ModelView;
}

class ModelView : public QWidget
{
    Q_OBJECT

public:
    explicit ModelView(QWidget *parent = nullptr);
    ~ModelView();

private slots:
    void onBtnClear();
private:
    Ui::ModelView *ui;

    QStandardItemModel *m_pModel = new QStandardItemModel;
};

#endif // MODELVIEW_H
