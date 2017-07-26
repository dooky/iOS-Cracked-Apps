//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APBRequest, APBResponse, NSArray, NSDictionary, NSMutableDictionary, NSString;

@protocol IBioAuthFactor <NSObject>
+ (NSString *)getVersion;
@property(readonly, copy, nonatomic) NSString *factorName;
- (void)finalizeResponse:(APBResponse *)arg1;
- (NSMutableDictionary *)getGlobalConfig;
- (NSArray *)getTasks;
- (id)initWithRequest:(APBRequest *)arg1;

@optional
+ (NSDictionary *)getMetaInfo;
- (void)onEngineWillRestart:(NSMutableDictionary *)arg1;
@end
