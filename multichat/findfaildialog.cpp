#include "findfaildialog.h"
#include "ui_findfaildialog.h"
#include <QDebug>

FindFailDialog::FindFailDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindFailDialog)
{
    ui->setupUi(this);
    // 设置对话框标题
    setWindowTitle("添加");
    // 隐藏对话框标题栏
    setWindowFlags(windowFlags() | Qt::FramelessWindowHint);
    this->setObjectName("FindFailDialog");
    ui->fail_sure_btn->setState("normal","hover","press");
    // 获取当前应用程序的路径
    this->setModal(true);
}

FindFailDialog::~FindFailDialog()
{
    qDebug() << "Find FailDlg destruct";
    delete ui;
}

void FindFailDialog::on_fail_sure_btn_clicked()
{
    this->hide();
}
