//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCChatBubble.h"

#import "MCChatBubbleBackgroundViewDelegate.h"

@class MCChatBubbleBackgroundView, NSString, UIImageView, UILabel;

@interface MCChatVideoBubble : MCChatBubble <MCChatBubbleBackgroundViewDelegate>
{
    MCChatBubbleBackgroundView *_previewImageView;
    UIImageView *_maskView;
    UIImageView *_playIcon;
    UIImageView *_bottomMask;
    UILabel *_durationLabel;
}

+ (struct CGSize)bubbleSizeForMessage:(id)arg1 withContainer:(struct CGSize)arg2;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UIImageView *bottomMask; // @synthesize bottomMask=_bottomMask;
@property(retain, nonatomic) UIImageView *playIcon; // @synthesize playIcon=_playIcon;
@property(retain, nonatomic) UIImageView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) MCChatBubbleBackgroundView *previewImageView; // @synthesize previewImageView=_previewImageView;
- (void).cxx_destruct;
- (id)durationText:(long long)arg1;
- (void)chatBubbleBackgroundViewLongPress:(id)arg1;
- (void)chatBubbleBackgroundViewTapped:(id)arg1;
- (void)updateBubbleWithCellObject:(id)arg1 bubbleHandler:(id)arg2;
- (id)initWithBubbleStyle:(long long)arg1 subStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
