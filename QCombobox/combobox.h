#ifndef COMBOBOX_H
#define COMBOBOX_H

#include <QWidget>

namespace Ui {
class ComboBox;
}

class ComboBox : public QWidget
{
    Q_OBJECT

public:
    explicit ComboBox(QWidget *parent = nullptr);
    ~ComboBox();

private:
    Ui::ComboBox *ui;

private slots:
    void onGetComboText();
};

#endif // COMBOBOX_H
