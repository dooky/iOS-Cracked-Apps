//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSArray<FALCAppGiftList>, NSArray<FALCGiftCategory>, NSArray<FALCRoomGiftModel>;

@interface FALCGiftList : FAModel
{
    NSArray<FALCGiftCategory> *_categoryList;
    NSArray<FALCRoomGiftModel> *_giftList;
    NSArray<FALCAppGiftList> *_appGiftList;
}

@property(retain, nonatomic) NSArray<FALCAppGiftList> *appGiftList; // @synthesize appGiftList=_appGiftList;
@property(retain, nonatomic) NSArray<FALCRoomGiftModel> *giftList; // @synthesize giftList=_giftList;
@property(retain, nonatomic) NSArray<FALCGiftCategory> *categoryList; // @synthesize categoryList=_categoryList;
- (void).cxx_destruct;

@end
