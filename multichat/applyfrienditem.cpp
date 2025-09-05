#include "applyfrienditem.h"
#include "ui_applyfrienditem.h"

ApplyFriendItem::ApplyFriendItem(QWidget *parent) :
    ListItemBase(parent),
    ui(new Ui::ApplyFriendItem)
{
    ui->setupUi(this);
    setItemType(ListItemType::APPLY_FRIEND_ITEM);
    ui->addBtn->setState("normal","hover", "press");
    ui->addBtn->hide();
    connect(ui->addBtn, &ClickedBtn::clicked,  [this](){
        emit this->sig_auth_friend(_apply_info);
    });
}

ApplyFriendItem::~ApplyFriendItem()
{
    delete ui;
}

void ApplyFriendItem::setInfo(std::shared_ptr<ApplyInfo> apply_info)
{
    _apply_info = apply_info;
    // 加载图片
    QPixmap pixmap(_apply_info->_icon);

    // 设置图片自动缩放
    ui->icon_label->setPixmap(pixmap.scaled(ui->icon_label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    ui->icon_label->setScaledContents(true);

    ui->user_name_label->setText(_apply_info->_name);
    ui->user_chat_label->setText(_apply_info->_desc);
}

void ApplyFriendItem::showAddBtn(bool bshow)
{
    if (bshow) {
        ui->addBtn->show();
        ui->already_add_label->hide();
        _added = false;
    }
    else {
        ui->addBtn->hide();
        ui->already_add_label->show();
        _added = true;
    }
}

int ApplyFriendItem::getUid() {
    return _apply_info->_uid;
}


