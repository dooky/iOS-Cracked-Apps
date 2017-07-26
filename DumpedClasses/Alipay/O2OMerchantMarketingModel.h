//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OMistModel.h"

@class MOBILECSAProtocolInfo, NSDictionary, NSString, O2OMerchantProtocolItem;

@interface O2OMerchantMarketingModel : O2OMistModel
{
    _Bool _student;
    _Bool _downGrade;
    NSString *_shopId;
    NSString *_voucherType;
    NSString *_lastId;
    NSString *_cityId;
    NSString *_reqSrc;
    NSString *_studentCertifyUrl;
    unsigned long long _voucherNum;
    MOBILECSAProtocolInfo *_protocolInfo;
    NSDictionary *_extInfo;
    O2OMerchantProtocolItem *_protocolItem;
    NSDictionary *_monitorDic;
}

@property(retain, nonatomic) NSDictionary *monitorDic; // @synthesize monitorDic=_monitorDic;
@property(nonatomic) _Bool downGrade; // @synthesize downGrade=_downGrade;
@property(retain, nonatomic) O2OMerchantProtocolItem *protocolItem; // @synthesize protocolItem=_protocolItem;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) MOBILECSAProtocolInfo *protocolInfo; // @synthesize protocolInfo=_protocolInfo;
@property(nonatomic) unsigned long long voucherNum; // @synthesize voucherNum=_voucherNum;
@property(retain, nonatomic) NSString *studentCertifyUrl; // @synthesize studentCertifyUrl=_studentCertifyUrl;
@property(nonatomic) _Bool student; // @synthesize student=_student;
@property(retain, nonatomic) NSString *reqSrc; // @synthesize reqSrc=_reqSrc;
@property(retain, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) NSString *lastId; // @synthesize lastId=_lastId;
@property(retain, nonatomic) NSString *voucherType; // @synthesize voucherType=_voucherType;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;
- (id)operationType;
- (id)templateConfig;
- (_Bool)handleTemplatesCompletion:(id)arg1 failedItems:(id)arg2 err:(id)arg3;
- (_Bool)shouldDowngrade;
- (long long)allVoucherCount;
- (id)responseObjects:(id)arg1;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (void)reset;
- (id)rpcRequest;

@end
