//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseGetInput.h"

@class NSNumber;

@interface FXCSong : FXBaseGetInput
{
    NSNumber *_songType;
    NSNumber *_indexId;
    NSNumber *_pageType;
    NSNumber *_pageSize;
    NSNumber *_starId;
}

@property(retain, nonatomic) NSNumber *starId; // @synthesize starId=_starId;
@property(retain, nonatomic) NSNumber *pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSNumber *pageType; // @synthesize pageType=_pageType;
@property(retain, nonatomic) NSNumber *indexId; // @synthesize indexId=_indexId;
@property(retain, nonatomic) NSNumber *songType; // @synthesize songType=_songType;
- (void).cxx_destruct;

@end
