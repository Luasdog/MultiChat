#include "chatview.h"

#include <QScrollBar>
#include <QVBoxLayout>
#include <QEvent>
#include <QDebug>

#include <QTimer>
#include <QStyleOption>
#include <QPainter>

ChatView::ChatView(QWidget *parent)
    : QWidget(parent)
    , isAppended(false)
{
    QVBoxLayout *pMainLayout = new QVBoxLayout(); // 垂直布局
    this->setLayout(pMainLayout); // 为当前ChatView设置主布局
    pMainLayout->setMargin(0);

    m_pScrollArea = new QScrollArea(); // 滚动区域
    m_pScrollArea->setObjectName("chat_area");
    pMainLayout->addWidget(m_pScrollArea); // 将滚动区域添加到主布局

    // 为内容容器设置垂直布局
    QWidget *w = new QWidget(this);
    w->setObjectName("chat_bg");
    w->setAutoFillBackground(true); // 自动填充背景

    QVBoxLayout *pHLayout_1 = new QVBoxLayout();
    // 添加一个高优先级（拉伸因子 100000）的空白部件，将后续添加的聊天消息 "顶" 到容器顶部，实现类似微信 / QQ 的消息从顶部开始排列的效果
    pHLayout_1->addWidget(new QWidget(), 100000);
    w->setLayout(pHLayout_1);
    m_pScrollArea->setWidget(w);    //应该时在QSCrollArea构造后执行 才对

    m_pScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);     // 隐藏垂直滚动条（默认不显示，需要时再触发显示）
    QScrollBar *pVScrollBar = m_pScrollArea->verticalScrollBar(); // 获取滚动区域的垂直滚动条
    connect(pVScrollBar, &QScrollBar::rangeChanged, this, &ChatView::onVScrollBarMoved); // 滚动条可见区域变化，触发槽函数

    //把垂直ScrollBar放到上边 而不是原来的并排
    QHBoxLayout *pHLayout_2 = new QHBoxLayout();
    pHLayout_2->addWidget(pVScrollBar, 0, Qt::AlignRight);
    pHLayout_2->setMargin(0);
    m_pScrollArea->setLayout(pHLayout_2);
    pVScrollBar->setHidden(true); // 初始隐藏滚动条

    m_pScrollArea->setWidgetResizable(true); // 允许内容容器自动调整大小（适应滚动区域）
    m_pScrollArea->installEventFilter(this); // 为滚动区域安装事件过滤器（用于自定义事件处理，如鼠标悬停显示滚动条）
    initStyleSheet(); // 初始化样式表（设置界面美观度，如背景色、滚动条样式等）
}

void ChatView::appendChatItem(QWidget *item)
{
   QVBoxLayout *vl = qobject_cast<QVBoxLayout *>(m_pScrollArea->widget()->layout());
   qDebug() << "vl->count() is " << vl->count();
   vl->insertWidget(vl->count()-1, item); // 在布局的倒数第二个位置插入新的聊天项 item
   // tip: 在构造函数中，布局的最后一个位置添加了一个高优先级的空白部件（用于将消息顶到顶部），因此新消息需要插入到空白部件之前，才能按顺序显示在聊天区域中。
   isAppended = true;
}

void ChatView::prependChatItem(QWidget *item)
{

}

void ChatView::insertChatItem(QWidget *before, QWidget *item)
{

}

void ChatView::removeAllItem()
{
    QVBoxLayout *layout = qobject_cast<QVBoxLayout *>(m_pScrollArea->widget()->layout());

    int count = layout->count();

    for (int i = 0; i < count - 1; ++i) {
        QLayoutItem *item = layout->takeAt(0); // 始终从第一个控件开始删除
        if (item) {
            if (QWidget *widget = item->widget()) {
                delete widget;
            }
            delete item;
        }
    }
}

bool ChatView::eventFilter(QObject *o, QEvent *e)
{
    /*if(e->type() == QEvent::Resize && o == )
    {

    }
    else */if(e->type() == QEvent::Enter && o == m_pScrollArea)
    {
        m_pScrollArea->verticalScrollBar()->setHidden(m_pScrollArea->verticalScrollBar()->maximum() == 0);
    }
    else if(e->type() == QEvent::Leave && o == m_pScrollArea)
    {
         m_pScrollArea->verticalScrollBar()->setHidden(true);
    }
    return QWidget::eventFilter(o, e);
}

void ChatView::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}


void ChatView::onVScrollBarMoved(int min, int max)
{
    if(isAppended) //添加item可能调用多次
    {
        QScrollBar *pVScrollBar = m_pScrollArea->verticalScrollBar();
        pVScrollBar->setSliderPosition(pVScrollBar->maximum());
        //500毫秒内可能调用多次
        QTimer::singleShot(500, [this]()
        {
            isAppended = false;
        });
    }
}

void ChatView::initStyleSheet()
{
//    QScrollBar *scrollBar = m_pScrollArea->verticalScrollBar();
//    scrollBar->setStyleSheet("QScrollBar{background:transparent;}"
//                             "QScrollBar:vertical{background:transparent;width:8px;}"
//                             "QScrollBar::handle:vertical{background:red; border-radius:4px;min-height:20px;}"
//                             "QScrollBar::add-line:vertical{height:0px}"
//                             "QScrollBar::sub-line:vertical{height:0px}"
//                             "QScrollBar::add-page:vertical {background:transparent;}"
//                             "QScrollBar::sub-page:vertical {background:transparent;}");
}
