//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SoapAction.h"

@interface SoapActionsWANPOTSLinkConfig1 : SoapAction
{
}

- (long long)GetPlusVTRCommandSupportedWithOutNewPlusVTRCommandSupported:(id)arg1;
- (long long)GetDataCompressionWithOutNewDataCompression:(id)arg1;
- (long long)GetDataProtocolWithOutNewDataProtocol:(id)arg1;
- (long long)GetDataModulationSupportedWithOutNewDataModulationSupported:(id)arg1;
- (long long)GetFclassWithOutNewFclass:(id)arg1;
- (long long)GetCallRetryInfoWithOutNewNumberOfRetries:(id)arg1 OutNewDelayBetweenRetries:(id)arg2;
- (long long)GetISPInfoWithOutNewISPPhoneNumber:(id)arg1 OutNewISPInfo:(id)arg2 OutNewLinkType:(id)arg3;
- (long long)SetCallRetryInfoWithNewNumberOfRetries:(id)arg1 NewDelayBetweenRetries:(id)arg2;
- (long long)SetISPInfoWithNewISPPhoneNumber:(id)arg1 NewISPInfo:(id)arg2 NewLinkType:(id)arg3;

@end
