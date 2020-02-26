//
//  ARVncEnumerates.h
//  RTVncEngine_Mac
//
//  Created by zjq on 2019/10/22.
//  Copyright © 2019 MaoZongWu. All rights reserved.
//

#ifndef ARVncEnumerates_h
#define ARVncEnumerates_h

typedef NS_ENUM(NSInteger,ARVncCode) {
    ARVnc_OK = 0,                // 正常
    ARVnc_UNKNOW = 1,          // 未知错误
    ARVnc_EXCEPTION = 2,        // SDK调用异常
    ARVnc_EXP_UNINIT = 3,        // SDK未初始化
    ARVnc_EXP_PARAMS_INVALIDE = 4,    // 参数非法
    ARVnc_EXP_NO_NETWORK = 5,        // 没有网络链接
    ARVnc_EXP_NOT_FOUND_CAMERA = 6,        // 没有找到摄像头设备
    ARVnc_EXP_NO_CAMERA_PERMISSION = 7,    // 没有打开摄像头权限
    ARVnc_EXP_NO_AUDIO_PERMISSION = 8,        // 没有音频录音权限
    ARVnc_EXP_NOT_SUPPORT_WEBRTC = 9,        // 浏览器不支持原生的webrtc
    
    
    ARVnc_NET_ERR = 100,            // 网络错误
    ARVnc_NET_DISSCONNECT = 101,    // 网络断开
    ARVnc_LIVE_ERR    = 102,            // 直播出错
    ARVnc_EXP_ERR = 103,            // 异常错误
    ARVnc_EXP_Unauthorized = 104,    // 服务未授权(仅可能出现在私有云项目)
    
    ARVnc_BAD_REQ = 201,            // 服务不支持的错误请求
    ARVnc_AUTH_FAIL = 202,            // 认证失败
    ARVnc_NO_USER = 203,            // 此开发者信息不存在
    ARVnc_SVR_ERR = 204,          // 服务器内部错误
    ARVnc_SQL_ERR = 205,            // 服务器内部数据库错误
    ARVnc_ARREARS = 206,            // 账号欠费
    ARVnc_LOCKED = 207,            // 账号被锁定
    ARVnc_SERVER_NOT_OPEN = 208,  // 服务未开通
    ARVnc_ALLOC_NO_RES = 209,     // 没有服务器资源
    ARVnc_SERVER_NOT_SURPPORT = 210,    //不支持的服务
    ARVnc_FORCE_EXIT = 211,               // 强制离开
    ARVnc_AUTH_TIMEOUT = 212,           // 验证超时
    ARVnc_NEED_VERTIFY_USERTOKEN = 213, // 需要验证userToken
    ARVnc_WEB_DOMIAN_ERROR = 214,       // Web应用的域名验证失败
    ARVnc_IOS_BUNDLE_ID_ERROR = 215,    // iOS应用的BundleId验证失败
    ARVnc_ANDROID_PKG_NAME_ERROR = 216, // Android应用的包名验证失败
    
    ARVnc_PEER_BUSY = 800,  // 对方正忙
    ARVnc_OFFLINE,          // 对方不在线
    ARVnc_NOT_SELF,         // 不能呼叫自己
    ARVnc_EXP_OFFLINE,      // 通话中对方意外掉线
    ARVnc_EXP_EXIT,         // 对方异常导致(如：重复登录帐号将此前的帐号踢出)
    ARVnc_TIMEOUT,          // 呼叫超时(45秒)
    ARVnc_NOT_SURPPORT,     // 不支持
    ARVnc_REJECT,           // 对方拒绝
    ARVnc_NOT_JONIN,        // 本地未登陆
    ARVnc_LOCAL_BUSY,       // 本地已经有一个呼叫了
    ARVnc_ERR_PASSWORD,     // 密码不匹配
    ARVnc_ERR_PARAM,        // 参数错误(是空)
    ARVnc_SYSTEM_UNKNOW,    // 未知错误
};



// 视频填充模式
typedef NS_ENUM(NSInteger, ARVideoRenderMode){
    //表示按比例缩放并且填满view，意味着图片可能超出view，可能被裁减掉
    ARVideoRenderScaleAspectFill = 1,
    //表示按比例缩放并且图片要完全显示出来，意味着view可能会留有空白
    ARVideoRenderScaleAspectFit,
    //表示通过缩放来填满view，也就是说图片会变形
    ARVideoRenderScaleToFill
};

typedef NS_ENUM(NSUInteger, ARLogFilter ) {
   ARLogFilterOff = 0,
   ARLogFilterInfo,
   ARLogFilterWarning,
   ARLogFilterError,
};


typedef NS_ENUM(NSInteger,ARTVMode) {
    ARTVNomalMode = 0,   // 常规模式
    ARTVGameMode,        // 游戏模式
    ARTVCustomMode       // 自定义模式
};

typedef NS_ENUM(NSInteger,ARCousorType){
    AR_CT_NONE = 0,
    AR_CT_ARROW,   //箭头
    AR_CT_IBEAM,   //输入状态
    AR_CT_WAIT,
    AR_CT_CROSS,
    AR_CT_UPARROW,
    AR_CT_SIZE,  /* OBSOLETE: use IDC_SIZEALL */
    AR_CT_ICON,  /* OBSOLETE: use IDC_ARROW */
    AR_CT_SIZENWSE,
    AR_CT_SIZENESW,
    AR_CT_SIZEWE,
    AR_CT_SIZENS,
    AR_CT_SIZEALL,
    AR_CT_NO, /*not in win3.1 */
    AR_CT_HAND,  // 举手状态
    AR_CT_APPSTARTING, /*not in win3.1 */
    AR_CT_HELP,
    AR_CT_PIN,
    AR_CT_PERSON,
};
typedef NS_ENUM(NSInteger,ARClickType){
    AR_CT_L_UP = 0,
    AR_CT_L_DOWN,
    AR_CT_L_DB_CLICK,
    AR_CT_R_UP,
    AR_CT_R_DOWN,
    AR_CT_R_DB_CLICK,
    AR_CT_WHEEL_UP,
    AR_CT_WHEEL_DOWN,
    AR_CT_KEY_UP,      // 键盘up
    AR_CT_KEY_DOWN     // 键盘down
};

#endif /* ARVncEnumerates_h */
