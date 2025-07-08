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

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QVBoxLayout *verticalLayout_2;
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
    QLineEdit *user_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mail_label;
    QLineEdit *mail_lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *passwd_label;
    QLineEdit *passwd_lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *confirm_label;
    QLineEdit *confirm_lineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *verify_label;
    QLineEdit *verify_lineEdit;
    QPushButton *getcode_pushButton;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *confirm_pushButton;
    QPushButton *cancel_pushButton;
    QWidget *page_2;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName(QString::fromUtf8("RegisterDialog"));
        RegisterDialog->resize(407, 500);
        RegisterDialog->setMinimumSize(QSize(300, 500));
        RegisterDialog->setMaximumSize(QSize(600, 900));
        verticalLayout_2 = new QVBoxLayout(RegisterDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
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

        user_lineEdit = new QLineEdit(page);
        user_lineEdit->setObjectName(QString::fromUtf8("user_lineEdit"));
        user_lineEdit->setMinimumSize(QSize(0, 25));
        user_lineEdit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_lineEdit);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mail_label = new QLabel(page);
        mail_label->setObjectName(QString::fromUtf8("mail_label"));
        mail_label->setMinimumSize(QSize(0, 25));
        mail_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(mail_label);

        mail_lineEdit = new QLineEdit(page);
        mail_lineEdit->setObjectName(QString::fromUtf8("mail_lineEdit"));
        mail_lineEdit->setMinimumSize(QSize(0, 25));
        mail_lineEdit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(mail_lineEdit);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        passwd_label = new QLabel(page);
        passwd_label->setObjectName(QString::fromUtf8("passwd_label"));
        passwd_label->setMinimumSize(QSize(0, 25));
        passwd_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(passwd_label);

        passwd_lineEdit = new QLineEdit(page);
        passwd_lineEdit->setObjectName(QString::fromUtf8("passwd_lineEdit"));
        passwd_lineEdit->setMinimumSize(QSize(0, 25));
        passwd_lineEdit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(passwd_lineEdit);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        confirm_label = new QLabel(page);
        confirm_label->setObjectName(QString::fromUtf8("confirm_label"));
        confirm_label->setMinimumSize(QSize(0, 25));
        confirm_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_4->addWidget(confirm_label);

        confirm_lineEdit = new QLineEdit(page);
        confirm_lineEdit->setObjectName(QString::fromUtf8("confirm_lineEdit"));
        confirm_lineEdit->setMinimumSize(QSize(0, 25));
        confirm_lineEdit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_4->addWidget(confirm_lineEdit);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verify_label = new QLabel(page);
        verify_label->setObjectName(QString::fromUtf8("verify_label"));
        verify_label->setMinimumSize(QSize(0, 25));
        verify_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_5->addWidget(verify_label);

        verify_lineEdit = new QLineEdit(page);
        verify_lineEdit->setObjectName(QString::fromUtf8("verify_lineEdit"));
        verify_lineEdit->setMinimumSize(QSize(0, 25));
        verify_lineEdit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_5->addWidget(verify_lineEdit);

        getcode_pushButton = new QPushButton(page);
        getcode_pushButton->setObjectName(QString::fromUtf8("getcode_pushButton"));
        getcode_pushButton->setMinimumSize(QSize(0, 25));
        getcode_pushButton->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_5->addWidget(getcode_pushButton);


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
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QApplication::translate("RegisterDialog", "Dialog", nullptr));
        err_tip->setText(QApplication::translate("RegisterDialog", "\351\224\231\350\257\257\346\217\220\347\244\272", nullptr));
        user_label->setText(QApplication::translate("RegisterDialog", "\347\224\250\346\210\267", nullptr));
        mail_label->setText(QApplication::translate("RegisterDialog", "\351\202\256\347\256\261", nullptr));
        passwd_label->setText(QApplication::translate("RegisterDialog", "\345\257\206\347\240\201", nullptr));
        confirm_label->setText(QApplication::translate("RegisterDialog", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        verify_label->setText(QApplication::translate("RegisterDialog", "\351\252\214\350\257\201\347\240\201", nullptr));
        getcode_pushButton->setText(QApplication::translate("RegisterDialog", "\350\216\267\345\217\226", nullptr));
        confirm_pushButton->setText(QApplication::translate("RegisterDialog", "\347\241\256\350\256\244", nullptr));
        cancel_pushButton->setText(QApplication::translate("RegisterDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
