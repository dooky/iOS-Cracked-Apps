//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface token_req_t : JceObjectV2
{
    NSString *jcev2_p_0_r_secret;
    NSString *jcev2_p_1_r_appid;
    NSString *jcev2_p_2_r_code;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=code, setter=setCode:) NSString *jcev2_p_2_r_code; // @synthesize jcev2_p_2_r_code;
@property(retain, nonatomic, getter=appid, setter=setAppid:) NSString *jcev2_p_1_r_appid; // @synthesize jcev2_p_1_r_appid;
@property(retain, nonatomic, getter=secret, setter=setSecret:) NSString *jcev2_p_0_r_secret; // @synthesize jcev2_p_0_r_secret;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

