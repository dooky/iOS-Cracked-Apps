//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@class NSArray<FXStarLightListItem>;

@interface FXSMobileLiveStarLightListModel : FXBaseJSONModel
{
    long long _event;
    NSArray<FXStarLightListItem> *_rankingList;
    long long _starKugouId;
    long long _starsCount;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long starsCount; // @synthesize starsCount=_starsCount;
@property(nonatomic) long long starKugouId; // @synthesize starKugouId=_starKugouId;
@property(retain, nonatomic) NSArray<FXStarLightListItem> *rankingList; // @synthesize rankingList=_rankingList;
@property(nonatomic) long long event; // @synthesize event=_event;
- (void).cxx_destruct;

@end
