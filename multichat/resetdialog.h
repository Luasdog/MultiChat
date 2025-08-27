#ifndef RESETDIALOG_H
#define RESETDIALOG_H

#include <QDialog>
#include "global.h"

namespace Ui {
class ResetDialog;
}

class ResetDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ResetDialog(QWidget *parent = nullptr);
    ~ResetDialog();

private:
    bool checkUserValid();
    bool checkPassValid();
    void showTip(QString str, bool b_ok);
    bool checkEmailValid();
    bool checkVerifyValid();
    void addTipErr(TipErr te, QString tips);
    void delTipErr(TipErr te);
    void initHandlers();
    Ui::ResetDialog *ui;
    QMap<TipErr, QString> _tip_errs;
    QMap<ReqId, std::function<void(const QJsonObject&)>> _handlers;

private slots:
    void on_return_btn_clicked();
    void on_getcode_btn_clicked();

    void slot_reset_mod_finish(ReqId id, QString res, ErrorCodes err);
    void on_confirm_btn_clicked();

signals:
    void switchLogin();
};

#endif // RESETDIALOG_H
