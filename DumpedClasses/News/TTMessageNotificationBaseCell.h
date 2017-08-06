//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class TTMessageNotificationBaseCellView;

@interface TTMessageNotificationBaseCell : UITableViewCell
{
    TTMessageNotificationBaseCellView *_cellView;
}

+ (Class)cellViewClass;
+ (double)heightForData:(id)arg1 cellWidth:(double)arg2;
@property(retain, nonatomic) TTMessageNotificationBaseCellView *cellView; // @synthesize cellView=_cellView;
- (void).cxx_destruct;
- (void)themeChanged:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)cellData;
- (void)refreshWithData:(id)arg1;
- (void)layoutSubviews;
- (void)refreshUI;
- (id)createCellView;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
