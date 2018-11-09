/********************************************************************************
** Form generated from reading UI file 'listview.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTVIEW_H
#define UI_LISTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListView
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QListView *listView;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnOK;
    QPushButton *pushButton_2;

    void setupUi(QWidget *ListView)
    {
        if (ListView->objectName().isEmpty())
            ListView->setObjectName(QStringLiteral("ListView"));
        ListView->resize(400, 300);
        verticalLayout = new QVBoxLayout(ListView);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(ListView);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        comboBox = new QComboBox(ListView);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        listView = new QListView(ListView);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        BtnOK = new QPushButton(ListView);
        BtnOK->setObjectName(QStringLiteral("BtnOK"));

        horizontalLayout->addWidget(BtnOK);

        pushButton_2 = new QPushButton(ListView);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ListView);

        QMetaObject::connectSlotsByName(ListView);
    } // setupUi

    void retranslateUi(QWidget *ListView)
    {
        ListView->setWindowTitle(QApplication::translate("ListView", "ListView", Q_NULLPTR));
        label->setText(QApplication::translate("ListView", "\346\250\241\345\236\213\357\274\232", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ListView", "\345\255\246\347\224\237", Q_NULLPTR)
         << QApplication::translate("ListView", "\350\200\201\345\270\210", Q_NULLPTR)
         << QApplication::translate("ListView", "\345\267\245\344\272\272", Q_NULLPTR)
        );
        BtnOK->setText(QApplication::translate("ListView", "yes", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ListView", "no", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListView: public Ui_ListView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTVIEW_H
