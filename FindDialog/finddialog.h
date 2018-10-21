#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QDialog>
#include<QLabel>
#include<QLineEdit>
#include<QPushButton>
#include<QCheckBox>

class FindDialog : public QDialog
{
    Q_OBJECT

public:
    FindDialog(QWidget *parent = 0);
    ~FindDialog();

signals:
    void findNext(const QString &str,Qt::CaseSensitivity cs);
    void findPrevious(const QString &str,Qt::CaseSensitivity cs);

private slots:
    void onFindClicked();
    void onEnableFindBtn(const QString &text);

private:
    QLabel *mLabel;
    QLineEdit *mLineEdit;
    QPushButton *mFindBtn;
    QPushButton *mCloseBtn;
    QCheckBox *mCaseMatch;
    QCheckBox *mBackWard;
};

#endif // FINDDIALOG_H
