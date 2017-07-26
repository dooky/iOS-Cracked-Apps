//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface AliHotSpotQuestionModel : NSObject
{
    NSString *_sign;
    NSString *_question;
    NSString *_tip;
    long long _len;
    NSString *_itemId;
    NSString *_errMsg;
    NSString *_skuId;
    NSString *_amount;
    NSDictionary *_buyParam;
}

+ (id)questionModelWithData:(id)arg1;
@property(retain, nonatomic) NSDictionary *buyParam; // @synthesize buyParam=_buyParam;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) long long len; // @synthesize len=_len;
@property(retain, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) NSString *question; // @synthesize question=_question;
@property(retain, nonatomic) NSString *sign; // @synthesize sign=_sign;
- (void).cxx_destruct;
- (id)getAnswerArray;

@end
