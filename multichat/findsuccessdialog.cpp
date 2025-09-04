#include "findsuccessdialog.h"
#include "ui_findsuccessdialog.h"
#include <QDir>
#include "applyfriend.h"
#include <memory>

FindSuccessDialog::FindSuccessDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindSuccessDialog),
    _parent(parent)
{
    ui->setupUi(this);
    // 设置对话框标题
    setWindowTitle("添加");
    // 隐藏对话框标题栏
    setWindowFlags(windowFlags() | Qt::FramelessWindowHint);
    this->setObjectName("FindSuccessDlg");
    // 获取当前应用程序的路径
    QString app_path = QCoreApplication::applicationDirPath();
    QString pix_path = QDir::toNativeSeparators(app_path + QDir::separator() + "static"+ QDir::separator() + "Qin.png");
    QPixmap head_pix(pix_path);
    head_pix = head_pix.scaled(ui->head_label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation); // 缩放
    ui->head_label->setPixmap(head_pix);
    ui->add_friend_btn->setState("normal", "hover", "press");
    this->setModal(true);
}

FindSuccessDialog::~FindSuccessDialog()
{
    delete ui;
}

void FindSuccessDialog::SetSearchInfo(std::shared_ptr<SearchInfo> si)
{
    ui->name_label->setText(si->_name);
    _si = si;
}

void FindSuccessDialog::on_add_friend_btn_clicked()
{
    this->hide();
    //弹出加好友界面
    auto applyFriend = new ApplyFriend(_parent);
    applyFriend->setSearchInfo(_si);
    applyFriend->setModal(true);
    applyFriend->show();
}
