const config_module = require('./config');
const Redis = require("ioredis");

// 创建Redis客户端实例
const RedisCli = new Redis({
  host: config_module.redis_host, // Redis服务器主机名
  port: config_module.redis_port, // Redis服务器端口
  password: config_module.redis_passwd, // Redis服务器密码
});

/**
 * 监听错误信息
 */
RedisCli.on("error", function (err) {
  console.error("RedisCli connect error");
  RedisCli.quit();
});

/**
 * 根据key获取value
 * @param {*} key
 * @returns
 */
async function GetRedis(key) {
    try {
        const result = await RedisCli.get(key);
        if (result === null) {
            console.log("Result:", "<" + result + ">", "This key cannot be find...");
            return null;
        }
        console.log("Result:", "<" + result + ">", "Get key success!");
        return result;
    } catch (error) {
        console.log("GetRedis error is", error);
        return null;
    }
}

/**
 * 根据key查询redis中是否存在key
 * @param {*} key
 * @returns
 */
async function QueryRedis(key) {
    try {
        const result = await RedisCli.exists(key);
        // 判断该值是否为空 如果为空返回null
        if (result === 0) { // === 严格相等（值相等、数据类型相同）运算符
            console.log("Result:", "<" + result + ">", "This key is null...");
            return null;
        }
        console.log("Result:", "<" + result + ">", "With this value!");
        return result;
    } catch (error) {
        console.log("QueryRedis error is", error);
        return null;
    }
}

/**
 * 设置key和value以及过期时间
 * @param {*} key
 * @param {*} value
 * @param {*} exptime
 * @returns
 */
async function SetRedisExpire(key, value, exptime) {
    try {
        // 设置键值
        await RedisCli.set(key, value);
        // 设置过期时间（单位：秒）
        await RedisCli.expire(key, exptime);
        return true;
    } catch (error) {
        console.log("SetRedisExpire error is", error);
        return false;
    }
}

/**
 * 退出函数
 */
function Quit() {
    RedisCli.quit();
}

module.exports = {GetRedis, QueryRedis, Quit, SetRedisExpire};