#ifndef CHATPAGE_H
#define CHATPAGE_H

#include <QWidget>

namespace Ui {
class ChatPage;
}

class ChatPage : public QWidget
{
    Q_OBJECT

public:
    explicit ChatPage(QWidget *parent = nullptr);
    ~ChatPage();

protected:
    void paintEvent(QPaintEvent *event); // 重写, 子类可以访问且保持代码的可维护性

//private slots:
//    void on_send_btn_clicked();

private slots:
    void on_send_btn_clicked();

private:
    Ui::ChatPage *ui;
};

#endif // CHATPAGE_H
