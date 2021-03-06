//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMemGroup, FBMemGroupPurpose, NSIndexPath, NSNumber, NSString, UIButton, UIView;

@protocol FBGroupsLandingActionProviderProtocol <NSObject>

@optional
- (void)didSelectGroupAtIndexPath:(NSIndexPath *)arg1 landingProvider:(id)arg2;
- (void)didTapNotificationSettingsForGroup:(FBMemGroup *)arg1 landingProvider:(id)arg2;
- (void)didTapCreateShortcutForGroup:(FBMemGroup *)arg1 landingProvider:(id)arg2;
- (void)didTapPogWithGroupId:(NSString *)arg1 pogCenter:(struct CGPoint)arg2 landingProvider:(id)arg3 unreadCount:(NSNumber *)arg4;
- (void)didTapCreateGroup:(UIView *)arg1 withPurpose:(FBMemGroupPurpose *)arg2 landingProvider:(id)arg3;
- (void)didTapCreateGroup:(UIView *)arg1 landingProvider:(id)arg2;
- (void)didTapSortGroups:(UIButton *)arg1 landingProvider:(id)arg2;
- (void)didTapEditGroups:(UIButton *)arg1 landingProvider:(id)arg2;
@end

