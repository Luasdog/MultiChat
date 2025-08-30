#include "chatdialog.h"
#include "ui_chatdialog.h"
#include <QAction>

ChatDialog::ChatDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChatDialog)
{
    ui->setupUi(this);

    ui->add_btn->setState("normal","hover","press");
    ui->search_edit->setMaxLength(15); // 设置搜索框输入最大长度

    QAction *searchAction = new QAction(ui->search_edit);
    searchAction->setIcon(QIcon(":/resource/search.png"));
    ui->search_edit->addAction(searchAction,QLineEdit::LeadingPosition);
    ui->search_edit->setPlaceholderText(QStringLiteral("搜索"));

    // 创建一个清除动作并设置图标
    QAction *clearAction = new QAction(ui->search_edit);
    clearAction->setIcon(QIcon(":/resource/close_transparent.png"));
    // 初始时不显示清除图标
    // 将清除动作添加到LineEdit的末尾位置
    ui->search_edit->addAction(clearAction, QLineEdit::TrailingPosition);

    // 当需要显示清除图标时，更改为实际的清除图标
    connect(ui->search_edit, &QLineEdit::textChanged, [clearAction](const QString &text) {
       if (!text.isEmpty()) {
           clearAction->setIcon(QIcon(":/resource/close_search.png"));
       } else {
           clearAction->setIcon(QIcon(":/resource/close_transparent.png")); // 文本为空时，切换回透明图标
       }
    });

    // 连接清除动作的触发信号到槽函数，用于清除文本
    connect(clearAction, &QAction::triggered, [this, clearAction]() {
       ui->search_edit->clear();
       clearAction->setIcon(QIcon(":/resource/close_transparent.png")); // 清除文本后，切换回透明图标
       ui->search_edit->clearFocus();
    });

}

ChatDialog::~ChatDialog()
{
    delete ui;
}
