//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface FMTextListView : UIView
{
    unsigned long long _markerStyle;
    double _listItemSpacing;
    NSArray *_textList;
    NSArray *_markers;
    NSArray *_labels;
}

@property(copy, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(copy, nonatomic) NSArray *markers; // @synthesize markers=_markers;
@property(retain, nonatomic) NSArray *textList; // @synthesize textList=_textList;
@property(nonatomic) double listItemSpacing; // @synthesize listItemSpacing=_listItemSpacing;
@property(nonatomic) unsigned long long markerStyle; // @synthesize markerStyle=_markerStyle;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
