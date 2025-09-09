#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "logindialog.h"
#include "registerdialog.h"
#include "resetdialog.h"
#include "chatdialog.h"

/******************************************************************************
 *
 * @file       mainwindow.h
 * @brief      主窗口
 *
 * @author     luas_dog
 * @date       2025/07/03
 * @history
 *****************************************************************************/

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void SlotSwitchReg();
    void SlotSwitchLogin();
    void SlotSwitchReset();
    void SlotSwitchLogin2();
    void SlotSwitchChat();

private:
    Ui::MainWindow *ui;
    LoginDialog * _login_dialog;
    RegisterDialog * _reg_dialog;
    ResetDialog* _reset_dialog;
    ChatDialog* _chat_dialog;

};
#endif // MAINWINDOW_H
