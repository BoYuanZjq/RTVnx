//
//  ARVncKitDelegate.h
//  RTVncEngine_Mac
//
//  Created by zjq on 2019/10/22.
//  Copyright © 2019 MaoZongWu. All rights reserved.
//

#ifndef ARVncKitDelegate_h
#define ARVncKitDelegate_h
#import "ARNvcObjects.h"

@protocol ARVncKitDelegate <NSObject>

- (void)onRTVncLogin:(int)code;
- (void)onRTVncLogout:(int)code;

- (void)onRTVncConnect:(NSString*)userId code:(int)code;
//- (void)onRTVncPeerScreen:(int)type screenWidth:(int)width screenHeight:(int)height;
//- (void)onRTVncPeerScreenResize:(int)type screenWidth:(int)width screenHeight:(int)height;
- (void)onRTVncVideoView:(VIEW_CLASS*)videoView didChangeVideoSize:(CGSize)size;
- (void)onRTVncPeerConnect:(NSString*)userId userData:(NSString*)userData;
- (void)onRTVncDisconnect:(NSString*)userId code:(int)code;

- (void)onRTVncTryConnect:(NSString*)userId userData:(NSString*)userData;
- (void)onRTVncTryConnectEnd:(NSString*)userId;

- (void)onRTVncRecvMsg:(NSString*)userId content:(NSString*)content;
- (void)onRTVncRecvCtrl:(NSString*)userId cmd:(NSString*)cmd;
- (void)onRTVncRecvFile:(NSString*)userId filePath:(NSString*)filePath;


- (void)onRTVncSendMsgStatus:(int)msgId status:(int)status;
- (void)onRTVncSendFileStatus:(int)fileId present:(int)present;

- (void)onRTVncNetStatus:(int)audioLevel sendBytes:(int)sendBytes recvBytes:(int)recvBytes packLost:(int)packLost rtt:(int)rtt decodeDelay:(int)decodeDelay renderDelay:(int)renderDelay framesReceived:(int)framesReceived framesDecode:(int)framesDecode;

- (void)onRTVncMouseMove:(POINT_CLASS)point;
- (void)onRTVncMouseStyle:(ARCousorType)type;


- (void)onRtcOpenVideoRender:(NSString*)userId;
- (void)onRtcCloseVideoRender:(NSString*)userId;
- (void)onRtcOpenAudioTrack:(NSString*)userId;
- (void)onRtcCloseAudioTrack:(NSString*)userId;


@end


#endif /* ARVncKitDelegate_h */
