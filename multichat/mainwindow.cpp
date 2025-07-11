#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _login_dialog = new LoginDialog(this); //为了防止内存泄露，添加this设置成主窗口的子类
    //带来的问题是窗口会独立弹开
    setCentralWidget(_login_dialog);
    //_login_dialog->show();

    // 创建和注册消息连接
    connect(_login_dialog, &LoginDialog::switchRegister, this, & MainWindow::SlotSwitchReg);
    _reg_dialog = new RegisterDialog(this); //为了防止内存泄露，添加this设置成主窗口的子类

    _login_dialog->setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint); //删除多余窗口
    _reg_dialog->setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint);
    _reg_dialog->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
//    if (_login_dialog) {
//        delete  _login_dialog;
//        _login_dialog = nullptr;
//    }

//    if (_reg_dialog) {
//        delete _reg_dialog;
//        _reg_dialog = nullptr;
//    }
}

void MainWindow::SlotSwitchReg()
{
    setCentralWidget(_reg_dialog);
    _login_dialog->hide();
    _reg_dialog->show();
}

