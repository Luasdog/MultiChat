/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clickedlabel.h"
#include "timerbtn.h"

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *err_tip;
    QHBoxLayout *horizontalLayout;
    QLabel *user_label;
    QLineEdit *user_edit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *email_label;
    QLineEdit *email_edit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *passwd_label;
    QLineEdit *passwd_edit;
    ClickedLabel *passwd_visible;
    QHBoxLayout *horizontalLayout_4;
    QLabel *confirm_label;
    QLineEdit *confirm_edit;
    ClickedLabel *confirm_visible;
    QHBoxLayout *horizontalLayout_5;
    QLabel *verify_label;
    QLineEdit *verify_edit;
    TimerBtn *getcode_btn;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *confirm_pushButton;
    QPushButton *cancel_pushButton;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_3;
    QLabel *tip_label;
    QLabel *tip2_label;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *return_btn;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName(QString::fromUtf8("RegisterDialog"));
        RegisterDialog->resize(371, 500);
        RegisterDialog->setMinimumSize(QSize(300, 500));
        RegisterDialog->setMaximumSize(QSize(600, 900));
        horizontalLayout_7 = new QHBoxLayout(RegisterDialog);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(RegisterDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        widget = new QWidget(page);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        err_tip = new QLabel(widget);
        err_tip->setObjectName(QString::fromUtf8("err_tip"));
        err_tip->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(err_tip);


        verticalLayout_3->addWidget(widget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        user_label = new QLabel(page);
        user_label->setObjectName(QString::fromUtf8("user_label"));
        user_label->setMinimumSize(QSize(0, 25));
        user_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_label);

        user_edit = new QLineEdit(page);
        user_edit->setObjectName(QString::fromUtf8("user_edit"));
        user_edit->setMinimumSize(QSize(0, 25));
        user_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_edit);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        email_label = new QLabel(page);
        email_label->setObjectName(QString::fromUtf8("email_label"));
        email_label->setMinimumSize(QSize(0, 25));
        email_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(email_label);

        email_edit = new QLineEdit(page);
        email_edit->setObjectName(QString::fromUtf8("email_edit"));
        email_edit->setMinimumSize(QSize(0, 25));
        email_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(email_edit);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        passwd_label = new QLabel(page);
        passwd_label->setObjectName(QString::fromUtf8("passwd_label"));
        passwd_label->setMinimumSize(QSize(0, 25));
        passwd_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(passwd_label);

        passwd_edit = new QLineEdit(page);
        passwd_edit->setObjectName(QString::fromUtf8("passwd_edit"));
        passwd_edit->setMinimumSize(QSize(0, 25));
        passwd_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(passwd_edit);

        passwd_visible = new ClickedLabel(page);
        passwd_visible->setObjectName(QString::fromUtf8("passwd_visible"));
        passwd_visible->setMinimumSize(QSize(20, 20));
        passwd_visible->setMaximumSize(QSize(20, 20));

        horizontalLayout_3->addWidget(passwd_visible);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        confirm_label = new QLabel(page);
        confirm_label->setObjectName(QString::fromUtf8("confirm_label"));
        confirm_label->setMinimumSize(QSize(0, 25));
        confirm_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_4->addWidget(confirm_label);

        confirm_edit = new QLineEdit(page);
        confirm_edit->setObjectName(QString::fromUtf8("confirm_edit"));
        confirm_edit->setMinimumSize(QSize(0, 25));
        confirm_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_4->addWidget(confirm_edit);

        confirm_visible = new ClickedLabel(page);
        confirm_visible->setObjectName(QString::fromUtf8("confirm_visible"));
        confirm_visible->setMinimumSize(QSize(20, 20));
        confirm_visible->setMaximumSize(QSize(20, 20));

        horizontalLayout_4->addWidget(confirm_visible);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verify_label = new QLabel(page);
        verify_label->setObjectName(QString::fromUtf8("verify_label"));
        verify_label->setMinimumSize(QSize(0, 25));
        verify_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_5->addWidget(verify_label);

        verify_edit = new QLineEdit(page);
        verify_edit->setObjectName(QString::fromUtf8("verify_edit"));
        verify_edit->setMinimumSize(QSize(0, 25));
        verify_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_5->addWidget(verify_edit);

        getcode_btn = new TimerBtn(page);
        getcode_btn->setObjectName(QString::fromUtf8("getcode_btn"));
        getcode_btn->setMinimumSize(QSize(0, 25));
        getcode_btn->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_5->addWidget(getcode_btn);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        confirm_pushButton = new QPushButton(page);
        confirm_pushButton->setObjectName(QString::fromUtf8("confirm_pushButton"));
        confirm_pushButton->setMinimumSize(QSize(0, 25));
        confirm_pushButton->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_6->addWidget(confirm_pushButton);

        cancel_pushButton = new QPushButton(page);
        cancel_pushButton->setObjectName(QString::fromUtf8("cancel_pushButton"));
        cancel_pushButton->setMinimumSize(QSize(0, 25));
        cancel_pushButton->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_6->addWidget(cancel_pushButton);


        verticalLayout_3->addLayout(horizontalLayout_6);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_5 = new QVBoxLayout(page_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        tip_label = new QLabel(page_2);
        tip_label->setObjectName(QString::fromUtf8("tip_label"));
        tip_label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(tip_label);

        tip2_label = new QLabel(page_2);
        tip2_label->setObjectName(QString::fromUtf8("tip2_label"));
        tip2_label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(tip2_label);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        widget_2 = new QWidget(page_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_8 = new QHBoxLayout(widget_2);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        return_btn = new QPushButton(widget_2);
        return_btn->setObjectName(QString::fromUtf8("return_btn"));
        return_btn->setMinimumSize(QSize(0, 25));
        return_btn->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_8->addWidget(return_btn);

        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);


        verticalLayout_5->addWidget(widget_2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);

        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);


        horizontalLayout_7->addLayout(verticalLayout);


        retranslateUi(RegisterDialog);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QApplication::translate("RegisterDialog", "Dialog", nullptr));
        err_tip->setText(QApplication::translate("RegisterDialog", "\351\224\231\350\257\257\346\217\220\347\244\272", nullptr));
        user_label->setText(QApplication::translate("RegisterDialog", "\347\224\250\346\210\267", nullptr));
        email_label->setText(QApplication::translate("RegisterDialog", "\351\202\256\347\256\261", nullptr));
        passwd_label->setText(QApplication::translate("RegisterDialog", "\345\257\206\347\240\201", nullptr));
        passwd_visible->setText(QString());
        confirm_label->setText(QApplication::translate("RegisterDialog", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        confirm_visible->setText(QString());
        verify_label->setText(QApplication::translate("RegisterDialog", "\351\252\214\350\257\201\347\240\201", nullptr));
        getcode_btn->setText(QApplication::translate("RegisterDialog", "\350\216\267\345\217\226", nullptr));
        confirm_pushButton->setText(QApplication::translate("RegisterDialog", "\347\241\256\350\256\244", nullptr));
        cancel_pushButton->setText(QApplication::translate("RegisterDialog", "\345\217\226\346\266\210", nullptr));
        tip_label->setText(QApplication::translate("RegisterDialog", "\346\263\250\345\206\214\346\210\220\345\212\237\357\274\2145s\345\220\216\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
        tip2_label->setText(QApplication::translate("RegisterDialog", "\345\217\257\347\202\271\345\207\273\350\277\224\345\233\236\346\214\211\351\222\256\347\233\264\346\216\245\350\277\224\345\233\236\347\231\273\351\231\206\347\225\214\351\235\242", nullptr));
        return_btn->setText(QApplication::translate("RegisterDialog", "\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
