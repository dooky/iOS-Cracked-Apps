//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FAKTVMultiLineKrcView;

@protocol FAKTVPanKrcViewDelegate <NSObject>
- (void)locationPlayTime:(double)arg1;

@optional
- (void)lineKrcView:(FAKTVMultiLineKrcView *)arg1 didScroll:(double)arg2;
- (void)lineKrcWillBeginScrolling:(FAKTVMultiLineKrcView *)arg1;
@end
