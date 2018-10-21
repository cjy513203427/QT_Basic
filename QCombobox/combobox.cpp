#include "combobox.h"
#include "ui_combobox.h"
#include "QMessageBox"
ComboBox::ComboBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ComboBox)
{
    ui->setupUi(this);
    QStringList items;
    items.append("MFC");
    items.append("QT");
    items.append("WPF");
    items.append("VB");
    items.append("WINFORM");

    ui->comboBox->addItems(items);

    connect(ui->checkBox,SIGNAL(clicked(bool)),ui->comboBox,SLOT(setEnabled(bool)));
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(onGetComboText()));
}

ComboBox::~ComboBox()
{
    delete ui;
}

void ComboBox::onGetComboText()
{
    QMessageBox::information(this,"title",ui->comboBox->currentText());
}
