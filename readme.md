# 总体说明

C++全栈实时聊天项目

![Servers](/Pictures/Servers.jpg)

GateServer为网关服务，主要应对客户端的连接和注册请求，因为服务器是是分布式，所以GateServer收到用户连接请求后会查询状态服务选择一个负载较小的Server地址给客户端，客户端拿着这个地址直接和Server通信建立长连接。

当用户注册时会发送给GateServer, GateServer调用VarifyServer验证注册的合理性并发送验证码给客户端，客户端拿着这个验证码去GateServer注册即可。

StatusServer，ServerA，ServerB都可以直接访问Redis和Mysql服务。

### 各服务器交互关系
1. 客户端 → GateServer：发送注册/登录等HTTP请求
2. GateServer → VerifyServer：gRPC获取验证码（注册/密码重置时）
3. GateServer → StatusServer：gRPC获取负载最低的ChatServer地址（登录成功后）
4. 客户端 → ChatServer：基于返回的地址建立TCP长连接，收发实时消息
5. ChatServer ↔ ChatServer：gRPC转发跨服务器消息
6. ChatServer → StatusServer：上报在线用户数（Redis），更新负载状态

## 客户端

### 技术栈基础
- 界面构建：基于QtWidgets
- 网络通信：QtNetwork（HTTP/TCP）
- 数据处理：QJson（JSON解析）、QSettings（配置文件读取）
- 全局管理：`global.h`定义统一枚举（请求ID、错误码等）、全局变量（网关地址）和工具函数（样式刷新、加密），保证模块交互一致性
- 解耦机制：通过信号与槽（Signal & Slot）分离界面组件与业务逻辑（如按钮点击、消息接收处理）


### 核心功能

#### 1. 用户认证与账户管理
- 登录功能：`LoginDialog`实现，支持邮箱+密码登录，含输入校验（邮箱非空、密码长度6-15位且符合字符规则）
- 注册与密码重置：提供`RegisterDialog`（注册）和`ResetDialog`（密码重置）入口，支持界面切换
- 身份验证：登录成功后获取服务器返回的Token、Uid等凭证，用于后续长连接认证


#### 2. 聊天交互功能
- 实时消息收发：`ChatPage`支持文本消息（预留图片等扩展类型）收发，区分自己（`ChatRole::Self`）和对方（`ChatRole::Other`）的消息气泡（`TextBubble`、`PictureBubble`）
- 聊天记录展示：`ChatView`（带滚动区域的自定义组件）展示历史记录，支持自动滚动到最新消息
- 聊天对象切换：`ChatDialog`中通过`chat_user_list`（聊天列表）选择好友切换窗口，加载对应记录


#### 3. 联系人与好友管理
- 联系人展示：`ContactUserList`展示好友列表，支持切换到联系人模式（`ChatUIMode::ContactMode`）
- 好友搜索：通过搜索框（`search_edit`）输入关键词，在`search_list`中展示结果（`SearchMode`）
- 好友申请处理：支持发送申请（`ID_ADD_FRIEND_REQ`）、接收通知（`ID_NOTIFY_ADD_FRIEND_REQ`）、处理认证（`ID_AUTH_FRIEND_REQ`）及回复（`ID_AUTH_FRIEND_RSP`）
- 添加好友入口：`AddUserItem`（继承自`ListItemBase`，固定尺寸）作为交互组件


#### 4. 界面交互与样式
- 多模式切换：支持聊天、联系人、搜索模式切换，通过`stackedWidget`管理页面
- 样式统一：QSS（`stylesheet.qss`）定义全局样式，`repolish`函数刷新控件状态（如hover/press）
- 自定义组件：封装`ChatUserWid`（聊天用户项）、`ConUserItem`（联系人项）、`ChatItemBase`（聊天项基类）等，统一风格


### 与后端的交互方式

#### 1. HTTP短连接（`HttpMgr`）
- 用途：处理非实时请求（登录、注册、密码重置、验证码获取等）
- 通信流程：
  - 从`config.ini`读取网关地址（`GateServer/host`和`port`），拼接为`gate_url_prefix`（如`http://host:port`）
  - 发送POST请求（如`/user_login`），携带JSON参数（邮箱、加密密码等）
  - 通过`ReqId`标识请求类型（如`ID_LOGIN_USER`登录、`ID_REG_USER`注册），后端返回结果后由`HttpMgr`分发处理
- 数据加密：敏感数据（如密码）通过`xorString`异或加密传输


#### 2. TCP长连接（`TcpMgr`）
- 用途：处理实时请求（聊天消息、好友申请通知、在线状态同步等）
- 通信流程：
  - 登录成功后，通过HTTP获取聊天服务器`Host`和`Port`，建立TCP连接
  - 连接后发送携带Uid和Token的认证请求（`ID_CHAT_LOGIN`），完成鉴权
  - 实时消息通过`ReqId`标识类型（如`ID_TEXT_CHAT_MSG_REQ`发送消息、`ID_NOTIFY_TEXT_CHAT_MSG_REQ`接收通知），JSON格式传输
- 消息处理：`TcpMgr`接收消息后通过信号（如`sig_text_chat_msg`文本消息、`sig_friend_apply`好友申请）通知UI更新

## 后端

### 服务器分工及原因
- 非实时业务：由网关服务器（GateServer）处理
- 实时业务：由聊天服务器（ChatServer）处理
- 状态与负载：由状态服务器（StatusServer）管理
- 验证码相关：由验证服务器（VerifyServer）处理  
**分工原因**：解耦业务逻辑、提高扩展性（如ChatServer可多实例部署）、优化性能（按业务类型分配资源）


### 各服务器详情

#### 1. GateServer（网关服务器）
- 核心功能：客户端HTTP请求入口，处理非实时业务（注册、登录、验证码等），转发请求到对应服务
- 重要类及逻辑：
  - `CServer`：基于Boost.Asio的TCP服务器，监听8080端口，异步接收连接，为每个连接创建`HttpConnection`
  - `HttpConnection`：处理单个HTTP连接，解析请求、委托业务逻辑、返回响应，短连接模式
  - `LogicSystem`：业务分发中心，注册URL与处理函数映射（如`/user_login`对应登录逻辑），与MySQL/Redis交互
  - `MysqlMgr/RedisMgr`：数据库/缓存管理单例，封装用户信息CRUD、验证码缓存等操作
  - `VerifyGrpcClient`：gRPC客户端，调用VerifyServer获取验证码并缓存到Redis


#### 2. ChatServer（聊天服务器）
- 核心功能：处理TCP长连接，负责实时消息收发、好友关系管理，支持多实例部署
- 重要类及逻辑：
  - `CServer`：基于Boost.Asio的TCP服务器，监听8090/8091端口，管理客户端连接，为每个连接创建`CSession`
  - `CSession`：维护单个客户端长连接，负责消息收发、解析，将消息放入`LogicSystem`队列
  - `LogicSystem`：业务处理中心，基于“生产者-消费者”模型，注册消息回调（如文本消息、好友申请处理），跨服务器消息通过gRPC转发
  - `UserMgr`：管理在线用户与会话映射，记录用户所在服务器实例
  - `ChatServiceImpl`：gRPC服务实现，供其他ChatServer调用（跨服务器消息转发）


#### 3. VerifyServer（验证服务器）
- 核心功能：生成、发送（邮件/短信）和验证验证码，确保注册/密码重置安全性
- 重要类及逻辑：
  - `VerifyService`（gRPC服务）：实现`GetVerifyCode`接口，生成随机验证码，发送后缓存到Redis（设置过期时间），供GateServer调用


#### 4. StatusServer（状态服务器）
- 核心功能：管理ChatServer集群状态（在线用户数），实现负载均衡，维护用户登录Token
- 重要类及逻辑：
  - `StatusServiceImpl`（gRPC服务）：实现`GetChatServer`接口，从Redis读取各ChatServer负载，返回最低负载服务器地址；管理用户Token验证
  - `ChatServer`（结构体）：封装服务器信息（主机、端口、负载等），用于负载均衡计算


### gRPC
- 定义：Google开源的高性能RPC框架，支持跨服务远程调用，简化跨服务通信
- 特点：
  - 基于HTTP/2：支持双向流、多路复用、头部压缩
  - 使用Protocol Buffers（protobuf）：高效序列化（二进制），跨语言支持
  - 跨语言：客户端与服务器可使用不同语言（C++、Java等）
- 核心流程：
  1. 定义服务和消息类型（`.proto`文件）
  2. 生成代码：通过protoc和gRPC插件生成客户端桩（stub）和服务器骨架
  3. 实现服务器端：实现`.proto`定义的接口，启动gRPC服务器
- 通信过程：客户端序列化请求→HTTP/2传输→服务器反序列化处理→返回序列化结果→客户端反序列化获取结果