//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol QLTADPlayerManagerDelegate <NSObject>

@optional
- (void)didNetworkStateChange:(long long)arg1;
- (void)didMediaPlayerDurationChanged:(double)arg1 playableDuration:(double)arg2 duration:(double)arg3;
- (void)didMediaPlayerScreenChanged:(_Bool)arg1;
- (void)didMediaPlayerStateChanged:(long long)arg1 error:(NSError *)arg2;
@end
