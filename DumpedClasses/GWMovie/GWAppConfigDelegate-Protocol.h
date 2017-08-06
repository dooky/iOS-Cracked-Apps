//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GWDynamicIPInfo, NSDictionary, NSString;

@protocol GWAppConfigDelegate <NSObject>
- (NSString *)deviceid;
- (NSString *)idfa;
- (NSString *)wpCityId;
- (NSString *)cityname;
- (NSString *)citycode;
- (NSString *)mnet;
- (NSString *)pointy;
- (NSString *)pointx;
- (NSString *)restfulBaseURLString;
- (NSString *)privateKey;
- (NSString *)key;
- (NSString *)osType;
- (NSString *)appSource;
- (NSString *)appVersion;
- (NSString *)appType;
- (double)timeChaIntervalWithServer;
- (NSString *)token;
- (NSString *)memberEncode;

@optional
- (NSString *)securityCode;
- (NSDictionary *)httpHeaderAddition;
- (NSString *)uuid;
- (GWDynamicIPInfo *)dynamicIpInfoWithMethod:(NSString *)arg1;
@end
