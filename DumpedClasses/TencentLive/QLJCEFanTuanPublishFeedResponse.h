//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEAction;

@interface QLJCEFanTuanPublishFeedResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    NSString *jcev2_p_1_r_feedId;
    NSString *jcev2_p_2_o_fanTuanId;
    long long jcev2_p_3_o_pubTime;
    QLJCEAction *jcev2_p_4_o_action;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_action, setter=setJce_action:) QLJCEAction *jcev2_p_4_o_action; // @synthesize jcev2_p_4_o_action;
@property(nonatomic, getter=jce_pubTime, setter=setJce_pubTime:) long long jcev2_p_3_o_pubTime; // @synthesize jcev2_p_3_o_pubTime;
@property(retain, nonatomic, getter=jce_fanTuanId, setter=setJce_fanTuanId:) NSString *jcev2_p_2_o_fanTuanId; // @synthesize jcev2_p_2_o_fanTuanId;
@property(retain, nonatomic, getter=jce_feedId, setter=setJce_feedId:) NSString *jcev2_p_1_r_feedId; // @synthesize jcev2_p_1_r_feedId;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end
