//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, NSArray;

@interface O2OFilterTopView : UIView
{
    id <O2OFilterTopViewDelegate> _delegate;
    NSArray *_data;
    NSArray *_filterViewList;
    CALayer *_bottomLine;
}

@property(retain, nonatomic) CALayer *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(copy, nonatomic) NSArray *filterViewList; // @synthesize filterViewList=_filterViewList;
@property(copy, nonatomic) NSArray *data; // @synthesize data=_data;
@property(nonatomic) __weak id <O2OFilterTopViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)disappear;
- (void)didSelected:(id)arg1;
- (id)upArrowView:(struct CGSize)arg1;
- (void)reloadData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
