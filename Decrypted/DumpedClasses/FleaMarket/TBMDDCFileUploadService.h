//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface TBMDDCFileUploadService : NSObject
{
    long long _retryTime;
    NSMutableData *_receiveData;
}

@property(retain, nonatomic) NSMutableData *receiveData; // @synthesize receiveData=_receiveData;
@property(nonatomic) long long retryTime; // @synthesize retryTime=_retryTime;
- (void).cxx_destruct;
- (_Bool)sendRequest:(id)arg1;
- (void)realTimeUploadAction:(id)arg1;
- (id)buildRomdonString;

@end
