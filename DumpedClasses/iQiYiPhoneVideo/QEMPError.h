//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QEMPElement.h"

#import "IQEMPError-Protocol.h"

@class NSString;

@interface QEMPError : QEMPElement <IQEMPError>
{
    NSString *_business;
    unsigned long long _mtype;
    unsigned long long _type;
    NSString *_errorInfo;
    NSString *_extTypeName;
}

- (void).cxx_destruct;
- (void)setBusiness:(id)arg1;
- (void)setErrorInfo:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setMtype:(unsigned long long)arg1;
- (void)setExtTypeName:(id)arg1;
- (id)extTypeName;
- (id)errorInfo;
- (id)errorInfoDic;
- (unsigned long long)mtype;
- (unsigned long long)type;
- (id)business;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

