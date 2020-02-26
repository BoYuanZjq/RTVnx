//
//  ARNvcObjects.h
//  RTVncEngine_Mac
//
//  Created by zjq on 2019/10/22.
//  Copyright © 2019 MaoZongWu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ARVncEnumerates.h"

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
typedef UIView VIEW_CLASS;
typedef UIColor COLOR_CLASS;
typedef CGSize SIZE_CLASS;
typedef CGPoint POINT_CLASS;
#elif TARGET_OS_MAC
#import <AppKit/AppKit.h>
typedef NSView VIEW_CLASS;
typedef NSColor COLOR_CLASS;
typedef NSSize SIZE_CLASS;
typedef NSPoint POINT_CLASS;
#endif


NS_ASSUME_NONNULL_BEGIN

@interface ARVideoCanvas :NSObject
// 视频窗口
@property (strong, nonatomic) VIEW_CLASS* _Nullable view;
// 显示模式
@property (assign, nonatomic) ARVideoRenderMode renderMode;
// 用户id
@property (strong, nonatomic) NSString *userId;
// 视频的大小frame
@property (assign, nonatomic,readonly) CGRect videoFrame;
// 视频分辨率
@property (assign, nonatomic, readonly) CGSize videoSize;

@end


NS_ASSUME_NONNULL_END
