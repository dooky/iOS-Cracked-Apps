//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGSkinButton, KGThemeButton, UIImageView, UILabel;

@interface MVDetailHeader : UIView
{
    KGThemeButton *_likeBtn;
    KGThemeButton *_shareBtn;
    KGThemeButton *_cachBtn;
    UILabel *_songNameLabel;
    UILabel *_singerLable;
    KGSkinButton *_singerBtn;
    id <MVDetailHeaderDelegate> _delegate;
    UIImageView *_successImgView;
}

@property(retain, nonatomic) UIImageView *successImgView; // @synthesize successImgView=_successImgView;
@property(nonatomic) __weak id <MVDetailHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KGSkinButton *singerBtn; // @synthesize singerBtn=_singerBtn;
@property(retain, nonatomic) UILabel *singerLable; // @synthesize singerLable=_singerLable;
@property(retain, nonatomic) UILabel *songNameLabel; // @synthesize songNameLabel=_songNameLabel;
@property(retain, nonatomic) KGThemeButton *cachBtn; // @synthesize cachBtn=_cachBtn;
@property(retain, nonatomic) KGThemeButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) KGThemeButton *likeBtn; // @synthesize likeBtn=_likeBtn;
- (void).cxx_destruct;
- (void)removeCacheSuccessView;
- (void)addCacheSuccessView;
- (void)shareButtonClick:(id)arg1;
- (void)cacheButtonClick:(id)arg1;
- (void)likeButtonClick:(id)arg1;
- (_Bool)hasSingerByFileName:(id)arg1;
- (void)mvLikeSetting:(_Bool)arg1;
- (void)singerLabelSetting:(id)arg1;
- (void)tapSingerLabel:(id)arg1;
- (void)initSubviews;
- (id)init;

@end
