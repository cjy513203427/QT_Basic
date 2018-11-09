#include "logdlg.h"
#include "ui_logdlg.h"
Logdlg::Logdlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Logdlg)
{
    ui->setupUi(this);
    ui->comboBox->setMaximumWidth(500);
    m_Translator = new QTranslator(this);
}

Logdlg::~Logdlg()
{
    delete ui;
}

void Logdlg::changeEvent(QEvent e)
{

}

void Logdlg::on_comboBox_activated(int index)
{
    switch(index)
    {
        case 0:
            m_Translator->load("E:/QT_Basic_Knowledge/Translator/Translate_CN.qm");
            break;
        case 1:
            m_Translator->load("E:/QT_Basic_Knowledge/Translator/Translate_EN.qm");
            break;
        case 2:
            m_Translator->load("E:/QT_Basic_Knowledge/Translator/Translate_DE.qm");
            break;
        default :
            break;
    }
    qApp->installTranslator(m_Translator);
    ui->retranslateUi(this);
}
