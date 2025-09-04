/********************************************************************************
** Form generated from reading UI file 'findsuccessdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDSUCCESSDIALOG_H
#define UI_FINDSUCCESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <clickedbtn.h>

QT_BEGIN_NAMESPACE

class Ui_FindSuccessDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *head_label;
    QLabel *name_label;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    ClickedBtn *add_friend_btn;

    void setupUi(QDialog *FindSuccessDialog)
    {
        if (FindSuccessDialog->objectName().isEmpty())
            FindSuccessDialog->setObjectName(QString::fromUtf8("FindSuccessDialog"));
        FindSuccessDialog->resize(280, 190);
        FindSuccessDialog->setMinimumSize(QSize(280, 190));
        FindSuccessDialog->setMaximumSize(QSize(280, 190));
        verticalLayout = new QVBoxLayout(FindSuccessDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(FindSuccessDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        head_label = new QLabel(widget);
        head_label->setObjectName(QString::fromUtf8("head_label"));
        head_label->setMinimumSize(QSize(50, 50));
        head_label->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(head_label);

        name_label = new QLabel(widget);
        name_label->setObjectName(QString::fromUtf8("name_label"));

        horizontalLayout->addWidget(name_label);

        horizontalSpacer = new QSpacerItem(179, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(FindSuccessDialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        add_friend_btn = new ClickedBtn(widget_2);
        add_friend_btn->setObjectName(QString::fromUtf8("add_friend_btn"));
        add_friend_btn->setMinimumSize(QSize(120, 35));
        add_friend_btn->setMaximumSize(QSize(120, 35));

        horizontalLayout_2->addWidget(add_friend_btn);


        verticalLayout->addWidget(widget_2);


        retranslateUi(FindSuccessDialog);

        QMetaObject::connectSlotsByName(FindSuccessDialog);
    } // setupUi

    void retranslateUi(QDialog *FindSuccessDialog)
    {
        FindSuccessDialog->setWindowTitle(QApplication::translate("FindSuccessDialog", "Dialog", nullptr));
        head_label->setText(QString());
        name_label->setText(QString());
        add_friend_btn->setText(QApplication::translate("FindSuccessDialog", "\346\267\273\345\212\240\345\210\260\351\200\232\350\256\257\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindSuccessDialog: public Ui_FindSuccessDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDSUCCESSDIALOG_H
