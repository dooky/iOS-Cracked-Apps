//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface FalconIntelligentTypesetting : NSObject
{
    NSMutableArray *_onePicTemplateArray;
    NSMutableArray *_twoPicTemplateArray;
    NSMutableArray *_threePicTemplateArray;
    NSMutableArray *_fourPicTemplateArray;
    NSMutableArray *_fivePicTemplateArray;
}

+ (id)selectBestTemplate:(id)arg1;
+ (id)getOnePicLayoutForListPage:(long long)arg1 height:(long long)arg2 screenWidth:(long long)arg3 screenHeight:(long long)arg4;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *fivePicTemplateArray; // @synthesize fivePicTemplateArray=_fivePicTemplateArray;
@property(retain, nonatomic) NSMutableArray *fourPicTemplateArray; // @synthesize fourPicTemplateArray=_fourPicTemplateArray;
@property(retain, nonatomic) NSMutableArray *threePicTemplateArray; // @synthesize threePicTemplateArray=_threePicTemplateArray;
@property(retain, nonatomic) NSMutableArray *twoPicTemplateArray; // @synthesize twoPicTemplateArray=_twoPicTemplateArray;
@property(retain, nonatomic) NSMutableArray *onePicTemplateArray; // @synthesize onePicTemplateArray=_onePicTemplateArray;
- (void).cxx_destruct;
- (id)getBestTemplate:(id)arg1 TemplateArray:(id)arg2 templateCount:(long long)arg3;
- (id)init;
- (void)generateFivePicTemplateArray;
- (void)generateFourPicTemplateArray;
- (void)generateThreePicTemplateArray;
- (void)generateTwoPicTemplateArray;
- (void)generateOnePicTemplateArray;

@end
