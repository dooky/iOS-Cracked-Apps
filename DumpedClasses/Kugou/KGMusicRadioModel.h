//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface KGMusicRadioModel : NSObject
{
    long long _radioClassTotal;
    unsigned long long _updateTime;
    NSMutableArray *_radioClassListArray;
}

@property(retain, nonatomic) NSMutableArray *radioClassListArray; // @synthesize radioClassListArray=_radioClassListArray;
@property(nonatomic) unsigned long long updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) long long radioClassTotal; // @synthesize radioClassTotal=_radioClassTotal;
- (void).cxx_destruct;
- (void)parseDictionary:(id)arg1;
- (id)initWithResponseDictionary:(id)arg1;
- (id)init;

@end
