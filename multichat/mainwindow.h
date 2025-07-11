#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "logindialog.h"
#include "registerdialog.h"

/******************************************************************************
 *
 * @file       mainwindow.h
 * @brief      XXXX Function
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
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void SlotSwitchReg();

private:
    Ui::MainWindow *ui;
    LoginDialog * _login_dialog;
    RegisterDialog * _reg_dialog;
};
#endif // MAINWINDOW_H
