/********************************************************************************
** Form generated from reading UI file 'applyfrienditem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLYFRIENDITEM_H
#define UI_APPLYFRIENDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <clickedbtn.h>

QT_BEGIN_NAMESPACE

class Ui_ApplyFriendItem
{
public:
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *icon_label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *user_name_label;
    QLabel *user_chat_label;
    ClickedBtn *addBtn;
    QLabel *already_add_label;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ApplyFriendItem)
    {
        if (ApplyFriendItem->objectName().isEmpty())
            ApplyFriendItem->setObjectName(QString::fromUtf8("ApplyFriendItem"));
        ApplyFriendItem->resize(400, 80);
        ApplyFriendItem->setMaximumSize(QSize(16777215, 80));
        horizontalLayout = new QHBoxLayout(ApplyFriendItem);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        icon_label = new QLabel(ApplyFriendItem);
        icon_label->setObjectName(QString::fromUtf8("icon_label"));
        icon_label->setMinimumSize(QSize(45, 45));
        icon_label->setMaximumSize(QSize(45, 45));

        horizontalLayout->addWidget(icon_label);

        widget = new QWidget(ApplyFriendItem);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 2, -1, 2);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 2, -1, 2);
        user_name_label = new QLabel(widget_2);
        user_name_label->setObjectName(QString::fromUtf8("user_name_label"));
        user_name_label->setMinimumSize(QSize(100, 30));
        user_name_label->setMaximumSize(QSize(200, 30));

        verticalLayout->addWidget(user_name_label);

        user_chat_label = new QLabel(widget_2);
        user_chat_label->setObjectName(QString::fromUtf8("user_chat_label"));
        user_chat_label->setMinimumSize(QSize(100, 30));
        user_chat_label->setMaximumSize(QSize(200, 30));

        verticalLayout->addWidget(user_chat_label);


        horizontalLayout_2->addWidget(widget_2);

        addBtn = new ClickedBtn(widget);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));
        addBtn->setMinimumSize(QSize(80, 30));
        addBtn->setMaximumSize(QSize(80, 30));

        horizontalLayout_2->addWidget(addBtn);

        already_add_label = new QLabel(widget);
        already_add_label->setObjectName(QString::fromUtf8("already_add_label"));
        already_add_label->setMinimumSize(QSize(40, 0));

        horizontalLayout_2->addWidget(already_add_label);

        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        horizontalLayout->addWidget(widget);


        retranslateUi(ApplyFriendItem);

        QMetaObject::connectSlotsByName(ApplyFriendItem);
    } // setupUi

    void retranslateUi(QWidget *ApplyFriendItem)
    {
        ApplyFriendItem->setWindowTitle(QApplication::translate("ApplyFriendItem", "Form", nullptr));
        icon_label->setText(QApplication::translate("ApplyFriendItem", "TextLabel", nullptr));
        user_name_label->setText(QApplication::translate("ApplyFriendItem", "TextLabel", nullptr));
        user_chat_label->setText(QApplication::translate("ApplyFriendItem", "TextLabel", nullptr));
        addBtn->setText(QApplication::translate("ApplyFriendItem", "\346\267\273\345\212\240", nullptr));
        already_add_label->setText(QApplication::translate("ApplyFriendItem", "\345\267\262\346\267\273\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ApplyFriendItem: public Ui_ApplyFriendItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLYFRIENDITEM_H
