//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DWHTTPRequest, NSDictionary, NSMutableArray, NSString;

@interface DWAdInfo : NSObject
{
    _Bool _canClick;
    _Bool _canSkip;
    CDUnknownBlockType _errorBlock;
    CDUnknownBlockType _finishBlock;
    long long _time;
    NSMutableArray *_ad;
    DWHTTPRequest *_request;
    NSString *_userId;
    NSString *_videoId;
    NSString *_type;
    NSDictionary *_response;
}

@property(retain, nonatomic) NSDictionary *response; // @synthesize response=_response;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) DWHTTPRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSMutableArray *ad; // @synthesize ad=_ad;
@property(nonatomic) _Bool canSkip; // @synthesize canSkip=_canSkip;
@property(nonatomic) _Bool canClick; // @synthesize canClick=_canClick;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
- (void).cxx_destruct;
- (void)callErrorBlockWithString:(id)arg1;
- (void)callErrorBlockWithError:(id)arg1;
- (void)parseResponseAdInfo;
- (void)start;
- (id)generateParamsWithUserId:(id)arg1 videoId:(id)arg2 type:(id)arg3;
- (id)initWithUserId:(id)arg1 andVideoId:(id)arg2 type:(id)arg3;

@end

