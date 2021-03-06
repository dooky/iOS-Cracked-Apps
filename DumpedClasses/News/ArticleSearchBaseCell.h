//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class SSThemedImageView, UILabel, UIView;

@interface ArticleSearchBaseCell : SSThemedTableViewCell
{
    UILabel *_keywordLabel;
    UIView *_separatorView;
    SSThemedImageView *_iconView;
}

@property(retain, nonatomic) SSThemedImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *keywordLabel; // @synthesize keywordLabel=_keywordLabel;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)themeChanged:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

