//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSString, NSURL;

@protocol GXInteraction <NSObject>
- (_Bool)startApp:(NSString *)arg1 extraData:(NSData *)arg2;
- (_Bool)popupWithTitle:(NSString *)arg1 message:(NSString *)arg2 img:(NSString *)arg3 buttons:(NSArray *)arg4 callback:(void (^)(long long))arg5;
- (_Bool)notifyWithTitle:(NSString *)arg1 message:(NSString *)arg2 callback:(void (^)(_Bool))arg3;
- (_Bool)startWeb:(NSURL *)arg1;
@end
