//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVBridgeComplexHandlerInfo.h"

@interface WVBridgeProtocolHandlerInfo : WVBridgeComplexHandlerInfo
{
    Class _bridgeClass;
    SEL _bridgeSEL;
    _Bool _oldProtocol;
    unsigned long long _instanceScope;
}

+ (id)handlerInfoWithClass:(Class)arg1 withSEL:(SEL)arg2 withOldSEL:(SEL)arg3;
- (id)description;
- (void)invoke:(id)arg1 withParams:(id)arg2 withCallbackContext:(id)arg3 withContext:(id)arg4;
- (id)createInstance;
- (_Bool)supportContext;
- (unsigned long long)instanceScope;
- (id)className;
- (id)initWithClass:(Class)arg1 withSEL:(SEL)arg2;

@end
