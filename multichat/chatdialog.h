#ifndef CHATDIALOG_H
#define CHATDIALOG_H

#include "global.h"
#include <QDialog>
#include "statewidget.h"

namespace Ui {
class ChatDialog;
}

class ChatDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChatDialog(QWidget *parent = nullptr);
    ~ChatDialog();
    void addChatUserList();

private:
    void showSearch(bool bsearch = false);
    void addLBGroup(StateWidget* lb);
    void clearLabelState(StateWidget* lb);
    Ui::ChatDialog *ui;
    ChatUIMode _mode;
    ChatUIMode _state;
    bool _b_loading;
    QList<StateWidget*> _lb_list;

private slots:
    void slot_loading_chat_user();
    void slot_side_chat();
    void slot_side_contact();
};

#endif // CHATDIALOG_H
