//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIScrollView;

@protocol TBMagicCubeScrollViewItemProtocol <NSObject>

@optional
- (UIScrollView *)getScrollView;
- (void)setComponentRefreshHandler:(void (^)(void))arg1;
- (void)setComponentReloadHandler:(void (^)(void))arg1;
@end
