//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class SSThemedImageView, SSThemedLabel, SSThemedView;

@interface TTScreenshotShareCollectionViewCell : UICollectionViewCell
{
    SSThemedView *_containerView;
    SSThemedImageView *_iconImageView;
    SSThemedLabel *_titleLabel;
}

@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SSThemedImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) SSThemedView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setUpWithitem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
