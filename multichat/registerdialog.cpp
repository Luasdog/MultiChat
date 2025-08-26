#include "registerdialog.h"
#include "ui_registerdialog.h"
#include "global.h"
#include "httpmgr.h"

RegisterDialog::RegisterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);
    ui->passwd_lineEdit->setEchoMode(QLineEdit::Password); //隐藏输入的密码
    ui->confirm_lineEdit->setEchoMode(QLineEdit::Password); //隐藏输入的确认密码

    ui->err_tip->setProperty("state", "normal");
    repolish(ui->err_tip);

    connect(HttpMgr::GetInstance().get(), &HttpMgr::sig_reg_mod_finish,
            this, &RegisterDialog::slot_reg_mod_finish);

    initHttpHandlers();
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}

void RegisterDialog::on_getcode_btn_clicked()
{
    auto email = ui->email_lineEdit->text();
    QRegularExpression regex(R"((\w+)(\.|_)?(\w*)@(\w+)(\.(\w+))+)"); //正则表达式 邮箱
    bool match = regex.match(email).hasMatch();
    if (match) {
        //发送http验证码
        QJsonObject json_obj;
        json_obj["email"] = email;
        HttpMgr::GetInstance()->postHttpReq(QUrl(gate_url_prefix+"/get_verifycode"),
                                            json_obj, ReqId::ID_GET_VERIFY_CODE, Modules::REGISTERMOD);
    } else {
        showTip(tr("邮箱地址不正确"), false);
    }
}

void RegisterDialog::slot_reg_mod_finish(ReqId id, QString res, ErrorCodes err)
{
    if (err != ErrorCodes::SUCCESS) {
        showTip(tr("网络请求错误"), false);
        return;
    }

    //解析Json字符串， res转化为QByteArray
    QJsonDocument jsonDoc = QJsonDocument::fromJson(res.toUtf8());
    if (jsonDoc.isNull()) {
        showTip(tr("json解析失败"), false);
        return;
    }
    //json解析错误
    if (!jsonDoc.isObject()) {
        showTip(tr("json解析失败"), false);
        return;
    }

    _handlers[id](jsonDoc.object());
    return;
}

void RegisterDialog::initHttpHandlers()
{
    //注册获取验证码回包的逻辑
    _handlers.insert(ReqId::ID_GET_VERIFY_CODE, [this](const QJsonObject& jsonObj){
        int error = jsonObj["error"].toInt();
        if (error != ErrorCodes::SUCCESS) {
            showTip(tr("参数错误"), false);
            return;
        }

        auto email = jsonObj["email"].toString();
        showTip(tr("验证码已经发送到邮箱，注意查收"), true);
        qDebug() << "email is " << email;
    });

    //注册注册用户回包逻辑
    _handlers.insert(ReqId::ID_REG_USER, [this](QJsonObject jsonObj){
        int error = jsonObj["error"].toInt();
        if(error != ErrorCodes::SUCCESS){
            showTip(tr("参数错误"),false);
            return;
        }
        auto email = jsonObj["email"].toString();
        showTip(tr("用户注册成功"), true);
        qDebug()<< "user uuid is " << jsonObj["uuid"].toString();
        qDebug()<< "email is " << email ;
    });
}

void RegisterDialog::showTip(QString str, bool b_ok)
{
    if (b_ok) {
        ui->err_tip->setProperty("state", "normal");
    } else {
        ui->err_tip->setProperty("state", "err");
    }
    ui->err_tip->setText(str);
    repolish(ui->err_tip);
}

void RegisterDialog::on_confirm_pushButton_clicked()
{
    if(ui->user_lineEdit->text() == ""){
            showTip(tr("用户名不能为空"), false);
            return;
        }

        if(ui->email_lineEdit->text() == ""){
            showTip(tr("邮箱不能为空"), false);
            return;
        }

        if(ui->passwd_lineEdit->text() == ""){
            showTip(tr("密码不能为空"), false);
            return;
        }

        if(ui->confirm_lineEdit->text() == ""){
            showTip(tr("确认密码不能为空"), false);
            return;
        }

        if(ui->confirm_lineEdit->text() != ui->passwd_lineEdit->text()){
            showTip(tr("密码和确认密码不匹配"), false);
            return;
        }

        if(ui->verify_lineEdit->text() == ""){
            showTip(tr("验证码不能为空"), false);
            return;
        }

        //发送http请求注册用户
        QJsonObject json_obj;
        json_obj["user"] = ui->user_lineEdit->text();
        json_obj["email"] = ui->email_lineEdit->text();
        json_obj["passwd"] = xorString(ui->passwd_lineEdit->text());
        json_obj["confirm"] = xorString(ui->confirm_lineEdit->text());
        json_obj["verifycode"] = ui->verify_lineEdit->text();
        HttpMgr::GetInstance()->postHttpReq(QUrl(gate_url_prefix+"/user_register"),
                     json_obj, ReqId::ID_REG_USER,Modules::REGISTERMOD);
}
