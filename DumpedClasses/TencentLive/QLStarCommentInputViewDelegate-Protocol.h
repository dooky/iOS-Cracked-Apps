//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, QLJCEApolloVoiceData;

@protocol QLStarCommentInputViewDelegate <NSObject>
- (_Bool)shouldShowHeaderViewBottomMarkLaberl;

@optional
- (void)sendStarCommentPublish:(NSString *)arg1 photoes:(NSArray *)arg2 videos:(NSArray *)arg3 postTypeOption:(unsigned long long)arg4;
- (NSDictionary *)getStarCommentPublishInfo;
- (void)starCommentInputViewDidClickCommentPublishButton;
- (void)starCommentInputViewDidClickVoicePublishButton:(QLJCEApolloVoiceData *)arg1;
@end
