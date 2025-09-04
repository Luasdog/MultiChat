/********************************************************************************
** Form generated from reading UI file 'friendlabel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDLABEL_H
#define UI_FRIENDLABEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <clickedlabel.h>

QT_BEGIN_NAMESPACE

class Ui_FriendLabel
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *tip_label;
    QWidget *close_wid;
    QHBoxLayout *horizontalLayout_2;
    ClickedLabel *close_label;

    void setupUi(QWidget *FriendLabel)
    {
        if (FriendLabel->objectName().isEmpty())
            FriendLabel->setObjectName(QString::fromUtf8("FriendLabel"));
        FriendLabel->resize(373, 42);
        FriendLabel->setMaximumSize(QSize(16777215, 43));
        horizontalLayout = new QHBoxLayout(FriendLabel);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tip_label = new QLabel(FriendLabel);
        tip_label->setObjectName(QString::fromUtf8("tip_label"));
        tip_label->setMinimumSize(QSize(25, 25));
        tip_label->setMaximumSize(QSize(25, 25));
        tip_label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(tip_label);

        close_wid = new QWidget(FriendLabel);
        close_wid->setObjectName(QString::fromUtf8("close_wid"));
        close_wid->setAutoFillBackground(false);
        horizontalLayout_2 = new QHBoxLayout(close_wid);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        close_label = new ClickedLabel(close_wid);
        close_label->setObjectName(QString::fromUtf8("close_label"));
        close_label->setMinimumSize(QSize(15, 15));
        close_label->setMaximumSize(QSize(15, 15));
        close_label->setStyleSheet(QString::fromUtf8("border-images:url(:/resource/tipclose.png)"));
        close_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(close_label);


        horizontalLayout->addWidget(close_wid);


        retranslateUi(FriendLabel);

        QMetaObject::connectSlotsByName(FriendLabel);
    } // setupUi

    void retranslateUi(QWidget *FriendLabel)
    {
        FriendLabel->setWindowTitle(QApplication::translate("FriendLabel", "Form", nullptr));
        tip_label->setText(QApplication::translate("FriendLabel", "TextLabel", nullptr));
        close_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FriendLabel: public Ui_FriendLabel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDLABEL_H
