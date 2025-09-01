/********************************************************************************
** Form generated from reading UI file 'chatuserwid.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATUSERWID_H
#define UI_CHATUSERWID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatUserWid
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *icon_wid;
    QHBoxLayout *horizontalLayout_2;
    QLabel *icon_label;
    QWidget *user_info_wid;
    QVBoxLayout *verticalLayout;
    QLabel *user_name_label;
    QLabel *user_chat_label;
    QWidget *time_wid;
    QVBoxLayout *verticalLayout_2;
    QLabel *time_label;

    void setupUi(QWidget *ChatUserWid)
    {
        if (ChatUserWid->objectName().isEmpty())
            ChatUserWid->setObjectName(QString::fromUtf8("ChatUserWid"));
        ChatUserWid->resize(400, 70);
        ChatUserWid->setMinimumSize(QSize(0, 70));
        ChatUserWid->setMaximumSize(QSize(16777215, 70));
        horizontalLayout = new QHBoxLayout(ChatUserWid);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 2, 6, 2);
        icon_wid = new QWidget(ChatUserWid);
        icon_wid->setObjectName(QString::fromUtf8("icon_wid"));
        icon_wid->setMinimumSize(QSize(50, 50));
        icon_wid->setMaximumSize(QSize(50, 50));
        horizontalLayout_2 = new QHBoxLayout(icon_wid);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        icon_label = new QLabel(icon_wid);
        icon_label->setObjectName(QString::fromUtf8("icon_label"));
        icon_label->setMinimumSize(QSize(45, 45));
        icon_label->setMaximumSize(QSize(45, 45));

        horizontalLayout_2->addWidget(icon_label);


        horizontalLayout->addWidget(icon_wid);

        user_info_wid = new QWidget(ChatUserWid);
        user_info_wid->setObjectName(QString::fromUtf8("user_info_wid"));
        user_info_wid->setMaximumSize(QSize(130, 16777215));
        verticalLayout = new QVBoxLayout(user_info_wid);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        user_name_label = new QLabel(user_info_wid);
        user_name_label->setObjectName(QString::fromUtf8("user_name_label"));

        verticalLayout->addWidget(user_name_label);

        user_chat_label = new QLabel(user_info_wid);
        user_chat_label->setObjectName(QString::fromUtf8("user_chat_label"));
        user_chat_label->setMaximumSize(QSize(130, 16777215));

        verticalLayout->addWidget(user_chat_label);


        horizontalLayout->addWidget(user_info_wid);

        time_wid = new QWidget(ChatUserWid);
        time_wid->setObjectName(QString::fromUtf8("time_wid"));
        time_wid->setMinimumSize(QSize(50, 50));
        time_wid->setMaximumSize(QSize(50, 50));
        verticalLayout_2 = new QVBoxLayout(time_wid);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        time_label = new QLabel(time_wid);
        time_label->setObjectName(QString::fromUtf8("time_label"));
        time_label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(time_label);


        horizontalLayout->addWidget(time_wid);


        retranslateUi(ChatUserWid);

        QMetaObject::connectSlotsByName(ChatUserWid);
    } // setupUi

    void retranslateUi(QWidget *ChatUserWid)
    {
        ChatUserWid->setWindowTitle(QApplication::translate("ChatUserWid", "Form", nullptr));
        icon_label->setText(QString());
        user_name_label->setText(QApplication::translate("ChatUserWid", "TextLabel", nullptr));
        user_chat_label->setText(QApplication::translate("ChatUserWid", "TextLabel", nullptr));
        time_label->setText(QApplication::translate("ChatUserWid", "20:32", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatUserWid: public Ui_ChatUserWid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATUSERWID_H
