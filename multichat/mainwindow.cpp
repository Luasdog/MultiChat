#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _login_dialog = new LoginDialog(this); //为了防止内存泄露，添加this设置成主窗口的子类
    _login_dialog->setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint); //删除多余窗口
    //带来的问题是窗口会独立弹开
    setCentralWidget(_login_dialog);
    //_login_dialog->show();

    // 创建和注册消息连接
    connect(_login_dialog, &LoginDialog::switchRegister, this, & MainWindow::SlotSwitchReg);

    //连接登录界面忘记密码信号
    connect(_login_dialog, &LoginDialog::switchReset, this, &MainWindow::SlotSwitchReset);

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
    // 修改成动态初始化
    _reg_dialog = new RegisterDialog(this); //为了防止内存泄露，添加this设置成主窗口的子类

    _reg_dialog->setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint);

    //连接注册界面返回登录信号
    connect(_reg_dialog, &RegisterDialog::sigSwitchLogin, this, &MainWindow::SlotSwitchLogin);

    setCentralWidget(_reg_dialog);
    _login_dialog->hide();
    _reg_dialog->show();
}

void MainWindow::SlotSwitchLogin()
{
    //创建一个CentralWidget, 并将其设置为MainWindow的中心部件
    _login_dialog = new LoginDialog(this);
    _login_dialog->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    setCentralWidget(_login_dialog);

    _reg_dialog->hide();
    _login_dialog->show();
    //连接登录界面注册信号
    connect(_login_dialog, &LoginDialog::switchRegister, this, &MainWindow::SlotSwitchReg);
}

void MainWindow::SlotSwitchReset()
{
    //创建一个CentralWidget, 并将其设置为MainWindow的中心部件
    _reset_dialog = new ResetDialog(this);
    _reset_dialog->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    setCentralWidget(_reset_dialog);

    _login_dialog->hide();
    _reset_dialog->show();
    //注册返回登录信号和槽函数
    connect(_reset_dialog, &ResetDialog::switchLogin, this, &MainWindow::SlotSwitchLogin2);
}

void MainWindow::SlotSwitchLogin2()
{
    //创建一个CentralWidget, 并将其设置为MainWindow的中心部件
    _login_dialog = new LoginDialog(this);
    _login_dialog->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    setCentralWidget(_login_dialog);

    _reset_dialog->hide();
    _login_dialog->show();
    //连接登录界面忘记密码信号
    connect(_login_dialog, &LoginDialog::switchReset, this, &MainWindow::SlotSwitchReset);
    //连接登录界面注册信号
    connect(_login_dialog, &LoginDialog::switchRegister, this, &MainWindow::SlotSwitchReg);
}

