//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SEvaluateSheetViewQuestionCell;

@protocol SEvaluateSheetViewQuestionCellDelegate <NSObject>
- (void)questionCell:(SEvaluateSheetViewQuestionCell *)arg1 didSelectedStarWithRating:(long long)arg2;
- (void)questionCell:(SEvaluateSheetViewQuestionCell *)arg1 didSelectedOptionWithIndexs:(NSArray *)arg2;
@end
