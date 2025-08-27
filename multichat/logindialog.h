#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "global.h"

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

private:
    void initHead();
    Ui::LoginDialog *ui;
    bool checkUserValid();
    bool checkPwdValid();
    bool enableBtn(bool enabled);
    void addTipErr(TipErr te, QString tips);
    void delTipErr(TipErr te);
    QMap<TipErr, QString> _tip_errs;
    void showTip(QString str, bool b_ok);


public slots:
    void slot_forget_pwd();

signals:
    void switchRegister();
    void switchReset();
private slots:
    void on_login_btn_clicked();
};

#endif // LOGINDIALOG_H
