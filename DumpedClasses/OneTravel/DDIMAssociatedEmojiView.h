//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface DDIMAssociatedEmojiView : UIView
{
    UIButton *_emojiButton;
    CDUnknownBlockType _action;
}

@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain, nonatomic) UIButton *emojiButton; // @synthesize emojiButton=_emojiButton;
- (void).cxx_destruct;
- (void)emojiButtonDidClick:(id)arg1;
- (void)updateEmojiViewWithModel:(id)arg1 action:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

