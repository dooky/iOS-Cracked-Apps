//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface TMapBeaconAnaModel : NSObject
{
    NSString *appId;
    NSString *appVersion;
    NSString *reserved;
    NSString *bundleId;
    NSString *sdkId;
    NSString *sdkVersion;
    int platformId;
    NSString *hardwareModel;
    NSString *hardwareOs;
    NSString *osVer;
    float osVerFloat;
    NSString *qua;
    NSString *guid;
    NSString *contact;
    unsigned int uin;
    NSString *qimei;
    NSString *openudid;
    NSString *udidVendor;
    NSString *advUid;
    NSString *gatewayIP;
    NSString *channel_id;
    long long serverTimeDelta;
    _Bool gotServerTime;
    long long lastRecordTime;
    NSString *verHash;
    NSString *localVer;
    NSString *country;
    NSString *language;
    long long romSize;
    long long ramSize;
    _Bool isReet;
    _Bool isnew;
    _Bool isNewWithVer;
    NSString *macadd;
    NSString *wifiName;
    NSString *mbCarrier;
    NSString *imsi;
    NSString *wifiMac;
    NSString *networkType;
    NSString *apn;
    long long appUseTime;
    long long appAvaTime;
    NSString *_sessionid;
    NSString *_QQ;
    NSDictionary *_addParams;
}

+ (id)getDefualtBeaconAnaModel;
@property(retain, nonatomic) NSDictionary *addParams; // @synthesize addParams=_addParams;
@property(retain, nonatomic) NSString *QQ; // @synthesize QQ=_QQ;
@property(retain, nonatomic) NSString *sessionid; // @synthesize sessionid=_sessionid;
@property long long appAvaTime; // @synthesize appAvaTime;
@property long long appUseTime; // @synthesize appUseTime;
@property(retain) NSString *apn; // @synthesize apn;
@property(retain) NSString *networkType; // @synthesize networkType;
@property(retain) NSString *wifiMac; // @synthesize wifiMac;
@property(retain) NSString *imsi; // @synthesize imsi;
@property(retain) NSString *mbCarrier; // @synthesize mbCarrier;
@property(retain) NSString *wifiName; // @synthesize wifiName;
@property(retain) NSString *macadd; // @synthesize macadd;
@property(nonatomic) _Bool isNewWithVer; // @synthesize isNewWithVer;
@property(nonatomic) _Bool isnew; // @synthesize isnew;
@property(retain, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion;
@property(retain, nonatomic) NSString *sdkId; // @synthesize sdkId;
@property(nonatomic) _Bool isReet; // @synthesize isReet;
@property long long lastRecordTime; // @synthesize lastRecordTime;
@property(retain, nonatomic) NSString *channel_id; // @synthesize channel_id;
@property(retain) NSString *openudid; // @synthesize openudid;
@property(nonatomic) long long romSize; // @synthesize romSize;
@property(nonatomic) long long ramSize; // @synthesize ramSize;
@property(retain) NSString *qimei; // @synthesize qimei;
@property(retain, nonatomic) NSString *language; // @synthesize language;
@property(retain, nonatomic) NSString *country; // @synthesize country;
@property(retain, nonatomic) NSString *hardwareModel; // @synthesize hardwareModel;
@property _Bool gotServerTime; // @synthesize gotServerTime;
@property long long serverTimeDelta; // @synthesize serverTimeDelta;
@property(retain) NSString *advUid; // @synthesize advUid;
@property(retain) NSString *udidVendor; // @synthesize udidVendor;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId;
@property(retain, nonatomic) NSString *contact; // @synthesize contact;
@property(nonatomic) float osVerFloat; // @synthesize osVerFloat;
@property(retain, nonatomic) NSString *osVer; // @synthesize osVer;
@property(retain, nonatomic) NSString *reserved; // @synthesize reserved;
@property(retain, nonatomic) NSString *guid; // @synthesize guid;
@property(retain) NSString *gatewayIP; // @synthesize gatewayIP;
@property(retain, nonatomic) NSString *hardwareOs; // @synthesize hardwareOs;
@property(retain, nonatomic) NSString *qua; // @synthesize qua;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(nonatomic) int platformId; // @synthesize platformId;
- (void).cxx_destruct;
- (void)saveVersionHash:(id)arg1;
- (id)getVersionHash;
- (id)getKey:(id)arg1;
- (void)persistAllKey;
- (void)unSetKey:(id)arg1;
- (void)setKey:(id)arg1 value:(id)arg2;
- (void)persistKey:(id)arg1 value:(id)arg2;
- (void)initBundleFile;
- (_Bool)isVersionChanged;
- (id)init;

@end
