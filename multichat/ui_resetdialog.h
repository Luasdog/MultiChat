/********************************************************************************
** Form generated from reading UI file 'resetdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESETDIALOG_H
#define UI_RESETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ResetDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QLabel *err_tip;
    QHBoxLayout *horizontalLayout;
    QLabel *user_label;
    QLineEdit *user_edit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *email_label;
    QLineEdit *email_edit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *verify_label;
    QLineEdit *verify_edit;
    QPushButton *getcode_btn;
    QHBoxLayout *horizontalLayout_5;
    QLabel *passwd_label;
    QLineEdit *passwd_edit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *confirm_btn;
    QPushButton *return_btn;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *ResetDialog)
    {
        if (ResetDialog->objectName().isEmpty())
            ResetDialog->setObjectName(QString::fromUtf8("ResetDialog"));
        ResetDialog->resize(346, 500);
        ResetDialog->setMinimumSize(QSize(300, 500));
        ResetDialog->setMaximumSize(QSize(600, 900));
        horizontalLayout_2 = new QHBoxLayout(ResetDialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        err_tip = new QLabel(ResetDialog);
        err_tip->setObjectName(QString::fromUtf8("err_tip"));
        err_tip->setMinimumSize(QSize(0, 25));
        err_tip->setMaximumSize(QSize(16777215, 25));
        err_tip->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(err_tip);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        user_label = new QLabel(ResetDialog);
        user_label->setObjectName(QString::fromUtf8("user_label"));
        user_label->setMinimumSize(QSize(50, 25));
        user_label->setMaximumSize(QSize(50, 25));

        horizontalLayout->addWidget(user_label);

        user_edit = new QLineEdit(ResetDialog);
        user_edit->setObjectName(QString::fromUtf8("user_edit"));
        user_edit->setMinimumSize(QSize(0, 25));
        user_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_edit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        email_label = new QLabel(ResetDialog);
        email_label->setObjectName(QString::fromUtf8("email_label"));
        email_label->setMinimumSize(QSize(50, 25));
        email_label->setMaximumSize(QSize(50, 25));

        horizontalLayout_3->addWidget(email_label);

        email_edit = new QLineEdit(ResetDialog);
        email_edit->setObjectName(QString::fromUtf8("email_edit"));
        email_edit->setMinimumSize(QSize(0, 25));
        email_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(email_edit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verify_label = new QLabel(ResetDialog);
        verify_label->setObjectName(QString::fromUtf8("verify_label"));
        verify_label->setMinimumSize(QSize(50, 25));
        verify_label->setMaximumSize(QSize(50, 25));

        horizontalLayout_4->addWidget(verify_label);

        verify_edit = new QLineEdit(ResetDialog);
        verify_edit->setObjectName(QString::fromUtf8("verify_edit"));
        verify_edit->setMinimumSize(QSize(0, 25));
        verify_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_4->addWidget(verify_edit);

        getcode_btn = new QPushButton(ResetDialog);
        getcode_btn->setObjectName(QString::fromUtf8("getcode_btn"));
        getcode_btn->setMinimumSize(QSize(0, 25));
        getcode_btn->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_4->addWidget(getcode_btn);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        passwd_label = new QLabel(ResetDialog);
        passwd_label->setObjectName(QString::fromUtf8("passwd_label"));
        passwd_label->setMinimumSize(QSize(50, 25));
        passwd_label->setMaximumSize(QSize(50, 25));

        horizontalLayout_5->addWidget(passwd_label);

        passwd_edit = new QLineEdit(ResetDialog);
        passwd_edit->setObjectName(QString::fromUtf8("passwd_edit"));
        passwd_edit->setMinimumSize(QSize(0, 25));
        passwd_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_5->addWidget(passwd_edit);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        confirm_btn = new QPushButton(ResetDialog);
        confirm_btn->setObjectName(QString::fromUtf8("confirm_btn"));
        confirm_btn->setMinimumSize(QSize(0, 25));
        confirm_btn->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_7->addWidget(confirm_btn);

        return_btn = new QPushButton(ResetDialog);
        return_btn->setObjectName(QString::fromUtf8("return_btn"));
        return_btn->setMinimumSize(QSize(0, 25));
        return_btn->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_7->addWidget(return_btn);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(ResetDialog);

        QMetaObject::connectSlotsByName(ResetDialog);
    } // setupUi

    void retranslateUi(QDialog *ResetDialog)
    {
        ResetDialog->setWindowTitle(QApplication::translate("ResetDialog", "Dialog", nullptr));
        err_tip->setText(QApplication::translate("ResetDialog", "\351\224\231\350\257\257\346\217\220\347\244\272", nullptr));
        user_label->setText(QApplication::translate("ResetDialog", "\347\224\250\346\210\267\345\220\215", nullptr));
        email_label->setText(QApplication::translate("ResetDialog", "\351\202\256\347\256\261", nullptr));
        verify_label->setText(QApplication::translate("ResetDialog", "\351\252\214\350\257\201\347\240\201", nullptr));
        getcode_btn->setText(QApplication::translate("ResetDialog", "\350\216\267\345\217\226", nullptr));
        passwd_label->setText(QApplication::translate("ResetDialog", "\346\226\260\345\257\206\347\240\201", nullptr));
        confirm_btn->setText(QApplication::translate("ResetDialog", "\347\241\256\350\256\244", nullptr));
        return_btn->setText(QApplication::translate("ResetDialog", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResetDialog: public Ui_ResetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESETDIALOG_H
