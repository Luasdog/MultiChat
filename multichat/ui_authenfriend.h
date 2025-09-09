/********************************************************************************
** Form generated from reading UI file 'authenfriend.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHENFRIEND_H
#define UI_AUTHENFRIEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <clickedbtn.h>
#include <clickedoncelabel.h>
#include <customizeedit.h>

QT_BEGIN_NAMESPACE

class Ui_AuthenFriend
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollcontent;
    QVBoxLayout *verticalLayout_2;
    QLabel *apply_label;
    QWidget *apply_wid;
    QVBoxLayout *verticalLayout_3;
    QFrame *line;
    CustomizeEdit *name_edit;
    QLabel *label_2;
    CustomizeEdit *back_edit;
    QLabel *label_3;
    QWidget *label_group_wid;
    QVBoxLayout *verticalLayout_4;
    QWidget *gridWidget;
    CustomizeEdit *label_edit;
    QWidget *input_tip_wid;
    QVBoxLayout *verticalLayout_5;
    ClickedOnceLabel *tip_label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *label_list;
    QWidget *more_label_wid;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_3;
    ClickedOnceLabel *more_label;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer;
    QWidget *apply_sure_wid;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    ClickedBtn *sure_btn;
    QSpacerItem *horizontalSpacer_2;
    ClickedBtn *cancel_btn;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *AuthenFriend)
    {
        if (AuthenFriend->objectName().isEmpty())
            AuthenFriend->setObjectName(QString::fromUtf8("AuthenFriend"));
        AuthenFriend->resize(361, 621);
        verticalLayout = new QVBoxLayout(AuthenFriend);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(AuthenFriend);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(0, 500));
        scrollArea->setWidgetResizable(true);
        scrollcontent = new QWidget();
        scrollcontent->setObjectName(QString::fromUtf8("scrollcontent"));
        scrollcontent->setGeometry(QRect(0, 0, 342, 484));
        verticalLayout_2 = new QVBoxLayout(scrollcontent);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, 0, -1);
        apply_label = new QLabel(scrollcontent);
        apply_label->setObjectName(QString::fromUtf8("apply_label"));
        apply_label->setMinimumSize(QSize(0, 25));
        apply_label->setMaximumSize(QSize(16777215, 25));
        apply_label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(apply_label);

        apply_wid = new QWidget(scrollcontent);
        apply_wid->setObjectName(QString::fromUtf8("apply_wid"));
        verticalLayout_3 = new QVBoxLayout(apply_wid);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        line = new QFrame(apply_wid);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        name_edit = new CustomizeEdit(apply_wid);
        name_edit->setObjectName(QString::fromUtf8("name_edit"));
        name_edit->setMinimumSize(QSize(0, 35));
        name_edit->setMaximumSize(QSize(16777215, 35));

        verticalLayout_3->addWidget(name_edit);

        label_2 = new QLabel(apply_wid);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 25));
        label_2->setMaximumSize(QSize(16777215, 25));

        verticalLayout_3->addWidget(label_2);

        back_edit = new CustomizeEdit(apply_wid);
        back_edit->setObjectName(QString::fromUtf8("back_edit"));
        back_edit->setMinimumSize(QSize(0, 35));
        back_edit->setMaximumSize(QSize(16777215, 35));

        verticalLayout_3->addWidget(back_edit);

        label_3 = new QLabel(apply_wid);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 25));
        label_3->setMaximumSize(QSize(16777215, 25));

        verticalLayout_3->addWidget(label_3);

        label_group_wid = new QWidget(apply_wid);
        label_group_wid->setObjectName(QString::fromUtf8("label_group_wid"));
        label_group_wid->setMinimumSize(QSize(0, 50));
        verticalLayout_4 = new QVBoxLayout(label_group_wid);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        gridWidget = new QWidget(label_group_wid);
        gridWidget->setObjectName(QString::fromUtf8("gridWidget"));
        gridWidget->setMinimumSize(QSize(0, 40));
        gridWidget->setMaximumSize(QSize(16777215, 40));
        label_edit = new CustomizeEdit(gridWidget);
        label_edit->setObjectName(QString::fromUtf8("label_edit"));
        label_edit->setGeometry(QRect(2, 2, 108, 35));
        label_edit->setMinimumSize(QSize(0, 35));
        label_edit->setMaximumSize(QSize(16777215, 35));

        verticalLayout_4->addWidget(gridWidget);

        input_tip_wid = new QWidget(label_group_wid);
        input_tip_wid->setObjectName(QString::fromUtf8("input_tip_wid"));
        input_tip_wid->setMinimumSize(QSize(0, 35));
        input_tip_wid->setMaximumSize(QSize(16777215, 35));
        verticalLayout_5 = new QVBoxLayout(input_tip_wid);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        tip_label = new ClickedOnceLabel(input_tip_wid);
        tip_label->setObjectName(QString::fromUtf8("tip_label"));

        verticalLayout_5->addWidget(tip_label);


        verticalLayout_4->addWidget(input_tip_wid);


        verticalLayout_3->addWidget(label_group_wid);

        widget = new QWidget(apply_wid);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 60));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(7);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_list = new QWidget(widget);
        label_list->setObjectName(QString::fromUtf8("label_list"));
        label_list->setMinimumSize(QSize(287, 50));
        label_list->setMaximumSize(QSize(287, 16777215));

        horizontalLayout_2->addWidget(label_list);

        more_label_wid = new QWidget(widget);
        more_label_wid->setObjectName(QString::fromUtf8("more_label_wid"));
        more_label_wid->setMinimumSize(QSize(30, 0));
        more_label_wid->setMaximumSize(QSize(30, 16777215));
        verticalLayout_6 = new QVBoxLayout(more_label_wid);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(2, 2, 2, 2);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        more_label = new ClickedOnceLabel(more_label_wid);
        more_label->setObjectName(QString::fromUtf8("more_label"));
        more_label->setMinimumSize(QSize(25, 25));
        more_label->setMaximumSize(QSize(25, 25));
        more_label->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(more_label);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);


        horizontalLayout_2->addWidget(more_label_wid);


        verticalLayout_3->addWidget(widget);


        verticalLayout_2->addWidget(apply_wid);

        scrollArea->setWidget(scrollcontent);

        verticalLayout->addWidget(scrollArea);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        apply_sure_wid = new QWidget(AuthenFriend);
        apply_sure_wid->setObjectName(QString::fromUtf8("apply_sure_wid"));
        apply_sure_wid->setMinimumSize(QSize(0, 50));
        horizontalLayout = new QHBoxLayout(apply_sure_wid);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(37, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sure_btn = new ClickedBtn(apply_sure_wid);
        sure_btn->setObjectName(QString::fromUtf8("sure_btn"));
        sure_btn->setMinimumSize(QSize(100, 30));

        horizontalLayout->addWidget(sure_btn);

        horizontalSpacer_2 = new QSpacerItem(36, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        cancel_btn = new ClickedBtn(apply_sure_wid);
        cancel_btn->setObjectName(QString::fromUtf8("cancel_btn"));
        cancel_btn->setMinimumSize(QSize(100, 30));

        horizontalLayout->addWidget(cancel_btn);

        horizontalSpacer_3 = new QSpacerItem(37, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(apply_sure_wid);

        verticalSpacer_2 = new QSpacerItem(20, 19, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(AuthenFriend);

        QMetaObject::connectSlotsByName(AuthenFriend);
    } // setupUi

    void retranslateUi(QDialog *AuthenFriend)
    {
        AuthenFriend->setWindowTitle(QApplication::translate("AuthenFriend", "Dialog", nullptr));
        apply_label->setText(QApplication::translate("AuthenFriend", "\350\257\267\346\261\202\346\267\273\345\212\240\345\245\275\345\217\213", nullptr));
        label_2->setText(QApplication::translate("AuthenFriend", "\345\244\207\346\263\250\345\220\215\357\274\232", nullptr));
        label_3->setText(QApplication::translate("AuthenFriend", "\346\240\207\347\255\276", nullptr));
        tip_label->setText(QApplication::translate("AuthenFriend", "TextLabel", nullptr));
        more_label->setText(QString());
        sure_btn->setText(QApplication::translate("AuthenFriend", "\347\241\256\350\256\244", nullptr));
        cancel_btn->setText(QApplication::translate("AuthenFriend", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthenFriend: public Ui_AuthenFriend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHENFRIEND_H
