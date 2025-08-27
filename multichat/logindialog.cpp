#include "logindialog.h"
#include "ui_logindialog.h"
#include <QDebug>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    connect(ui->reg_pushButton, &QPushButton::clicked, this, &LoginDialog::switchRegister);

    ui->forget_label->setState("normal","hover","","selected","selected_hover","");
    connect(ui->forget_label, &ClickedLabel::clicked, this, &LoginDialog::slot_forget_pwd);
}

LoginDialog::~LoginDialog()
{
    qDebug() << "destruct LoginDialog";
    delete ui;
}

void LoginDialog::slot_forget_pwd()
{
    qDebug() << "slot forget pwd";
    emit switchReset();
}
