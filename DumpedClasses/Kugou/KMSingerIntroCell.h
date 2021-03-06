//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MusicBaseCell.h"

@class KGThemeImageView, KGThemeLabel, NSString;

@interface KMSingerIntroCell : MusicBaseCell
{
    _Bool _needShowArrow;
    _Bool _isSpread;
    double _introLabelHeight;
    NSString *_intro;
    KGThemeLabel *_introLabel;
    KGThemeImageView *_arrowImgView;
}

@property(retain, nonatomic) KGThemeImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) KGThemeLabel *introLabel; // @synthesize introLabel=_introLabel;
@property(nonatomic) _Bool isSpread; // @synthesize isSpread=_isSpread;
@property(nonatomic) _Bool needShowArrow; // @synthesize needShowArrow=_needShowArrow;
@property(copy, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(nonatomic) double introLabelHeight; // @synthesize introLabelHeight=_introLabelHeight;
- (void).cxx_destruct;
- (void)showArrow;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

