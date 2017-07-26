//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewPluginQQBizBase.h"

#import "APMidasPayDelegate.h"

@class NSDictionary, NSString;

@interface QQWalletPayJsPlugin : QQWebViewPluginQQBizBase <APMidasPayDelegate>
{
    NSDictionary *_getQBRecordquery;
    _Bool _isBusying;
    NSDictionary *_lastRequestParams;
}

@property(nonatomic) _Bool isBusying; // @synthesize isBusying=_isBusying;
@property(retain, nonatomic) NSDictionary *lastRequestParams; // @synthesize lastRequestParams=_lastRequestParams;
- (void).cxx_destruct;
- (void)_callbackQBRecord:(id)arg1 error:(id)arg2;
- (void)onResp:(id)arg1;
- (void)needLogin;
- (_Bool)handleJsBridgeRequest_pay_getProductInfoStatus:(id)arg1;
- (_Bool)handleJsBridgeRequest_pay_buyGoods:(id)arg1;
- (_Bool)handleJsBridgeRequest_pay_upgradeSuperVip:(id)arg1;
- (_Bool)handleJsBridgeRequest_pay_openService:(id)arg1;
- (_Bool)handleJsBridgeRequest_tenpay_getQBRecord:(id)arg1;
- (_Bool)handleJsBridgeRequest_pay_launchWechatPaySign:(id)arg1;
- (_Bool)handleJsBridgeRequest_tenpay_rechargeQb:(id)arg1;
- (void)postPayError:(id)arg1;
- (void)finishPayProcess;
- (void)beginPayProcess;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
