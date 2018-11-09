#ifndef LOGDLG_H
#define LOGDLG_H

#include <QDialog>

#include<QTranslator>
namespace Ui {
class Logdlg;
}

class Logdlg : public QDialog
{
    Q_OBJECT

public:
    explicit Logdlg(QWidget *parent = 0);
    ~Logdlg();

    void changeEvent(QEvent e);

private slots:
    void on_comboBox_activated(int index);

private:
    Ui::Logdlg *ui;

    QTranslator *m_Translator;
};

#endif // LOGDLG_H
