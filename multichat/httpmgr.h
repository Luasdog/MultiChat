#ifndef HTTPMGR_H
#define HTTPMGR_H
#include "singleton.h"
#include <QString>
#include <QUrl>
#include <QObject>
#include <QNetworkAccessManager>
#include <QJsonObject>
#include <QJsonDocument>

// CRTP
class HttpMgr : public QObject, public Singleton<HttpMgr>,
        public std::enable_shared_from_this<HttpMgr>
{
    Q_OBJECT
public:
    ~HttpMgr(); //单例中的智能指针会调用此类的析构
    void postHttpReq(QUrl url,QJsonObject json, ReqId req_id, Modules mod);
private:
    friend class Singleton<HttpMgr>; //声明成友元即可调用私有的构造函数
    HttpMgr(); //单例的构造函数不能公有
    QNetworkAccessManager _manager;

private slots:
    void slot_http_finish(ReqId id, QString res, ErrorCodes err, Modules mod);
signals:
    void sig_http_finish(ReqId id, QString res, ErrorCodes err, Modules mod);
    void sig_reg_mod_finish(ReqId id, QString res, ErrorCodes err);
};

#endif // HTTPMGR_H
