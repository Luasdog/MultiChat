/********************************************************************************
** Form generated from reading UI file 'chatdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATDIALOG_H
#define UI_CHATDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <clickedbtn.h>

QT_BEGIN_NAMESPACE

class Ui_ChatDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *side_bar;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *side_contact_labe;
    QLabel *side_head_label;
    QLabel *side_chat_label;
    QSpacerItem *verticalSpacer;
    QWidget *chat_user_wid;
    QVBoxLayout *verticalLayout_2;
    QWidget *search_wid;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *search_edit;
    QSpacerItem *horizontalSpacer;
    ClickedBtn *add_btn;
    QListWidget *chat_user_list;
    QTableWidget *search_list;
    QWidget *chat_data_wid;
    QVBoxLayout *verticalLayout_4;
    QWidget *title_wid;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *title_label;
    QWidget *chat_data_list;
    QWidget *tool_wid;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *emo_label;
    QSpacerItem *horizontalSpacer_3;
    QLabel *file_label;
    QSpacerItem *horizontalSpacer_4;
    QTextEdit *chat_edit;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *receive_btn;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *send_btn;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QDialog *ChatDialog)
    {
        if (ChatDialog->objectName().isEmpty())
            ChatDialog->setObjectName(QString::fromUtf8("ChatDialog"));
        ChatDialog->resize(976, 653);
        horizontalLayout = new QHBoxLayout(ChatDialog);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        side_bar = new QWidget(ChatDialog);
        side_bar->setObjectName(QString::fromUtf8("side_bar"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(side_bar->sizePolicy().hasHeightForWidth());
        side_bar->setSizePolicy(sizePolicy);
        side_bar->setMinimumSize(QSize(56, 0));
        side_bar->setMaximumSize(QSize(56, 16777215));
        verticalLayout = new QVBoxLayout(side_bar);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 30, 0, 0);
        widget = new QWidget(side_bar);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(30);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        side_contact_labe = new QLabel(widget);
        side_contact_labe->setObjectName(QString::fromUtf8("side_contact_labe"));
        side_contact_labe->setMinimumSize(QSize(30, 30));
        side_contact_labe->setMaximumSize(QSize(30, 30));

        verticalLayout_3->addWidget(side_contact_labe);

        side_head_label = new QLabel(widget);
        side_head_label->setObjectName(QString::fromUtf8("side_head_label"));
        side_head_label->setMinimumSize(QSize(30, 30));
        side_head_label->setMaximumSize(QSize(30, 30));

        verticalLayout_3->addWidget(side_head_label);

        side_chat_label = new QLabel(widget);
        side_chat_label->setObjectName(QString::fromUtf8("side_chat_label"));
        side_chat_label->setMinimumSize(QSize(30, 30));
        side_chat_label->setMaximumSize(QSize(30, 30));

        verticalLayout_3->addWidget(side_chat_label);


        verticalLayout->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(side_bar);

        chat_user_wid = new QWidget(ChatDialog);
        chat_user_wid->setObjectName(QString::fromUtf8("chat_user_wid"));
        chat_user_wid->setMaximumSize(QSize(250, 16777215));
        verticalLayout_2 = new QVBoxLayout(chat_user_wid);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        search_wid = new QWidget(chat_user_wid);
        search_wid->setObjectName(QString::fromUtf8("search_wid"));
        search_wid->setMinimumSize(QSize(0, 60));
        horizontalLayout_2 = new QHBoxLayout(search_wid);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        search_edit = new QLineEdit(search_wid);
        search_edit->setObjectName(QString::fromUtf8("search_edit"));

        horizontalLayout_2->addWidget(search_edit);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        add_btn = new ClickedBtn(search_wid);
        add_btn->setObjectName(QString::fromUtf8("add_btn"));
        add_btn->setMinimumSize(QSize(24, 24));
        add_btn->setMaximumSize(QSize(24, 24));

        horizontalLayout_2->addWidget(add_btn);


        verticalLayout_2->addWidget(search_wid);

        chat_user_list = new QListWidget(chat_user_wid);
        chat_user_list->setObjectName(QString::fromUtf8("chat_user_list"));

        verticalLayout_2->addWidget(chat_user_list);

        search_list = new QTableWidget(chat_user_wid);
        search_list->setObjectName(QString::fromUtf8("search_list"));

        verticalLayout_2->addWidget(search_list);


        horizontalLayout->addWidget(chat_user_wid);

        chat_data_wid = new QWidget(ChatDialog);
        chat_data_wid->setObjectName(QString::fromUtf8("chat_data_wid"));
        verticalLayout_4 = new QVBoxLayout(chat_data_wid);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        title_wid = new QWidget(chat_data_wid);
        title_wid->setObjectName(QString::fromUtf8("title_wid"));
        title_wid->setMinimumSize(QSize(0, 60));
        title_wid->setMaximumSize(QSize(16777215, 60));
        verticalLayout_5 = new QVBoxLayout(title_wid);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        widget_2 = new QWidget(title_wid);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        title_label = new QLabel(widget_2);
        title_label->setObjectName(QString::fromUtf8("title_label"));

        horizontalLayout_3->addWidget(title_label);


        verticalLayout_5->addWidget(widget_2);


        verticalLayout_4->addWidget(title_wid);

        chat_data_list = new QWidget(chat_data_wid);
        chat_data_list->setObjectName(QString::fromUtf8("chat_data_list"));

        verticalLayout_4->addWidget(chat_data_list);

        tool_wid = new QWidget(chat_data_wid);
        tool_wid->setObjectName(QString::fromUtf8("tool_wid"));
        tool_wid->setMinimumSize(QSize(0, 60));
        tool_wid->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_4 = new QHBoxLayout(tool_wid);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(2, 2, 2, 2);
        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        emo_label = new QLabel(tool_wid);
        emo_label->setObjectName(QString::fromUtf8("emo_label"));
        emo_label->setMinimumSize(QSize(25, 25));
        emo_label->setMaximumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(emo_label);

        horizontalSpacer_3 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        file_label = new QLabel(tool_wid);
        file_label->setObjectName(QString::fromUtf8("file_label"));
        file_label->setMinimumSize(QSize(25, 25));
        file_label->setMaximumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(file_label);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_4->addWidget(tool_wid);

        chat_edit = new QTextEdit(chat_data_wid);
        chat_edit->setObjectName(QString::fromUtf8("chat_edit"));
        chat_edit->setMinimumSize(QSize(0, 150));
        chat_edit->setMaximumSize(QSize(16777215, 150));

        verticalLayout_4->addWidget(chat_edit);

        widget_5 = new QWidget(chat_data_wid);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setMinimumSize(QSize(0, 60));
        widget_5->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        receive_btn = new QPushButton(widget_5);
        receive_btn->setObjectName(QString::fromUtf8("receive_btn"));
        receive_btn->setMinimumSize(QSize(100, 30));
        receive_btn->setMaximumSize(QSize(100, 30));

        horizontalLayout_5->addWidget(receive_btn);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        send_btn = new QPushButton(widget_5);
        send_btn->setObjectName(QString::fromUtf8("send_btn"));
        send_btn->setMinimumSize(QSize(100, 30));
        send_btn->setMaximumSize(QSize(100, 30));

        horizontalLayout_5->addWidget(send_btn);

        horizontalSpacer_7 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);


        verticalLayout_4->addWidget(widget_5);


        horizontalLayout->addWidget(chat_data_wid);


        retranslateUi(ChatDialog);

        QMetaObject::connectSlotsByName(ChatDialog);
    } // setupUi

    void retranslateUi(QDialog *ChatDialog)
    {
        ChatDialog->setWindowTitle(QApplication::translate("ChatDialog", "Dialog", nullptr));
        side_contact_labe->setText(QString());
        side_head_label->setText(QString());
        side_chat_label->setText(QString());
        add_btn->setText(QString());
        title_label->setText(QApplication::translate("ChatDialog", "\346\263\260\350\277\252\347\275\227\346\226\257\347\246\217", nullptr));
        emo_label->setText(QApplication::translate("ChatDialog", "TextLabel", nullptr));
        file_label->setText(QApplication::translate("ChatDialog", "TextLabel", nullptr));
        receive_btn->setText(QApplication::translate("ChatDialog", "\346\216\245\346\224\266", nullptr));
        send_btn->setText(QApplication::translate("ChatDialog", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatDialog: public Ui_ChatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATDIALOG_H
