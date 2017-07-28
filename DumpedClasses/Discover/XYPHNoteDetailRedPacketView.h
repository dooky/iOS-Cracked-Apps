//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface XYPHNoteDetailRedPacketView : UIView
{
    UIImageView *_userAvatar;
    UILabel *_userNameLabel;
    UILabel *_redPacketNameLabel;
    UIImageView *_redPacketImage;
    CDUnknownBlockType _redPacketViewClickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType redPacketViewClickBlock; // @synthesize redPacketViewClickBlock=_redPacketViewClickBlock;
@property(retain, nonatomic) UIImageView *redPacketImage; // @synthesize redPacketImage=_redPacketImage;
@property(retain, nonatomic) UILabel *redPacketNameLabel; // @synthesize redPacketNameLabel=_redPacketNameLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *userAvatar; // @synthesize userAvatar=_userAvatar;
- (void).cxx_destruct;
- (void)redPacketButtonClickEvent;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end
