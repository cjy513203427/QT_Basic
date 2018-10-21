#include "finddialog.h"
#include<QHBoxLayout>
#include<QVBoxLayout>
FindDialog::FindDialog(QWidget *parent)
    : QDialog(parent)
{
    mLabel = new QLabel("Find &What:");//按alt+w可以快速定位到该控件
    mLineEdit = new QLineEdit;
    mLabel->setBuddy(mLineEdit);

    mCaseMatch = new QCheckBox("Match &Case");
    mBackWard = new QCheckBox("Search &Backward");

    mFindBtn = new QPushButton("&Find");
    mFindBtn->setEnabled(false);
    mCloseBtn = new QPushButton("&Close");

    connect(mLineEdit,SIGNAL(textChanged(QString)),this,SLOT(onEnableFindBtn(QString)));
    connect(mFindBtn,SIGNAL(clicked(bool)),this,SLOT(onFindClicked()));
    connect(mCloseBtn,SIGNAL(clicked(bool)),this,SLOT(close()));

    //存在disconnet方法，作用是断开连接
    QHBoxLayout *leftTopLayout = new QHBoxLayout;
    leftTopLayout->addWidget(mLabel);
    leftTopLayout->addWidget(mLineEdit);

    QVBoxLayout *leftLayout = new QVBoxLayout;
    leftLayout->addLayout(leftTopLayout);
    leftLayout->addWidget(mCaseMatch);
    leftLayout->addWidget(mBackWard);

    QVBoxLayout *rightLayout = new QVBoxLayout;
    rightLayout->addWidget(mFindBtn);
    rightLayout->addWidget(mCloseBtn);

    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);

    setWindowTitle("Find");
    //最后mainLayout要放到总布局中
    setLayout(mainLayout);

}

FindDialog::~FindDialog()
{

}

void FindDialog::onFindClicked()
{
    QString text = mLineEdit->text();
    Qt::CaseSensitivity cs = mCaseMatch->isChecked()?Qt::CaseSensitive : Qt::CaseInsensitive;

    if(mBackWard->isChecked())
    {
        emit findPrevious(text,cs);
    }
    else
    {
        emit findNext(text,cs);
    }
}

void FindDialog::onEnableFindBtn(const QString &text)
{
    mFindBtn->setEnabled(!text.isEmpty());
}
