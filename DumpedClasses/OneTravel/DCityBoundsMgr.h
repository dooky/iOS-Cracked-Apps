//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface DCityBoundsMgr : NSObject
{
    NSArray *_cityBoundsList;
}

@property(retain, nonatomic) NSArray *cityBoundsList; // @synthesize cityBoundsList=_cityBoundsList;
- (id)getCityNameByPos:(long long)arg1 widthPosY:(long long)arg2;
- (_Bool)loadCityBounds;
- (void)dealloc;
- (id)init;

@end
