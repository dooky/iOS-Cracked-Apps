//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface WopcApiBasicBridge : NSObject
{
    NSMutableDictionary *_apiDic;
}

@property(retain, nonatomic) NSMutableDictionary *apiDic; // @synthesize apiDic=_apiDic;
- (void).cxx_destruct;
- (id)findServiceByTidaApi:(id)arg1 methodParam:(id)arg2;
- (id)getTopApiByTidaApi:(id)arg1 MethodParam:(id)arg2;

@end
