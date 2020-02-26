//
//  ARVncKit.h
//  RTVncEngine_Mac
//
//  Created by zjq on 2019/10/22.
//  Copyright © 2019 MaoZongWu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ARVncKitDelegate.h"
#import "ARNvcObjects.h"

NS_ASSUME_NONNULL_BEGIN

@interface ARVncKit : NSObject

// MARK: - 初始化以及释放

/**
 初始化ARVncKit对象

 @param appId 开发者信息
 @param appToken 应用token
 @param delegate 回调代理
 @return AgoraRtcEngineKit对象
 */
+ (instancetype _Nonnull)sharedEngineWithAppId:(NSString * _Nonnull)appId
                                         token:(NSString * _Nonnull)appToken delegate:(id<ARVncKitDelegate> _Nullable)delegate;

/**
 销毁ARVncKit实例并释放SDK使用的所有资源
 */
+ (void)destroy;

/**
 设置私有化服务

 @param server ip地址或域名
 @param port 端口
 */
- (void)setServerAddress:(NSString*_Nullable)server port:(int)port;



@property (nonatomic, weak) id<ARVncKitDelegate> _Nullable delegate;

// MARK: - 上下线
/**
 上线
 
 @param token 令牌:客户端向自己服务申请获得，参考企业级安全指南
 @param userId 用户Id，确保平台唯一，不能为空
 @param passWord 用户密码
 @param userData 用户信息自定义信息
 */
- (void)turnOnByToken:(NSString* _Nullable)token userId:(NSString *)userId passWord:(NSString*)passWord userData:(NSString*)userData;

/**
 下线
 */
- (void)turnOff;

// MARK: - 本地窗口以及远程窗口

- (void)setupLocalCapturer:(ARVideoCanvas *_Nullable)local;

- (void)setupLocalScreenCapturer:(ARVideoCanvas *_Nullable)local index:(int)screenIndex;

- (void)setupRemoteVideo:(ARVideoCanvas *_Nonnull)remote;

- (void)closeCapturer;


- (void)setTalkMode:(BOOL)enable;

// MARK: - 连接用户以及挂断等操作/自动化验证模式
- (void)updatePassWord:(NSString*)passWord;

- (void)connect:(NSString*)peerUserId passWord:(NSString*)peerPassWord;
- (void)disconnect;

// MARK: - 连接用户以及挂断等操作/手动同意验证模式
- (void)setRTVMode:(ARTVMode)mode;
- (void)setRTVCustomParam:(int)width height:(int)height fps:(int)fps bitrate:(int)bitrate;
- (void)tryConnect:(NSString*)peerUserId passWord:(NSString*)peerPassWord;
- (void)tryConnectAccept:(NSString*)peerUserId userId:(NSString*)userId passWord:(NSString*)passWord;
- (void)tryConnectReject:(NSString*)peerUserId;



// MARK: - 发消息以及发文件
- (int)sendMessage:(NSString*)content;
- (int)sendCtrl:(NSString*)cmd;
- (int)sendFile:(NSString*)filePath;

// MARK: - 键盘以及鼠标事件
- (void)setCursorPosition:(SIZE_CLASS)viewSize point:(POINT_CLASS)point;
- (void)setMouseClicked:(ARClickType)type;
- (void)setKeyboardClicked:(ARClickType)type value:(int)value;
- (void)setClipBoardChanged:(int)type key:(NSString*)key;
- (void)setInputString:(NSString*)content;

// MARK: -其他方法
- (NSString*)getSdkVersion;
- (void)setLogFilter:(ARLogFilter)filter;

@end

NS_ASSUME_NONNULL_END
