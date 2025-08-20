const grpc = require('@grpc/grpc-js')
const message_proto = require('./proto')
const const_module = require('./const')
const { v4: uuidv4 } = require('uuid')
const emailModule = require('./email')
const redis_module = require('./redis')

async function GetVerifyCode(call, callback) {
    console.log("email is ", call.request.email)
    try {
        let query_res = await redis_module.GetRedis(const_module.code_prefix + call.request.email);
        console.log("query_res is ", query_res);
        let uniqueId = query_res;
        if (query_res == null) {
            uniqueId = uuidv4();
            if (uniqueId.length > 4) {
                uniqueId = uniqueId.substring(0, 4); // 过长截取到4
            }
            let bres = await redis_module.SetRedisExpire(
                const_module.code_prefix + call.request.email,
                uniqueId,
                600
            );
            if (!bres) { // Redis存储失败
                callback(null, { email:  call.request.email,
                    error: const_module.Errors.RedisErr // 返回Redis错误码
                });
                return;
            }
        }

        console.log("uniqueId is ", uniqueId);
        let text_str =  "您的验证码为" + uniqueId + "请在十分钟内完成注册";
        //发送邮件
        let mailOptions = {
            from: "2276846827@qq.com",
            to: call.request.email,
            subject: "验证码",
            text: text_str,
        };

        let send_res = await emailModule.SendMail(mailOptions); // 调用邮件模块发送邮件（await 等待异步操作完成）
        console.log("send res is ", send_res)

        // 优化：添加判断逻辑，根据 send_res 的值判断发送是否成功，并返回对应的错误码
        if (!send_res) { // 邮件发送失败
            callback(null, { email:  call.request.email,
                error: const_module.Errors.EmailSendFailed // 返回邮件错误码
            });
            return;
        }

        callback(null, { email:  call.request.email,
            error: const_module.Errors.Success
        }); 


    } catch (error){
        console.log("catch error is ", error)

        callback(null, { email:  call.request.email,
            error: const_module.Errors.Exception
        }); 
    }

}

function main() {
    var server = new grpc.Server()
    server.addService(message_proto.VerifyService.service, { GetVerifyCode: GetVerifyCode })
    server.bindAsync('0.0.0.0:50051', grpc.ServerCredentials.createInsecure(), () => {
        server.start()
        console.log('grpc server started')        
    })
}

main()