/********************************************************************************
** Form generated from reading UI file 'treewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREEWIDGET_H
#define UI_TREEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TreeWidget
{
public:
    QHBoxLayout *horizontalLayout_3;
    QTreeWidget *treeWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *schoolLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *classLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *TreeWidget)
    {
        if (TreeWidget->objectName().isEmpty())
            TreeWidget->setObjectName(QStringLiteral("TreeWidget"));
        TreeWidget->resize(500, 392);
        horizontalLayout_3 = new QHBoxLayout(TreeWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        treeWidget = new QTreeWidget(TreeWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        horizontalLayout_3->addWidget(treeWidget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(TreeWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        schoolLabel = new QLabel(TreeWidget);
        schoolLabel->setObjectName(QStringLiteral("schoolLabel"));

        horizontalLayout->addWidget(schoolLabel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(TreeWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        classLabel = new QLabel(TreeWidget);
        classLabel->setObjectName(QStringLiteral("classLabel"));

        horizontalLayout_2->addWidget(classLabel);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(TreeWidget);

        QMetaObject::connectSlotsByName(TreeWidget);
    } // setupUi

    void retranslateUi(QWidget *TreeWidget)
    {
        TreeWidget->setWindowTitle(QApplication::translate("TreeWidget", "TreeWidget", 0));
        label->setText(QApplication::translate("TreeWidget", "\345\255\246\346\240\241\357\274\232", 0));
        schoolLabel->setText(QString());
        label_2->setText(QApplication::translate("TreeWidget", "\347\217\255\347\272\247\357\274\232", 0));
        classLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TreeWidget: public Ui_TreeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREEWIDGET_H
